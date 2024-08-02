#include "revolution/ax/AXComp.h"

u16 __AXCompressorDefaultTable[2016] = {
0x7F63, 0x7EC7, 0x7E2B, 0x7D91, 0x7CF7, 0x7C5E, 0x7BC5, 0x7B2E, 0x7A97, 0x7A01, 0x796B, 0x78D6, 0x7842, 0x77AF, 0x771C, 0x768B,
0x75F9, 0x7569, 0x74D9, 0x744A, 0x73BB, 0x732E, 0x72A0, 0x7214, 0x7188, 0x70FD, 0x7073, 0x6FE9, 0x6F60, 0x6ED7, 0x6E50, 0x6DC8,
0x6D42, 0x6CBC, 0x6C37, 0x6BB2, 0x6B2E, 0x6AAB, 0x6A28, 0x69A6, 0x6925, 0x68A4, 0x6824, 0x67A4, 0x6725, 0x66A7, 0x6629, 0x65AC,
0x652F, 0x64B4, 0x6438, 0x63BD, 0x6343, 0x62CA, 0x6251, 0x61D8, 0x6160, 0x60E9, 0x6072, 0x5FFC, 0x5F86, 0x5F11, 0x5E9D, 0x5E29,
0x5DB6, 0x5D43, 0x5CD1, 0x5C5F, 0x5BEE, 0x5B7D, 0x5B0D, 0x5A9D, 0x5A2E, 0x59C0, 0x5952, 0x58E5, 0x5878, 0x580B, 0x579F, 0x5734,
0x56C9, 0x565F, 0x55F5, 0x558C, 0x5523, 0x54BB, 0x5453, 0x53EC, 0x5385, 0x531E, 0x52B9, 0x5253, 0x51EE, 0x518A, 0x5126, 0x50C3,
0x79B6, 0x7930, 0x78AA, 0x7825, 0x77A0, 0x771C, 0x7699, 0x7616, 0x7594, 0x7512, 0x7491, 0x7411, 0x7391, 0x7311, 0x7292, 0x7214,
0x7196, 0x7119, 0x709C, 0x7020, 0x6FA4, 0x6F29, 0x6EAF, 0x6E35, 0x6DBB, 0x6D42, 0x6CC9, 0x6C52, 0x6BDA, 0x6B63, 0x6AED, 0x6A77,
0x6A01, 0x698C, 0x6918, 0x68A4, 0x6831, 0x67BE, 0x674B, 0x66D9, 0x6668, 0x65F7, 0x6587, 0x6517, 0x64A7, 0x6438, 0x63CA, 0x635C,
0x62EE, 0x6281, 0x6214, 0x61A8, 0x613C, 0x60D1, 0x6066, 0x5FFC, 0x5F92, 0x5F29, 0x5EC0, 0x5E57, 0x5DEF, 0x5D88, 0x5D21, 0x5CBA,
0x5C54, 0x5BEE, 0x5B88, 0x5B23, 0x5ABF, 0x5A5B, 0x59F7, 0x5994, 0x5931, 0x58CF, 0x586D, 0x580B, 0x57AA, 0x574A, 0x56E9, 0x5689,
0x562A, 0x55CB, 0x556C, 0x550E, 0x54B0, 0x5453, 0x53F6, 0x5399, 0x533D, 0x52E1, 0x5286, 0x522B, 0x51D0, 0x5176, 0x511C, 0x50C3,
0x744A, 0x73D8, 0x7366, 0x72F5, 0x7284, 0x7214, 0x71A4, 0x7135, 0x70C6, 0x7057, 0x6FE9, 0x6F7B, 0x6F0E, 0x6EA1, 0x6E35, 0x6DC8,
0x6D5D, 0x6CF2, 0x6C87, 0x6C1C, 0x6BB2, 0x6B49, 0x6AE0, 0x6A77, 0x6A0E, 0x69A6, 0x693F, 0x68D8, 0x6871, 0x680A, 0x67A4, 0x673F,
0x66D9, 0x6675, 0x6610, 0x65AC, 0x6548, 0x64E5, 0x6482, 0x6420, 0x63BD, 0x635C, 0x62FA, 0x6299, 0x6238, 0x61D8, 0x6178, 0x6119,
0x60B9, 0x605B, 0x5FFC, 0x5F9E, 0x5F40, 0x5EE3, 0x5E86, 0x5E29, 0x5DCD, 0x5D71, 0x5D15, 0x5CBA, 0x5C5F, 0x5C04, 0x5BAA, 0x5B50,
0x5AF7, 0x5A9D, 0x5A45, 0x59EC, 0x5994, 0x593C, 0x58E5, 0x588D, 0x5837, 0x57E0, 0x578A, 0x5734, 0x56DF, 0x5689, 0x5635, 0x55E0,
0x558C, 0x5538, 0x54E4, 0x5491, 0x543E, 0x53EC, 0x5399, 0x5347, 0x52F6, 0x52A4, 0x5253, 0x5203, 0x51B2, 0x5162, 0x5112, 0x50C3,
0x6F1C, 0x6EBC, 0x6E5D, 0x6DFE, 0x6DA0, 0x6D42, 0x6CE4, 0x6C87, 0x6C2A, 0x6BCD, 0x6B70, 0x6B14, 0x6AB8, 0x6A5D, 0x6A01, 0x69A6,
0x694C, 0x68F1, 0x6897, 0x683D, 0x67E4, 0x678B, 0x6732, 0x66D9, 0x6681, 0x6629, 0x65D2, 0x657A, 0x6523, 0x64CC, 0x6476, 0x6420,
0x63CA, 0x6374, 0x631F, 0x62CA, 0x6275, 0x6220, 0x61CC, 0x6178, 0x6124, 0x60D1, 0x607E, 0x602B, 0x5FD9, 0x5F86, 0x5F34, 0x5EE3,
0x5E91, 0x5E40, 0x5DEF, 0x5D9F, 0x5D4E, 0x5CFE, 0x5CAE, 0x5C5F, 0x5C10, 0x5BC1, 0x5B72, 0x5B23, 0x5AD5, 0x5A87, 0x5A3A, 0x59EC,
0x599F, 0x5952, 0x5905, 0x58B9, 0x586D, 0x5821, 0x57D5, 0x578A, 0x573F, 0x56F4, 0x56A9, 0x565F, 0x5615, 0x55CB, 0x5581, 0x5538,
0x54EF, 0x54A6, 0x545D, 0x5415, 0x53CD, 0x5385, 0x533D, 0x52F6, 0x52AE, 0x5267, 0x5221, 0x51DA, 0x5194, 0x514E, 0x5108, 0x50C3,
0x6A28, 0x69DA, 0x698C, 0x693F, 0x68F1, 0x68A4, 0x6857, 0x680A, 0x67BE, 0x6771, 0x6725, 0x66D9, 0x668E, 0x6642, 0x65F7, 0x65AC,
0x6561, 0x6517, 0x64CC, 0x6482, 0x6438, 0x63EE, 0x63A5, 0x635C, 0x6312, 0x62CA, 0x6281, 0x6238, 0x61F0, 0x61A8, 0x6160, 0x6119,
0x60D1, 0x608A, 0x6043, 0x5FFC, 0x5FB5, 0x5F6F, 0x5F29, 0x5EE3, 0x5E9D, 0x5E57, 0x5E12, 0x5DCD, 0x5D88, 0x5D43, 0x5CFE, 0x5CBA,
0x5C76, 0x5C32, 0x5BEE, 0x5BAA, 0x5B67, 0x5B23, 0x5AE0, 0x5A9D, 0x5A5B, 0x5A18, 0x59D6, 0x5994, 0x5952, 0x5910, 0x58CF, 0x588D,
0x584C, 0x580B, 0x57CB, 0x578A, 0x574A, 0x5709, 0x56C9, 0x5689, 0x564A, 0x560A, 0x55CB, 0x558C, 0x554D, 0x550E, 0x54D0, 0x5491,
0x5453, 0x5415, 0x53D7, 0x5399, 0x535C, 0x531E, 0x52E1, 0x52A4, 0x5267, 0x522B, 0x51EE, 0x51B2, 0x5176, 0x513A, 0x50FE, 0x50C3,
0x656E, 0x652F, 0x64F1, 0x64B4, 0x6476, 0x6438, 0x63FB, 0x63BD, 0x6380, 0x6343, 0x6306, 0x62CA, 0x628D, 0x6251, 0x6214, 0x61D8,
0x619C, 0x6160, 0x6124, 0x60E9, 0x60AD, 0x6072, 0x6037, 0x5FFC, 0x5FC1, 0x5F86, 0x5F4C, 0x5F11, 0x5ED7, 0x5E9D, 0x5E63, 0x5E29,
0x5DEF, 0x5DB6, 0x5D7C, 0x5D43, 0x5D0A, 0x5CD1, 0x5C98, 0x5C5F, 0x5C26, 0x5BEE, 0x5BB5, 0x5B7D, 0x5B45, 0x5B0D, 0x5AD5, 0x5A9D,
0x5A66, 0x5A2E, 0x59F7, 0x59C0, 0x5989, 0x5952, 0x591B, 0x58E5, 0x58AE, 0x5878, 0x5841, 0x580B, 0x57D5, 0x579F, 0x576A, 0x5734,
0x56FF, 0x56C9, 0x5694, 0x565F, 0x562A, 0x55F5, 0x55C0, 0x558C, 0x5557, 0x5523, 0x54EF, 0x54BB, 0x5487, 0x5453, 0x541F, 0x53EC,
0x53B8, 0x5385, 0x5352, 0x531E, 0x52EB, 0x52B9, 0x5286, 0x5253, 0x5221, 0x51EE, 0x51BC, 0x518A, 0x5158, 0x5126, 0x50F4, 0x50C3,
0x60E9, 0x60B9, 0x608A, 0x605B, 0x602B, 0x5FFC, 0x5FCD, 0x5F9E, 0x5F6F, 0x5F40, 0x5F11, 0x5EE3, 0x5EB4, 0x5E86, 0x5E57, 0x5E29,
0x5DFB, 0x5DCD, 0x5D9F, 0x5D71, 0x5D43, 0x5D15, 0x5CE7, 0x5CBA, 0x5C8C, 0x5C5F, 0x5C32, 0x5C04, 0x5BD7, 0x5BAA, 0x5B7D, 0x5B50,
0x5B23, 0x5AF7, 0x5ACA, 0x5A9D, 0x5A71, 0x5A45, 0x5A18, 0x59EC, 0x59C0, 0x5994, 0x5968, 0x593C, 0x5910, 0x58E5, 0x58B9, 0x588D,
0x5862, 0x5837, 0x580B, 0x57E0, 0x57B5, 0x578A, 0x575F, 0x5734, 0x5709, 0x56DF, 0x56B4, 0x5689, 0x565F, 0x5635, 0x560A, 0x55E0,
0x55B6, 0x558C, 0x5562, 0x5538, 0x550E, 0x54E4, 0x54BB, 0x5491, 0x5468, 0x543E, 0x5415, 0x53EC, 0x53C2, 0x5399, 0x5370, 0x5347,
0x531E, 0x52F6, 0x52CD, 0x52A4, 0x527C, 0x5253, 0x522B, 0x5203, 0x51DA, 0x51B2, 0x518A, 0x5162, 0x513A, 0x5112, 0x50EA, 0x50C3,
0x5C98, 0x5C76, 0x5C54, 0x5C32, 0x5C10, 0x5BEE, 0x5BCC, 0x5BAA, 0x5B88, 0x5B67, 0x5B45, 0x5B23, 0x5B02, 0x5AE0, 0x5ABF, 0x5A9D,
0x5A7C, 0x5A5B, 0x5A3A, 0x5A18, 0x59F7, 0x59D6, 0x59B5, 0x5994, 0x5973, 0x5952, 0x5931, 0x5910, 0x58F0, 0x58CF, 0x58AE, 0x588D,
0x586D, 0x584C, 0x582C, 0x580B, 0x57EB, 0x57CB, 0x57AA, 0x578A, 0x576A, 0x574A, 0x5729, 0x5709, 0x56E9, 0x56C9, 0x56A9, 0x5689,
0x566A, 0x564A, 0x562A, 0x560A, 0x55EB, 0x55CB, 0x55AB, 0x558C, 0x556C, 0x554D, 0x552D, 0x550E, 0x54EF, 0x54D0, 0x54B0, 0x5491,
0x5472, 0x5453, 0x5434, 0x5415, 0x53F6, 0x53D7, 0x53B8, 0x5399, 0x537B, 0x535C, 0x533D, 0x531E, 0x5300, 0x52E1, 0x52C3, 0x52A4,
0x5286, 0x5267, 0x5249, 0x522B, 0x520D, 0x51EE, 0x51D0, 0x51B2, 0x5194, 0x5176, 0x5158, 0x513A, 0x511C, 0x50FE, 0x50E0, 0x50C3,
0x5878, 0x5862, 0x584C, 0x5837, 0x5821, 0x580B, 0x57F6, 0x57E0, 0x57CB, 0x57B5, 0x579F, 0x578A, 0x5774, 0x575F, 0x574A, 0x5734,
0x571F, 0x5709, 0x56F4, 0x56DF, 0x56C9, 0x56B4, 0x569F, 0x5689, 0x5674, 0x565F, 0x564A, 0x5635, 0x561F, 0x560A, 0x55F5, 0x55E0,
0x55CB, 0x55B6, 0x55A1, 0x558C, 0x5577, 0x5562, 0x554D, 0x5538, 0x5523, 0x550E, 0x54F9, 0x54E4, 0x54D0, 0x54BB, 0x54A6, 0x5491,
0x547C, 0x5468, 0x5453, 0x543E, 0x5429, 0x5415, 0x5400, 0x53EC, 0x53D7, 0x53C2, 0x53AE, 0x5399, 0x5385, 0x5370, 0x535C, 0x5347,
0x5333, 0x531E, 0x530A, 0x52F6, 0x52E1, 0x52CD, 0x52B9, 0x52A4, 0x5290, 0x527C, 0x5267, 0x5253, 0x523F, 0x522B, 0x5217, 0x5203,
0x51EE, 0x51DA, 0x51C6, 0x51B2, 0x519E, 0x518A, 0x5176, 0x5162, 0x514E, 0x513A, 0x5126, 0x5112, 0x50FE, 0x50EA, 0x50D7, 0x50C3,
0x5487, 0x547C, 0x5472, 0x5468, 0x545D, 0x5453, 0x5449, 0x543E, 0x5434, 0x5429, 0x541F, 0x5415, 0x540B, 0x5400, 0x53F6, 0x53EC,
0x53E1, 0x53D7, 0x53CD, 0x53C2, 0x53B8, 0x53AE, 0x53A4, 0x5399, 0x538F, 0x5385, 0x537B, 0x5370, 0x5366, 0x535C, 0x5352, 0x5347,
0x533D, 0x5333, 0x5329, 0x531E, 0x5314, 0x530A, 0x5300, 0x52F6, 0x52EB, 0x52E1, 0x52D7, 0x52CD, 0x52C3, 0x52B9, 0x52AE, 0x52A4,
0x529A, 0x5290, 0x5286, 0x527C, 0x5272, 0x5267, 0x525D, 0x5253, 0x5249, 0x523F, 0x5235, 0x522B, 0x5221, 0x5217, 0x520D, 0x5203,
0x51F8, 0x51EE, 0x51E4, 0x51DA, 0x51D0, 0x51C6, 0x51BC, 0x51B2, 0x51A8, 0x519E, 0x5194, 0x518A, 0x5180, 0x5176, 0x516C, 0x5162,
0x5158, 0x514E, 0x5144, 0x513A, 0x5130, 0x5126, 0x511C, 0x5112, 0x5108, 0x50FE, 0x50F4, 0x50EA, 0x50E0, 0x50D7, 0x50CD, 0x50C3,
0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3,
0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3,
0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3,
0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3,
0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3,
0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3, 0x50C3,
0x7A4C, 0x7A5B, 0x7A6A, 0x7A79, 0x7A88, 0x7A97, 0x7AA6, 0x7AB5, 0x7AC4, 0x7AD3, 0x7AE2, 0x7AF1, 0x7B00, 0x7B10, 0x7B1F, 0x7B2E,
0x7B3D, 0x7B4C, 0x7B5B, 0x7B6A, 0x7B79, 0x7B89, 0x7B98, 0x7BA7, 0x7BB6, 0x7BC5, 0x7BD5, 0x7BE4, 0x7BF3, 0x7C02, 0x7C11, 0x7C21,
0x7C30, 0x7C3F, 0x7C4E, 0x7C5E, 0x7C6D, 0x7C7C, 0x7C8C, 0x7C9B, 0x7CAA, 0x7CBA, 0x7CC9, 0x7CD8, 0x7CE7, 0x7CF7, 0x7D06, 0x7D16,
0x7D25, 0x7D34, 0x7D44, 0x7D53, 0x7D62, 0x7D72, 0x7D81, 0x7D91, 0x7DA0, 0x7DB0, 0x7DBF, 0x7DCE, 0x7DDE, 0x7DED, 0x7DFD, 0x7E0C,
0x7E1C, 0x7E2B, 0x7E3B, 0x7E4A, 0x7E5A, 0x7E69, 0x7E79, 0x7E88, 0x7E98, 0x7EA7, 0x7EB7, 0x7EC7, 0x7ED6, 0x7EE6, 0x7EF5, 0x7F05,
0x7F14, 0x7F24, 0x7F34, 0x7F43, 0x7F53, 0x7F63, 0x7F72, 0x7F82, 0x7F92, 0x7FA1, 0x7FB1, 0x7FC1, 0x7FD0, 0x7FE0, 0x7FF0, 0x8000,
0x74CB, 0x74D9, 0x74E7, 0x74F6, 0x7504, 0x7512, 0x7521, 0x752F, 0x753E, 0x754C, 0x755A, 0x7569, 0x7577, 0x7586, 0x7594, 0x75A2,
0x75B1, 0x75BF, 0x75CE, 0x75DC, 0x75EB, 0x75F9, 0x7608, 0x7616, 0x7625, 0x7633, 0x7642, 0x7650, 0x765F, 0x766D, 0x767C, 0x768A,
0x7699, 0x76A8, 0x76B6, 0x76C5, 0x76D3, 0x76E2, 0x76F1, 0x76FF, 0x770E, 0x771C, 0x772B, 0x773A, 0x7748, 0x7757, 0x7766, 0x7774,
0x7783, 0x7792, 0x77A0, 0x77AF, 0x77BE, 0x77CC, 0x77DB, 0x77EA, 0x77F9, 0x7807, 0x7816, 0x7825, 0x7834, 0x7842, 0x7851, 0x7860,
0x786F, 0x787E, 0x788C, 0x789B, 0x78AA, 0x78B9, 0x78C8, 0x78D6, 0x78E5, 0x78F4, 0x7903, 0x7912, 0x7921, 0x7930, 0x793E, 0x794D,
0x795C, 0x796B, 0x797A, 0x7989, 0x7998, 0x79A7, 0x79B6, 0x79C5, 0x79D4, 0x79E3, 0x79F2, 0x7A01, 0x7A10, 0x7A1F, 0x7A2E, 0x7A3D,
0x6F89, 0x6F97, 0x6FA4, 0x6FB2, 0x6FC0, 0x6FCD, 0x6FDB, 0x6FE9, 0x6FF7, 0x7004, 0x7012, 0x7020, 0x702E, 0x703B, 0x7049, 0x7057,
0x7065, 0x7073, 0x7080, 0x708E, 0x709C, 0x70AA, 0x70B8, 0x70C6, 0x70D4, 0x70E1, 0x70EF, 0x70FD, 0x710B, 0x7119, 0x7127, 0x7135,
0x7143, 0x7150, 0x715E, 0x716C, 0x717A, 0x7188, 0x7196, 0x71A4, 0x71B2, 0x71C0, 0x71CE, 0x71DC, 0x71EA, 0x71F8, 0x7206, 0x7214,
0x7222, 0x7230, 0x723E, 0x724C, 0x725A, 0x7268, 0x7276, 0x7284, 0x7292, 0x72A0, 0x72AE, 0x72BD, 0x72CB, 0x72D9, 0x72E7, 0x72F5,
0x7303, 0x7311, 0x731F, 0x732D, 0x733C, 0x734A, 0x7358, 0x7366, 0x7374, 0x7382, 0x7391, 0x739F, 0x73AD, 0x73BB, 0x73C9, 0x73D8,
0x73E6, 0x73F4, 0x7402, 0x7411, 0x741F, 0x742D, 0x743B, 0x744A, 0x7458, 0x7466, 0x7475, 0x7483, 0x7491, 0x74A0, 0x74AE, 0x74BC,
0x6A84, 0x6A91, 0x6A9E, 0x6AAB, 0x6AB8, 0x6AC5, 0x6AD2, 0x6ADF, 0x6AED, 0x6AFA, 0x6B07, 0x6B14, 0x6B21, 0x6B2E, 0x6B3B, 0x6B49,
0x6B56, 0x6B63, 0x6B70, 0x6B7D, 0x6B8B, 0x6B98, 0x6BA5, 0x6BB2, 0x6BBF, 0x6BCD, 0x6BDA, 0x6BE7, 0x6BF4, 0x6C02, 0x6C0F, 0x6C1C,
0x6C2A, 0x6C37, 0x6C44, 0x6C51, 0x6C5F, 0x6C6C, 0x6C79, 0x6C87, 0x6C94, 0x6CA1, 0x6CAF, 0x6CBC, 0x6CC9, 0x6CD7, 0x6CE4, 0x6CF2,
0x6CFF, 0x6D0C, 0x6D1A, 0x6D27, 0x6D34, 0x6D42, 0x6D4F, 0x6D5D, 0x6D6A, 0x6D78, 0x6D85, 0x6D93, 0x6DA0, 0x6DAD, 0x6DBB, 0x6DC8,
0x6DD6, 0x6DE3, 0x6DF1, 0x6DFE, 0x6E0C, 0x6E19, 0x6E27, 0x6E34, 0x6E42, 0x6E50, 0x6E5D, 0x6E6B, 0x6E78, 0x6E86, 0x6E93, 0x6EA1,
0x6EAF, 0x6EBC, 0x6ECA, 0x6ED7, 0x6EE5, 0x6EF3, 0x6F00, 0x6F0E, 0x6F1B, 0x6F29, 0x6F37, 0x6F44, 0x6F52, 0x6F60, 0x6F6D, 0x6F7B,
0x65B8, 0x65C5, 0x65D1, 0x65DE, 0x65EA, 0x65F7, 0x6604, 0x6610, 0x661D, 0x6629, 0x6636, 0x6642, 0x664F, 0x665B, 0x6668, 0x6675,
0x6681, 0x668E, 0x669A, 0x66A7, 0x66B3, 0x66C0, 0x66CD, 0x66D9, 0x66E6, 0x66F3, 0x66FF, 0x670C, 0x6719, 0x6725, 0x6732, 0x673F,
0x674B, 0x6758, 0x6765, 0x6771, 0x677E, 0x678B, 0x6798, 0x67A4, 0x67B1, 0x67BE, 0x67CA, 0x67D7, 0x67E4, 0x67F1, 0x67FD, 0x680A,
0x6817, 0x6824, 0x6831, 0x683D, 0x684A, 0x6857, 0x6864, 0x6871, 0x687D, 0x688A, 0x6897, 0x68A4, 0x68B1, 0x68BE, 0x68CB, 0x68D7,
0x68E4, 0x68F1, 0x68FE, 0x690B, 0x6918, 0x6925, 0x6932, 0x693F, 0x694C, 0x6959, 0x6965, 0x6972, 0x697F, 0x698C, 0x6999, 0x69A6,
0x69B3, 0x69C0, 0x69CD, 0x69DA, 0x69E7, 0x69F4, 0x6A01, 0x6A0E, 0x6A1B, 0x6A28, 0x6A35, 0x6A42, 0x6A4F, 0x6A5D, 0x6A6A, 0x6A77,
0x6124, 0x6130, 0x613C, 0x6148, 0x6154, 0x6160, 0x616C, 0x6178, 0x6184, 0x6190, 0x619C, 0x61A8, 0x61B4, 0x61C0, 0x61CC, 0x61D8,
0x61E4, 0x61F0, 0x61FC, 0x6208, 0x6214, 0x6220, 0x622C, 0x6238, 0x6244, 0x6250, 0x625D, 0x6269, 0x6275, 0x6281, 0x628D, 0x6299,
0x62A5, 0x62B1, 0x62BD, 0x62C9, 0x62D6, 0x62E2, 0x62EE, 0x62FA, 0x6306, 0x6312, 0x631F, 0x632B, 0x6337, 0x6343, 0x634F, 0x635B,
0x6368, 0x6374, 0x6380, 0x638C, 0x6399, 0x63A5, 0x63B1, 0x63BD, 0x63CA, 0x63D6, 0x63E2, 0x63EE, 0x63FB, 0x6407, 0x6413, 0x641F,
0x642C, 0x6438, 0x6444, 0x6451, 0x645D, 0x6469, 0x6476, 0x6482, 0x648E, 0x649B, 0x64A7, 0x64B3, 0x64C0, 0x64CC, 0x64D9, 0x64E5,
0x64F1, 0x64FE, 0x650A, 0x6517, 0x6523, 0x652F, 0x653C, 0x6548, 0x6555, 0x6561, 0x656E, 0x657A, 0x6587, 0x6593, 0x659F, 0x65AC,
0x5CC5, 0x5CD1, 0x5CDC, 0x5CE7, 0x5CF3, 0x5CFE, 0x5D0A, 0x5D15, 0x5D20, 0x5D2C, 0x5D37, 0x5D43, 0x5D4E, 0x5D5A, 0x5D65, 0x5D71,
0x5D7C, 0x5D88, 0x5D93, 0x5D9F, 0x5DAA, 0x5DB6, 0x5DC1, 0x5DCD, 0x5DD8, 0x5DE4, 0x5DEF, 0x5DFB, 0x5E06, 0x5E12, 0x5E1D, 0x5E29,
0x5E35, 0x5E40, 0x5E4C, 0x5E57, 0x5E63, 0x5E6E, 0x5E7A, 0x5E86, 0x5E91, 0x5E9D, 0x5EA9, 0x5EB4, 0x5EC0, 0x5ECB, 0x5ED7, 0x5EE3,
0x5EEE, 0x5EFA, 0x5F06, 0x5F11, 0x5F1D, 0x5F29, 0x5F34, 0x5F40, 0x5F4C, 0x5F57, 0x5F63, 0x5F6F, 0x5F7B, 0x5F86, 0x5F92, 0x5F9E,
0x5FAA, 0x5FB5, 0x5FC1, 0x5FCD, 0x5FD9, 0x5FE4, 0x5FF0, 0x5FFC, 0x6008, 0x6014, 0x601F, 0x602B, 0x6037, 0x6043, 0x604F, 0x605A,
0x6066, 0x6072, 0x607E, 0x608A, 0x6096, 0x60A2, 0x60AD, 0x60B9, 0x60C5, 0x60D1, 0x60DD, 0x60E9, 0x60F5, 0x6101, 0x610D, 0x6119,
0x5898, 0x58A3, 0x58AE, 0x58B9, 0x58C4, 0x58CF, 0x58DA, 0x58E5, 0x58EF, 0x58FA, 0x5905, 0x5910, 0x591B, 0x5926, 0x5931, 0x593C,
0x5947, 0x5952, 0x595D, 0x5968, 0x5973, 0x597E, 0x5989, 0x5994, 0x599F, 0x59AA, 0x59B5, 0x59C0, 0x59CB, 0x59D6, 0x59E1, 0x59EC,
0x59F7, 0x5A02, 0x5A0D, 0x5A18, 0x5A23, 0x5A2E, 0x5A39, 0x5A45, 0x5A50, 0x5A5B, 0x5A66, 0x5A71, 0x5A7C, 0x5A87, 0x5A92, 0x5A9D,
0x5AA9, 0x5AB4, 0x5ABF, 0x5ACA, 0x5AD5, 0x5AE0, 0x5AEB, 0x5AF7, 0x5B02, 0x5B0D, 0x5B18, 0x5B23, 0x5B2F, 0x5B3A, 0x5B45, 0x5B50,
0x5B5B, 0x5B67, 0x5B72, 0x5B7D, 0x5B88, 0x5B94, 0x5B9F, 0x5BAA, 0x5BB5, 0x5BC1, 0x5BCC, 0x5BD7, 0x5BE2, 0x5BEE, 0x5BF9, 0x5C04,
0x5C10, 0x5C1B, 0x5C26, 0x5C32, 0x5C3D, 0x5C48, 0x5C54, 0x5C5F, 0x5C6A, 0x5C76, 0x5C81, 0x5C8C, 0x5C98, 0x5CA3, 0x5CAE, 0x5CBA,
0x549B, 0x54A6, 0x54B0, 0x54BB, 0x54C5, 0x54CF, 0x54DA, 0x54E4, 0x54EF, 0x54F9, 0x5504, 0x550E, 0x5519, 0x5523, 0x552D, 0x5538,
0x5542, 0x554D, 0x5557, 0x5562, 0x556C, 0x5577, 0x5581, 0x558C, 0x5596, 0x55A1, 0x55AB, 0x55B6, 0x55C0, 0x55CB, 0x55D5, 0x55E0,
0x55EB, 0x55F5, 0x5600, 0x560A, 0x5615, 0x561F, 0x562A, 0x5635, 0x563F, 0x564A, 0x5654, 0x565F, 0x566A, 0x5674, 0x567F, 0x5689,
0x5694, 0x569F, 0x56A9, 0x56B4, 0x56BF, 0x56C9, 0x56D4, 0x56DF, 0x56E9, 0x56F4, 0x56FF, 0x5709, 0x5714, 0x571F, 0x5729, 0x5734,
0x573F, 0x5749, 0x5754, 0x575F, 0x576A, 0x5774, 0x577F, 0x578A, 0x5795, 0x579F, 0x57AA, 0x57B5, 0x57C0, 0x57CA, 0x57D5, 0x57E0,
0x57EB, 0x57F6, 0x5800, 0x580B, 0x5816, 0x5821, 0x582C, 0x5837, 0x5841, 0x584C, 0x5857, 0x5862, 0x586D, 0x5878, 0x5883, 0x588D,
0x50CD, 0x50D7, 0x50E0, 0x50EA, 0x50F4, 0x50FE, 0x5108, 0x5112, 0x511C, 0x5126, 0x5130, 0x513A, 0x5144, 0x514E, 0x5158, 0x5162,
0x516C, 0x5176, 0x5180, 0x518A, 0x5194, 0x519E, 0x51A8, 0x51B2, 0x51BC, 0x51C6, 0x51D0, 0x51DA, 0x51E4, 0x51EE, 0x51F8, 0x5203,
0x520D, 0x5217, 0x5221, 0x522B, 0x5235, 0x523F, 0x5249, 0x5253, 0x525D, 0x5267, 0x5272, 0x527C, 0x5286, 0x5290, 0x529A, 0x52A4,
0x52AE, 0x52B9, 0x52C3, 0x52CD, 0x52D7, 0x52E1, 0x52EB, 0x52F6, 0x5300, 0x530A, 0x5314, 0x531E, 0x5329, 0x5333, 0x533D, 0x5347,
0x5352, 0x535C, 0x5366, 0x5370, 0x537A, 0x5385, 0x538F, 0x5399, 0x53A4, 0x53AE, 0x53B8, 0x53C2, 0x53CD, 0x53D7, 0x53E1, 0x53EC,
0x53F6, 0x5400, 0x540B, 0x5415, 0x541F, 0x5429, 0x5434, 0x543E, 0x5449, 0x5453, 0x545D, 0x5468, 0x5472, 0x547C, 0x5487, 0x5491
};
