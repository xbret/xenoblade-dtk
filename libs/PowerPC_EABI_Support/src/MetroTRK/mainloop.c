#include "PowerPC_EABI_Support/MetroTRK/msgbuf.h"
#include "PowerPC_EABI_Support/MetroTRK/dispatch.h"
#include "PowerPC_EABI_Support/MetroTRK/nubevent.h"
#include "PowerPC_EABI_Support/MetroTRK/mainloop.h"
#include "PowerPC_EABI_Support/MetroTRK/serpoll.h"

//unused
void TRK_HandleRequestEvent(void){
}

//unused
void TRKHandleSupportEvent(void){
}

//unused
void TRK_Idle(void){
}

/*
 * Perhaps the switch case takes TRK CMD defines as inputs?
 * As seen in Dolphin/trk.h
 */
void TRK_NubMainLoop(void){
	MessageBuffer* msg;
	NubEvent event;
	bool var_r31 = false;
	bool var_r30 = false;

	while (var_r31 == false) {
		if (TRKGetNextEvent(&event) != false) {
			var_r30 = false;
			switch (event.fType) {
			case kNullEvent:
				break;
			case kRequestEvent:
				msg = TRKGetBuffer(event.fMessageBufferID);
				TRK_DispatchMessage(msg);
				break;
			case kShutdownEvent:
				var_r31 = true;
				break;
			case kBreakpointEvent:
			case kExceptionEvent:
				TRKTargetInterrupt(&event);
				break;
			case kSupportEvent:
				TRKTargetSupportRequest();
				break;
			}
			TRKDestructEvent(&event);
		} else if (var_r30 == false || *(ui8*)gTRKInputPendingPtr != 0) {
			var_r30 = true;
			TRKGetInput();
		} else {
			if (TRKTargetStopped() == false) {
				TRKTargetContinue();
			}
			var_r30 = false;
		}
	}
}
