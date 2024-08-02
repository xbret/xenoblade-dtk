#include "revolution/euart/euart.h"
#include "revolution/OS.h"
#include "revolution/EXI.h"

static u32 Enabled;
static BOOL __EUARTSendStop;
static EUARTError __EUARTLastErrorCode;
static BOOL __EUARTInitialized;

BOOL EUARTInit(){
	BOOL enabled;
    u8 val;

    if (__EUARTInitialized) {
        return TRUE;
    }

    if (!(OSGetConsoleType() & 0x10000000)) {
        __EUARTLastErrorCode = EUART_ERROR_CANNOT_USE;
        return FALSE;
    }

    enabled = OSDisableInterrupts();

    val = -14;
    if (!EXIWriteReg(0, 1, 0xB0000000, &val, 1)) {
        __EUARTLastErrorCode = EUART_ERROR_INTERNAL;
        OSRestoreInterrupts(enabled);
        return FALSE;
    }

    val = -13;
    if (!EXIWriteReg(0, 1, 0xB0000000, &val, 1)) {
        __EUARTLastErrorCode = EUART_ERROR_INTERNAL;
        OSRestoreInterrupts(enabled);
        return FALSE;
    }

    OSRestoreInterrupts(enabled);

    __EUARTInitialized = TRUE;
    __EUARTLastErrorCode = EUART_ERROR_NONE;
    __EUARTSendStop = FALSE;
    return TRUE;
}

//unused
void EUARTExit(){
}

//unused
void EUARTPrintf(){
}

//unused
void EUARTSetStatus(){
}

//unused
EUARTError EUARTGetLastError(){
}


UARTError InitializeUART(UARTBaudRate baudRate){
	if(!(OSGetConsoleType() & 0x10000000)){
		Enabled = 0;
		return kUARTConfigurationError;
	}else{
		Enabled = 0xA5FF005A;
		return kUARTNoError;
	}
}

//unused
UARTError ReadUARTN(){
}

static int QueueLength(void) {
    u32 cmd, txCnt;

    if (!EXISelect(0, 1, __EXIFreq)) {
        return -1;
    }

    cmd = 0x30000100;
    EXIImm(0, &cmd, 4, 1, NULL);
    EXISync(0);
    EXIImm(0, &txCnt, sizeof(txCnt), 0, NULL);
    EXISync(0);
    EXIDeselect(0);
    return 32 - (u8)((txCnt >> 24) & 0x3F);
}

UARTError WriteUARTN(const void* bytes, unsigned long length){
	u32 cmd;
    int qLen;
    UARTError error;
    char* sendData = (char*)bytes;
    u32 uart_txd;

    if (Enabled != 0xA5FF005A) {
        return kUARTConfigurationError;
    }

    if (!__EUARTInitialized) {
        if (!EUARTInit()) {
            return kUARTConfigurationError;
        }
    }

    if (!__EUARTInitialized) {
        __EUARTLastErrorCode = EUART_ERROR_UNINITIALIZED;
        return kUARTConfigurationError;
    }

    if (!EXILock(0, 1, 0)) {
        return kUARTNoError;
    }

    {
        char* p;

        for (p = sendData; (p - (char*)bytes) < length; p++) {
            if (*p == '\n') {
                *p = '\r';
            }
        }
    }

    error = kUARTNoError;
    cmd = 0xB0000100;

    while (length != 0) {
        qLen = QueueLength();

        if (qLen < 0) {
            error = kUARTBufferOverflow;
            break;
        }

        if (qLen != 32) {
            continue;
        }

        if (!EXISelect(0, 1, __EXIFreq)) {
            error = kUARTBufferOverflow;
            break;
        }

        EXIImm(0, &cmd, 4, 1, NULL);
        EXISync(0);

        while ((qLen > 0) && (length > 0)) {
            uart_txd = (u32)((*sendData & 0xFF) << 24);

            EXIImm(0, &uart_txd, 4, 1, NULL);
            EXISync(0);

            sendData++;
            qLen--;
            length--;
        }

        EXIDeselect(0);
    }

    EXIUnlock(0);
    return error;
}
