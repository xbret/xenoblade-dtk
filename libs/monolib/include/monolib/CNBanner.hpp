#pragma once

#include "types.h"
#include "monolib/IWorkEvent.hpp"

class CNBanner : IWorkEvent {
public:
	CNBanner(const char* title, const char* desc, const char* bannerFilename, const char** iconFilenames, int* someArray){
		init();
		func_804F52F8(title);
		func_804F5304(desc);
		func_804F5310(bannerFilename);
		func_804F531C(iconFilenames, someArray);
	}
	virtual ~CNBanner();
	void init();
	virtual bool OnFileEvent(CEventFile* eventFile);
	void func_804F52F8(const char* str);
	void func_804F5304(const char* str);
	void func_804F5310(const char* str);
	void func_804F531C(const char** filenames, int* someArray);

	//0x0: vtable
	u8 unk4[0x321];
};
