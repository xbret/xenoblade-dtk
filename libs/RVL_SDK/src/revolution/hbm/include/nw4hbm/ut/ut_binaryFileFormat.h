#pragma once

#include "nw4hbm/types_nw4hbm.h"

namespace nw4hbm
{
	namespace ut
	{
		struct BinaryBlockHeader
		{
			u32 magic; // File magic
			u32 length; // Length of the block (including header)
		};
		
		struct BinaryFileHeader
		{
			u32 magic; // File magic
			u16 bom; // Byte Order Mark
			u16 version; // File version
			u32 length; // Length of the file (including header)
			u16 headerLen; // Length of the header
			u16 blockCount; // Number of blocks
		};
		
		bool IsValidBinaryFile(const BinaryFileHeader *, u32, u16, u16);
	}
}
