#include "pch.h"
//
#include "./DxSkinMesh9.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
//
//DWORD DxSkinMesh::m_dwReflectVS[4];					// �ӽ����� Pong �̴�.!!
//
////	Note : Skin Mesh 1
////
//DWORD DxSkinMesh::dwReflect1AVS[] = {
//	0xfffe0101, 0x0004fffe, 0x454c4946, 0x676e6f70,
//	0x766e2e31, 0x00000076, 0x0002fffe, 0x454e494c,
//	0x00000001, 0x0002fffe, 0x454e494c, 0x00000002,
//	0x0002fffe, 0x454e494c, 0x00000003, 0x0002fffe,
//	0x454e494c, 0x00000004, 0x0002fffe, 0x454e494c,
//	0x00000005, 0x0002fffe, 0x454e494c, 0x00000006,
//	0x0002fffe, 0x454e494c, 0x00000007, 0x0002fffe,
//	0x454e494c, 0x00000008, 0x0002fffe, 0x454e494c,
//	0x00000009, 0x0002fffe, 0x454e494c, 0x0000000a,
//	0x0002fffe, 0x454e494c, 0x0000000b, 0x0002fffe,
//	0x454e494c, 0x0000000c, 0x0002fffe, 0x454e494c,
//	0x0000000d, 0x0002fffe, 0x454e494c, 0x0000000e,
//	0x0002fffe, 0x454e494c, 0x0000000f, 0x0002fffe,
//	0x454e494c, 0x00000010, 0x0002fffe, 0x454e494c,
//	0x00000011, 0x0002fffe, 0x454e494c, 0x00000012,
//	0x0002fffe, 0x454e494c, 0x00000013, 0x0002fffe,
//	0x454e494c, 0x00000014, 0x0002fffe, 0x454e494c,
//	0x00000015, 0x0002fffe, 0x454e494c, 0x00000016,
//	0x0002fffe, 0x454e494c, 0x00000017, 0x0002fffe,
//	0x454e494c, 0x00000018, 0x0002fffe, 0x454e494c,
//	0x00000019, 0x0002fffe, 0x454e494c, 0x0000001a,
//	0x0002fffe, 0x454e494c, 0x0000001b, 0x0002fffe,
//	0x454e494c, 0x0000001c, 0x0002fffe, 0x454e494c,
//	0x0000001d, 0x0002fffe, 0x454e494c, 0x0000001e,
//	0x0002fffe, 0x454e494c, 0x0000001f, 0x0002fffe,
//	0x454e494c, 0x00000020, 0x0002fffe, 0x454e494c,
//	0x00000021, 0x0002fffe, 0x454e494c, 0x00000022,
//	0x0002fffe, 0x454e494c, 0x00000023, 0x0002fffe,
//	0x454e494c, 0x00000024, 0x0002fffe, 0x454e494c,
//	0x00000025, 0x0002fffe, 0x454e494c, 0x00000026,
//	0x0002fffe, 0x454e494c, 0x00000027, 0x0002fffe,
//	0x454e494c, 0x00000028, 0x0002fffe, 0x454e494c,
//	0x00000029, 0x0002fffe, 0x454e494c, 0x0000002a,
//	0x0002fffe, 0x454e494c, 0x0000002b, 0x0002fffe,
//	0x454e494c, 0x0000002b, 0x00000005, 0x800f0001,
//	0x90c60002, 0xa0ff0000, 0x0002fffe, 0x454e494c,
//	0x0000002c, 0x0002fffe, 0x454e494c, 0x0000002d,
//	0x0002fffe, 0x454e494c, 0x0000002e, 0x0002fffe,
//	0x454e494c, 0x0000002f, 0x0002fffe, 0x454e494c,
//	0x00000030, 0x0002fffe, 0x454e494c, 0x00000030,
//	0x00000001, 0xb0010000, 0x80000001, 0x0002fffe,
//	0x454e494c, 0x00000031, 0x0002fffe, 0x454e494c,
//	0x00000031, 0x00000015, 0x800f0004, 0x90e40000,
//	0xa0e42018, 0x0002fffe, 0x454e494c, 0x00000032,
//	0x0002fffe, 0x454e494c, 0x00000032, 0x00000017,
//	0x800f0005, 0x90e40003, 0xa0e42018, 0x0002fffe,
//	0x454e494c, 0x00000033, 0x0002fffe, 0x454e494c,
//	0x00000034, 0x0002fffe, 0x454e494c, 0x00000035,
//	0x0002fffe, 0x454e494c, 0x00000035, 0x00000001,
//	0x80080004, 0xa0000000, 0x0002fffe, 0x454e494c,
//	0x00000036, 0x0002fffe, 0x454e494c, 0x00000036,
//	0x00000014, 0xc00f0000, 0x80e40004, 0xa0e40002,
//	0x0002fffe, 0x454e494c, 0x00000037, 0x0002fffe,
//	0x454e494c, 0x00000038, 0x0002fffe, 0x454e494c,
//	0x00000039, 0x0002fffe, 0x454e494c, 0x00000039,
//	0x00000008, 0x80080005, 0x80e40005, 0x80e40005,
//	0x0002fffe, 0x454e494c, 0x0000003a, 0x0002fffe,
//	0x454e494c, 0x0000003a, 0x00000007, 0x80080005,
//	0x80ff0005, 0x0002fffe, 0x454e494c, 0x0000003b,
//	0x0002fffe, 0x454e494c, 0x0000003b, 0x00000005,
//	0x800f0005, 0x80e40005, 0x80ff0005, 0x0002fffe,
//	0x454e494c, 0x0000003c, 0x0002fffe, 0x454e494c,
//	0x0000003d, 0x0002fffe, 0x454e494c, 0x0000003e,
//	0x0002fffe, 0x454e494c, 0x0000003e, 0x00000001,
//	0xe00f0000, 0x90e40004, 0x0002fffe, 0x454e494c,
//	0x0000003f, 0x0002fffe, 0x454e494c, 0x0000003f,
//	0x00000001, 0xe00f0001, 0x80e40005, 0x0002fffe,
//	0x454e494c, 0x00000040, 0x0000ffff
//};
//
////	Note : Skin Mesh 2
////
//DWORD DxSkinMesh::dwReflect2AVS[] = {
//	0xfffe0101, 0x0004fffe, 0x454c4946, 0x676e6f70,
//	0x766e2e32, 0x00000076, 0x0002fffe, 0x454e494c,
//	0x00000001, 0x0002fffe, 0x454e494c, 0x00000002,
//	0x0002fffe, 0x454e494c, 0x00000003, 0x0002fffe,
//	0x454e494c, 0x00000004, 0x0002fffe, 0x454e494c,
//	0x00000005, 0x0002fffe, 0x454e494c, 0x00000006,
//	0x0002fffe, 0x454e494c, 0x00000007, 0x0002fffe,
//	0x454e494c, 0x00000008, 0x0002fffe, 0x454e494c,
//	0x00000009, 0x0002fffe, 0x454e494c, 0x0000000a,
//	0x0002fffe, 0x454e494c, 0x0000000b, 0x0002fffe,
//	0x454e494c, 0x0000000c, 0x0002fffe, 0x454e494c,
//	0x0000000d, 0x0002fffe, 0x454e494c, 0x0000000e,
//	0x0002fffe, 0x454e494c, 0x0000000f, 0x0002fffe,
//	0x454e494c, 0x00000010, 0x0002fffe, 0x454e494c,
//	0x00000011, 0x0002fffe, 0x454e494c, 0x00000012,
//	0x0002fffe, 0x454e494c, 0x00000013, 0x0002fffe,
//	0x454e494c, 0x00000014, 0x0002fffe, 0x454e494c,
//	0x00000015, 0x0002fffe, 0x454e494c, 0x00000016,
//	0x0002fffe, 0x454e494c, 0x00000017, 0x0002fffe,
//	0x454e494c, 0x00000018, 0x0002fffe, 0x454e494c,
//	0x00000019, 0x0002fffe, 0x454e494c, 0x0000001a,
//	0x0002fffe, 0x454e494c, 0x0000001b, 0x0002fffe,
//	0x454e494c, 0x0000001c, 0x0002fffe, 0x454e494c,
//	0x0000001d, 0x0002fffe, 0x454e494c, 0x0000001e,
//	0x0002fffe, 0x454e494c, 0x0000001f, 0x0002fffe,
//	0x454e494c, 0x00000020, 0x0002fffe, 0x454e494c,
//	0x00000021, 0x0002fffe, 0x454e494c, 0x00000022,
//	0x0002fffe, 0x454e494c, 0x00000023, 0x0002fffe,
//	0x454e494c, 0x00000024, 0x0002fffe, 0x454e494c,
//	0x00000025, 0x0002fffe, 0x454e494c, 0x00000026,
//	0x0002fffe, 0x454e494c, 0x00000027, 0x0002fffe,
//	0x454e494c, 0x00000028, 0x0002fffe, 0x454e494c,
//	0x00000029, 0x0002fffe, 0x454e494c, 0x0000002a,
//	0x0002fffe, 0x454e494c, 0x0000002a, 0x00000005,
//	0x800f0001, 0x90c60002, 0xa0ff0000, 0x0002fffe,
//	0x454e494c, 0x0000002b, 0x0002fffe, 0x454e494c,
//	0x0000002c, 0x0002fffe, 0x454e494c, 0x0000002d,
//	0x0002fffe, 0x454e494c, 0x0000002e, 0x0002fffe,
//	0x454e494c, 0x0000002f, 0x0002fffe, 0x454e494c,
//	0x0000002f, 0x00000008, 0x80080000, 0x90a40001,
//	0xa0a80000, 0x0002fffe, 0x454e494c, 0x00000030,
//	0x0002fffe, 0x454e494c, 0x00000030, 0x00000002,
//	0x80080000, 0x81ff0000, 0xa0000000, 0x0002fffe,
//	0x454e494c, 0x00000031, 0x0002fffe, 0x454e494c,
//	0x00000032, 0x0002fffe, 0x454e494c, 0x00000033,
//	0x0002fffe, 0x454e494c, 0x00000033, 0x00000001,
//	0xb0010000, 0x80000001, 0x0002fffe, 0x454e494c,
//	0x00000034, 0x0002fffe, 0x454e494c, 0x00000034,
//	0x00000015, 0x800f0004, 0x90e40000, 0xa0e42018,
//	0x0002fffe, 0x454e494c, 0x00000035, 0x0002fffe,
//	0x454e494c, 0x00000035, 0x00000017, 0x800f0005,
//	0x90e40003, 0xa0e42018, 0x0002fffe, 0x454e494c,
//	0x00000036, 0x0002fffe, 0x454e494c, 0x00000037,
//	0x0002fffe, 0x454e494c, 0x00000038, 0x0002fffe,
//	0x454e494c, 0x00000038, 0x00000005, 0x800f0004,
//	0x80e40004, 0x90000001, 0x0002fffe, 0x454e494c,
//	0x00000039, 0x0002fffe, 0x454e494c, 0x00000039,
//	0x00000005, 0x800f0005, 0x80e40005, 0x90000001,
//	0x0002fffe, 0x454e494c, 0x0000003a, 0x0002fffe,
//	0x454e494c, 0x0000003b, 0x0002fffe, 0x454e494c,
//	0x0000003c, 0x0002fffe, 0x454e494c, 0x0000003c,
//	0x00000001, 0xb0010000, 0x80550001, 0x0002fffe,
//	0x454e494c, 0x0000003d, 0x0002fffe, 0x454e494c,
//	0x0000003d, 0x00000015, 0x800f0002, 0x90e40000,
//	0xa0e42018, 0x0002fffe, 0x454e494c, 0x0000003e,
//	0x0002fffe, 0x454e494c, 0x0000003e, 0x00000017,
//	0x800f0003, 0x90e40003, 0xa0e42018, 0x0002fffe,
//	0x454e494c, 0x0000003f, 0x0002fffe, 0x454e494c,
//	0x00000040, 0x0002fffe, 0x454e494c, 0x00000041,
//	0x0002fffe, 0x454e494c, 0x00000041, 0x00000004,
//	0x800f0004, 0x80e40002, 0x80ff0000, 0x80e40004,
//	0x0002fffe, 0x454e494c, 0x00000042, 0x0002fffe,
//	0x454e494c, 0x00000042, 0x00000004, 0x800f0005,
//	0x80e40003, 0x80ff0000, 0x80e40005, 0x0002fffe,
//	0x454e494c, 0x00000043, 0x0002fffe, 0x454e494c,
//	0x00000044, 0x0002fffe, 0x454e494c, 0x00000045,
//	0x0002fffe, 0x454e494c, 0x00000045, 0x00000001,
//	0x80080004, 0xa0000000, 0x0002fffe, 0x454e494c,
//	0x00000046, 0x0002fffe, 0x454e494c, 0x00000046,
//	0x00000014, 0xc00f0000, 0x80e40004, 0xa0e40002,
//	0x0002fffe, 0x454e494c, 0x00000047, 0x0002fffe,
//	0x454e494c, 0x00000048, 0x0002fffe, 0x454e494c,
//	0x00000049, 0x0002fffe, 0x454e494c, 0x00000049,
//	0x00000008, 0x80080005, 0x80e40005, 0x80e40005,
//	0x0002fffe, 0x454e494c, 0x0000004a, 0x0002fffe,
//	0x454e494c, 0x0000004a, 0x00000007, 0x80080005,
//	0x80ff0005, 0x0002fffe, 0x454e494c, 0x0000004b,
//	0x0002fffe, 0x454e494c, 0x0000004b, 0x00000005,
//	0x800f0005, 0x80e40005, 0x80ff0005, 0x0002fffe,
//	0x454e494c, 0x0000004c, 0x0002fffe, 0x454e494c,
//	0x0000004d, 0x0002fffe, 0x454e494c, 0x0000004e,
//	0x0002fffe, 0x454e494c, 0x0000004e, 0x00000001,
//	0xe00f0000, 0x90e40004, 0x0002fffe, 0x454e494c,
//	0x0000004f, 0x0002fffe, 0x454e494c, 0x0000004f,
//	0x00000001, 0xe00f0001, 0x80e40005, 0x0002fffe,
//	0x454e494c, 0x00000050, 0x0000ffff
//};
//
////	Note : Skin Mesh 3
////
//DWORD DxSkinMesh::dwReflect3AVS[] = {
//	0xfffe0101, 0x0004fffe, 0x454c4946, 0x676e6f70,
//	0x766e2e33, 0x00000076, 0x0002fffe, 0x454e494c,
//	0x00000001, 0x0002fffe, 0x454e494c, 0x00000002,
//	0x0002fffe, 0x454e494c, 0x00000003, 0x0002fffe,
//	0x454e494c, 0x00000004, 0x0002fffe, 0x454e494c,
//	0x00000005, 0x0002fffe, 0x454e494c, 0x00000006,
//	0x0002fffe, 0x454e494c, 0x00000007, 0x0002fffe,
//	0x454e494c, 0x00000008, 0x0002fffe, 0x454e494c,
//	0x00000009, 0x0002fffe, 0x454e494c, 0x0000000a,
//	0x0002fffe, 0x454e494c, 0x0000000b, 0x0002fffe,
//	0x454e494c, 0x0000000c, 0x0002fffe, 0x454e494c,
//	0x0000000d, 0x0002fffe, 0x454e494c, 0x0000000e,
//	0x0002fffe, 0x454e494c, 0x0000000f, 0x0002fffe,
//	0x454e494c, 0x00000010, 0x0002fffe, 0x454e494c,
//	0x00000011, 0x0002fffe, 0x454e494c, 0x00000012,
//	0x0002fffe, 0x454e494c, 0x00000013, 0x0002fffe,
//	0x454e494c, 0x00000014, 0x0002fffe, 0x454e494c,
//	0x00000015, 0x0002fffe, 0x454e494c, 0x00000016,
//	0x0002fffe, 0x454e494c, 0x00000017, 0x0002fffe,
//	0x454e494c, 0x00000018, 0x0002fffe, 0x454e494c,
//	0x00000019, 0x0002fffe, 0x454e494c, 0x0000001a,
//	0x0002fffe, 0x454e494c, 0x0000001b, 0x0002fffe,
//	0x454e494c, 0x0000001c, 0x0002fffe, 0x454e494c,
//	0x0000001d, 0x0002fffe, 0x454e494c, 0x0000001e,
//	0x0002fffe, 0x454e494c, 0x0000001f, 0x0002fffe,
//	0x454e494c, 0x00000020, 0x0002fffe, 0x454e494c,
//	0x00000021, 0x0002fffe, 0x454e494c, 0x00000022,
//	0x0002fffe, 0x454e494c, 0x00000023, 0x0002fffe,
//	0x454e494c, 0x00000024, 0x0002fffe, 0x454e494c,
//	0x00000025, 0x0002fffe, 0x454e494c, 0x00000026,
//	0x0002fffe, 0x454e494c, 0x00000027, 0x0002fffe,
//	0x454e494c, 0x00000028, 0x0002fffe, 0x454e494c,
//	0x00000029, 0x0002fffe, 0x454e494c, 0x0000002a,
//	0x0002fffe, 0x454e494c, 0x0000002a, 0x00000005,
//	0x800f0001, 0x90c60002, 0xa0ff0000, 0x0002fffe,
//	0x454e494c, 0x0000002b, 0x0002fffe, 0x454e494c,
//	0x0000002c, 0x0002fffe, 0x454e494c, 0x0000002d,
//	0x0002fffe, 0x454e494c, 0x0000002e, 0x0002fffe,
//	0x454e494c, 0x0000002f, 0x0002fffe, 0x454e494c,
//	0x0000002f, 0x00000008, 0x80080000, 0x90a40001,
//	0xa0a00000, 0x0002fffe, 0x454e494c, 0x00000030,
//	0x0002fffe, 0x454e494c, 0x00000030, 0x00000002,
//	0x80080000, 0x81ff0000, 0xa0000000, 0x0002fffe,
//	0x454e494c, 0x00000031, 0x0002fffe, 0x454e494c,
//	0x00000032, 0x0002fffe, 0x454e494c, 0x00000033,
//	0x0002fffe, 0x454e494c, 0x00000033, 0x00000001,
//	0xb0010000, 0x80000001, 0x0002fffe, 0x454e494c,
//	0x00000034, 0x0002fffe, 0x454e494c, 0x00000034,
//	0x00000015, 0x800f0004, 0x90e40000, 0xa0e42018,
//	0x0002fffe, 0x454e494c, 0x00000035, 0x0002fffe,
//	0x454e494c, 0x00000035, 0x00000017, 0x800f0005,
//	0x90e40003, 0xa0e42018, 0x0002fffe, 0x454e494c,
//	0x00000036, 0x0002fffe, 0x454e494c, 0x00000037,
//	0x0002fffe, 0x454e494c, 0x00000038, 0x0002fffe,
//	0x454e494c, 0x00000038, 0x00000005, 0x800f0004,
//	0x80e40004, 0x90000001, 0x0002fffe, 0x454e494c,
//	0x00000039, 0x0002fffe, 0x454e494c, 0x00000039,
//	0x00000005, 0x800f0005, 0x80e40005, 0x90000001,
//	0x0002fffe, 0x454e494c, 0x0000003a, 0x0002fffe,
//	0x454e494c, 0x0000003b, 0x0002fffe, 0x454e494c,
//	0x0000003c, 0x0002fffe, 0x454e494c, 0x0000003c,
//	0x00000001, 0xb0010000, 0x80550001, 0x0002fffe,
//	0x454e494c, 0x0000003d, 0x0002fffe, 0x454e494c,
//	0x0000003d, 0x00000015, 0x800f0002, 0x90e40000,
//	0xa0e42018, 0x0002fffe, 0x454e494c, 0x0000003e,
//	0x0002fffe, 0x454e494c, 0x0000003e, 0x00000017,
//	0x800f0003, 0x90e40003, 0xa0e42018, 0x0002fffe,
//	0x454e494c, 0x0000003f, 0x0002fffe, 0x454e494c,
//	0x00000040, 0x0002fffe, 0x454e494c, 0x00000041,
//	0x0002fffe, 0x454e494c, 0x00000041, 0x00000004,
//	0x800f0004, 0x80e40002, 0x90550001, 0x80e40004,
//	0x0002fffe, 0x454e494c, 0x00000042, 0x0002fffe,
//	0x454e494c, 0x00000042, 0x00000004, 0x800f0005,
//	0x80e40003, 0x90550001, 0x80e40005, 0x0002fffe,
//	0x454e494c, 0x00000043, 0x0002fffe, 0x454e494c,
//	0x00000044, 0x0002fffe, 0x454e494c, 0x00000045,
//	0x0002fffe, 0x454e494c, 0x00000045, 0x00000001,
//	0xb0010000, 0x80aa0001, 0x0002fffe, 0x454e494c,
//	0x00000046, 0x0002fffe, 0x454e494c, 0x00000046,
//	0x00000015, 0x800f0002, 0x90e40000, 0xa0e42018,
//	0x0002fffe, 0x454e494c, 0x00000047, 0x0002fffe,
//	0x454e494c, 0x00000047, 0x00000017, 0x800f0003,
//	0x90e40003, 0xa0e42018, 0x0002fffe, 0x454e494c,
//	0x00000048, 0x0002fffe, 0x454e494c, 0x00000049,
//	0x0002fffe, 0x454e494c, 0x0000004a, 0x0002fffe,
//	0x454e494c, 0x0000004a, 0x00000004, 0x800f0004,
//	0x80e40002, 0x80ff0000, 0x80e40004, 0x0002fffe,
//	0x454e494c, 0x0000004b, 0x0002fffe, 0x454e494c,
//	0x0000004b, 0x00000004, 0x800f0005, 0x80e40003,
//	0x80ff0000, 0x80e40005, 0x0002fffe, 0x454e494c,
//	0x0000004c, 0x0002fffe, 0x454e494c, 0x0000004d,
//	0x0002fffe, 0x454e494c, 0x0000004e, 0x0002fffe,
//	0x454e494c, 0x0000004e, 0x00000001, 0x80080004,
//	0xa0000000, 0x0002fffe, 0x454e494c, 0x0000004f,
//	0x0002fffe, 0x454e494c, 0x0000004f, 0x00000014,
//	0xc00f0000, 0x80e40004, 0xa0e40002, 0x0002fffe,
//	0x454e494c, 0x00000050, 0x0002fffe, 0x454e494c,
//	0x00000051, 0x0002fffe, 0x454e494c, 0x00000052,
//	0x0002fffe, 0x454e494c, 0x00000052, 0x00000008,
//	0x80080005, 0x80e40005, 0x80e40005, 0x0002fffe,
//	0x454e494c, 0x00000053, 0x0002fffe, 0x454e494c,
//	0x00000053, 0x00000007, 0x80080005, 0x80ff0005,
//	0x0002fffe, 0x454e494c, 0x00000054, 0x0002fffe,
//	0x454e494c, 0x00000054, 0x00000005, 0x800f0005,
//	0x80e40005, 0x80ff0005, 0x0002fffe, 0x454e494c,
//	0x00000055, 0x0002fffe, 0x454e494c, 0x00000056,
//	0x0002fffe, 0x454e494c, 0x00000057, 0x0002fffe,
//	0x454e494c, 0x00000057, 0x00000001, 0xe00f0000,
//	0x90e40004, 0x0002fffe, 0x454e494c, 0x00000058,
//	0x0002fffe, 0x454e494c, 0x00000058, 0x00000001,
//	0xe00f0001, 0x80e40005, 0x0002fffe, 0x454e494c,
//	0x00000059, 0x0000ffff
//};
//
//
////	Note : Skin Mesh 4
////
//DWORD DxSkinMesh::dwReflect4AVS[] = {
//	0xfffe0101, 0x0004fffe, 0x454c4946, 0x676e6f70,
//	0x766e2e34, 0x00000076, 0x0002fffe, 0x454e494c,
//	0x00000001, 0x0002fffe, 0x454e494c, 0x00000002,
//	0x0002fffe, 0x454e494c, 0x00000003, 0x0002fffe,
//	0x454e494c, 0x00000004, 0x0002fffe, 0x454e494c,
//	0x00000005, 0x0002fffe, 0x454e494c, 0x00000006,
//	0x0002fffe, 0x454e494c, 0x00000007, 0x0002fffe,
//	0x454e494c, 0x00000008, 0x0002fffe, 0x454e494c,
//	0x00000009, 0x0002fffe, 0x454e494c, 0x0000000a,
//	0x0002fffe, 0x454e494c, 0x0000000b, 0x0002fffe,
//	0x454e494c, 0x0000000c, 0x0002fffe, 0x454e494c,
//	0x0000000d, 0x0002fffe, 0x454e494c, 0x0000000e,
//	0x0002fffe, 0x454e494c, 0x0000000f, 0x0002fffe,
//	0x454e494c, 0x00000010, 0x0002fffe, 0x454e494c,
//	0x00000011, 0x0002fffe, 0x454e494c, 0x00000012,
//	0x0002fffe, 0x454e494c, 0x00000013, 0x0002fffe,
//	0x454e494c, 0x00000014, 0x0002fffe, 0x454e494c,
//	0x00000015, 0x0002fffe, 0x454e494c, 0x00000016,
//	0x0002fffe, 0x454e494c, 0x00000017, 0x0002fffe,
//	0x454e494c, 0x00000018, 0x0002fffe, 0x454e494c,
//	0x00000019, 0x0002fffe, 0x454e494c, 0x0000001a,
//	0x0002fffe, 0x454e494c, 0x0000001b, 0x0002fffe,
//	0x454e494c, 0x0000001c, 0x0002fffe, 0x454e494c,
//	0x0000001d, 0x0002fffe, 0x454e494c, 0x0000001e,
//	0x0002fffe, 0x454e494c, 0x0000001f, 0x0002fffe,
//	0x454e494c, 0x00000020, 0x0002fffe, 0x454e494c,
//	0x00000021, 0x0002fffe, 0x454e494c, 0x00000022,
//	0x0002fffe, 0x454e494c, 0x00000023, 0x0002fffe,
//	0x454e494c, 0x00000024, 0x0002fffe, 0x454e494c,
//	0x00000025, 0x0002fffe, 0x454e494c, 0x00000026,
//	0x0002fffe, 0x454e494c, 0x00000027, 0x0002fffe,
//	0x454e494c, 0x00000028, 0x0002fffe, 0x454e494c,
//	0x00000029, 0x0002fffe, 0x454e494c, 0x0000002a,
//	0x0002fffe, 0x454e494c, 0x0000002a, 0x00000005,
//	0x800f0001, 0x90c60002, 0xa0ff0000, 0x0002fffe,
//	0x454e494c, 0x0000002b, 0x0002fffe, 0x454e494c,
//	0x0000002c, 0x0002fffe, 0x454e494c, 0x0000002d,
//	0x0002fffe, 0x454e494c, 0x0000002e, 0x0002fffe,
//	0x454e494c, 0x0000002f, 0x0002fffe, 0x454e494c,
//	0x0000002f, 0x00000008, 0x80080000, 0x90a40001,
//	0xa0000000, 0x0002fffe, 0x454e494c, 0x00000030,
//	0x0002fffe, 0x454e494c, 0x00000030, 0x00000002,
//	0x80080000, 0x81ff0000, 0xa0000000, 0x0002fffe,
//	0x454e494c, 0x00000031, 0x0002fffe, 0x454e494c,
//	0x00000032, 0x0002fffe, 0x454e494c, 0x00000033,
//	0x0002fffe, 0x454e494c, 0x00000033, 0x00000001,
//	0xb0010000, 0x80000001, 0x0002fffe, 0x454e494c,
//	0x00000034, 0x0002fffe, 0x454e494c, 0x00000034,
//	0x00000015, 0x800f0004, 0x90e40000, 0xa0e42018,
//	0x0002fffe, 0x454e494c, 0x00000035, 0x0002fffe,
//	0x454e494c, 0x00000035, 0x00000017, 0x800f0005,
//	0x90e40003, 0xa0e42018, 0x0002fffe, 0x454e494c,
//	0x00000036, 0x0002fffe, 0x454e494c, 0x00000037,
//	0x0002fffe, 0x454e494c, 0x00000038, 0x0002fffe,
//	0x454e494c, 0x00000038, 0x00000005, 0x800f0004,
//	0x80e40004, 0x90000001, 0x0002fffe, 0x454e494c,
//	0x00000039, 0x0002fffe, 0x454e494c, 0x00000039,
//	0x00000005, 0x800f0005, 0x80e40005, 0x90000001,
//	0x0002fffe, 0x454e494c, 0x0000003a, 0x0002fffe,
//	0x454e494c, 0x0000003b, 0x0002fffe, 0x454e494c,
//	0x0000003c, 0x0002fffe, 0x454e494c, 0x0000003c,
//	0x00000001, 0xb0010000, 0x80550001, 0x0002fffe,
//	0x454e494c, 0x0000003d, 0x0002fffe, 0x454e494c,
//	0x0000003d, 0x00000015, 0x800f0002, 0x90e40000,
//	0xa0e42018, 0x0002fffe, 0x454e494c, 0x0000003e,
//	0x0002fffe, 0x454e494c, 0x0000003e, 0x00000017,
//	0x800f0003, 0x90e40003, 0xa0e42018, 0x0002fffe,
//	0x454e494c, 0x0000003f, 0x0002fffe, 0x454e494c,
//	0x00000040, 0x0002fffe, 0x454e494c, 0x00000041,
//	0x0002fffe, 0x454e494c, 0x00000041, 0x00000004,
//	0x800f0004, 0x80e40002, 0x90550001, 0x80e40004,
//	0x0002fffe, 0x454e494c, 0x00000042, 0x0002fffe,
//	0x454e494c, 0x00000042, 0x00000004, 0x800f0005,
//	0x80e40003, 0x90550001, 0x80e40005, 0x0002fffe,
//	0x454e494c, 0x00000043, 0x0002fffe, 0x454e494c,
//	0x00000044, 0x0002fffe, 0x454e494c, 0x00000045,
//	0x0002fffe, 0x454e494c, 0x00000045, 0x00000001,
//	0xb0010000, 0x80aa0001, 0x0002fffe, 0x454e494c,
//	0x00000046, 0x0002fffe, 0x454e494c, 0x00000046,
//	0x00000015, 0x800f0002, 0x90e40000, 0xa0e42018,
//	0x0002fffe, 0x454e494c, 0x00000047, 0x0002fffe,
//	0x454e494c, 0x00000047, 0x00000017, 0x800f0003,
//	0x90e40003, 0xa0e42018, 0x0002fffe, 0x454e494c,
//	0x00000048, 0x0002fffe, 0x454e494c, 0x00000049,
//	0x0002fffe, 0x454e494c, 0x0000004a, 0x0002fffe,
//	0x454e494c, 0x0000004a, 0x00000004, 0x800f0004,
//	0x80e40002, 0x90aa0001, 0x80e40004, 0x0002fffe,
//	0x454e494c, 0x0000004b, 0x0002fffe, 0x454e494c,
//	0x0000004b, 0x00000004, 0x800f0005, 0x80e40003,
//	0x90aa0001, 0x80e40005, 0x0002fffe, 0x454e494c,
//	0x0000004c, 0x0002fffe, 0x454e494c, 0x0000004d,
//	0x0002fffe, 0x454e494c, 0x0000004e, 0x0002fffe,
//	0x454e494c, 0x0000004e, 0x00000001, 0xb0010000,
//	0x80ff0001, 0x0002fffe, 0x454e494c, 0x0000004f,
//	0x0002fffe, 0x454e494c, 0x0000004f, 0x00000015,
//	0x800f0002, 0x90e40000, 0xa0e42018, 0x0002fffe,
//	0x454e494c, 0x00000050, 0x0002fffe, 0x454e494c,
//	0x00000050, 0x00000017, 0x800f0003, 0x90e40003,
//	0xa0e42018, 0x0002fffe, 0x454e494c, 0x00000051,
//	0x0002fffe, 0x454e494c, 0x00000052, 0x0002fffe,
//	0x454e494c, 0x00000053, 0x0002fffe, 0x454e494c,
//	0x00000053, 0x00000004, 0x800f0004, 0x80e40002,
//	0x80ff0000, 0x80e40004, 0x0002fffe, 0x454e494c,
//	0x00000054, 0x0002fffe, 0x454e494c, 0x00000054,
//	0x00000004, 0x800f0005, 0x80e40003, 0x80ff0000,
//	0x80e40005, 0x0002fffe, 0x454e494c, 0x00000055,
//	0x0002fffe, 0x454e494c, 0x00000056, 0x0002fffe,
//	0x454e494c, 0x00000057, 0x0002fffe, 0x454e494c,
//	0x00000057, 0x00000001, 0x80080004, 0xa0000000,
//	0x0002fffe, 0x454e494c, 0x00000058, 0x0002fffe,
//	0x454e494c, 0x00000058, 0x00000014, 0xc00f0000,
//	0x80e40004, 0xa0e40002, 0x0002fffe, 0x454e494c,
//	0x00000059, 0x0002fffe, 0x454e494c, 0x0000005a,
//	0x0002fffe, 0x454e494c, 0x0000005b, 0x0002fffe,
//	0x454e494c, 0x0000005b, 0x00000008, 0x80080005,
//	0x80e40005, 0x80e40005, 0x0002fffe, 0x454e494c,
//	0x0000005c, 0x0002fffe, 0x454e494c, 0x0000005c,
//	0x00000007, 0x80080005, 0x80ff0005, 0x0002fffe,
//	0x454e494c, 0x0000005d, 0x0002fffe, 0x454e494c,
//	0x0000005d, 0x00000005, 0x800f0005, 0x80e40005,
//	0x80ff0005, 0x0002fffe, 0x454e494c, 0x0000005e,
//	0x0002fffe, 0x454e494c, 0x0000005f, 0x0002fffe,
//	0x454e494c, 0x00000060, 0x0002fffe, 0x454e494c,
//	0x00000060, 0x00000001, 0xe00f0000, 0x90e40004,
//	0x0002fffe, 0x454e494c, 0x00000061, 0x0002fffe,
//	0x454e494c, 0x00000061, 0x00000001, 0xe00f0001,
//	0x80e40005, 0x0000ffff
//};
//
//
//
//
//
//
//
//
//
//
//
//
//DWORD		DxSkinMesh::m_dwReflectPS;
//
//
///*
//*/
//
//DWORD		DxSkinMesh::dwReflectAPS[] = 
//{
//	0xffff0104, 0x0009fffe, 0x58443344, 0x68532038, 
//    0x72656461, 0x73734120, 0x6c626d65, 0x56207265, 
//    0x69737265, 0x30206e6f, 0x0031392e, 0x0004fffe, 
//    0x454c4946, 0x676e6f70, 0x70766e2e, 0x00000000, 
//    0x0002fffe, 0x454e494c, 0x00000003, 0x00000042, 
//    0x800f0000, 0xb0e40000, 0x0002fffe, 0x454e494c, 
//    0x00000004, 0x00000040, 0x80070001, 0xb0e40001, 
//    0x0002fffe, 0x454e494c, 0x00000006, 0x00000008, 
//    0x80070001, 0x80e40001, 0xa0e40000, 0x0002fffe, 
//    0x454e494c, 0x00000007, 0x00000005, 0x80070000, 
//    0x80e40000, 0x80e40001, 0x0000ffff
//};
//
/////*
////// Pixel Shader 1.1 generated by NVIDIA Cg compiler
////// cgc version 1.1.0003, build date Mar  4 2003  12:32:10
////// command line args: -I. -profile ps_1_1
//////vendor NVIDIA Corporation
//////version 1.0.02
//////profile ps_1_1
//////program main
//////semantic main.NormalMap
//////semantic main.SpecularMap
//////var float4 Normal : $vin.COLOR0 : COLOR0 : 1 : 1
//////var float4 HalfAngleVector : $vin.COLOR1 : COLOR1 : 2 : 1
//////var float4 TexCoord : $vin.TEXCOORD0 : TEXCOORD0 : 3 : 1
//////var float4 TexCoord1 : $vin.TEXCOORD1 : TEXCOORD1 : 4 : 1
//////var float4 Color : $vout.COLOR : COLOR : 5 : 1
//////var sampler2D NormalMap :  : texunit 0 : 6 : 1
//////var sampler2D SpecularMap :  : texunit 1 : 7 : 1
////ps.1.1
////def c0, 0.000000, 0.000000, 1.000000, 0.000000
////tex t0
////tex t1
////dp3_sat t0.rgb, t0_bx2, v1_bx2
////dp3_sat t2.rgb, v0_bx2, v1_bx2
////mul t0.rgb, t0, t0
////+ mul t0.a, t2.b, t2.b
////mul t0.rgb, t0, t0
////mul t0.rgb, t0, t0
////mul t0.rgb, t0, t0
////mul t0.rgb, t0.a, t0
////mul r0.rgb, t0, t1
////+ mov r0.a, c0.b
////// 10 instructions
////// End of program
////*/
////DWORD		DxSkinMesh::dwReflectAPS[] = 
////{
////	0xffff0101, 0x0004fffe, 0x454c4946, 0x6c666552,
////	0x2e746365, 0x0070766e, 0x0002fffe, 0x454e494c,
////	0x00000001, 0x0002fffe, 0x454e494c, 0x00000002,
////	0x0002fffe, 0x454e494c, 0x00000002, 0x00000051,
////	0xa00f0000, 0x00000000, 0x00000000, 0x3f800000,
////	0x00000000, 0x0002fffe, 0x454e494c, 0x00000003,
////	0x0002fffe, 0x454e494c, 0x00000003, 0x00000042,
////	0xb00f0000, 0x0002fffe, 0x454e494c, 0x00000004,
////	0x0002fffe, 0x454e494c, 0x00000004, 0x00000042,
////	0xb00f0001, 0x0002fffe, 0x454e494c, 0x00000005,
////	0x0002fffe, 0x454e494c, 0x00000005, 0x00000042,
////	0xb00f0002, 0x0002fffe, 0x454e494c, 0x00000006,
////	0x0002fffe, 0x454e494c, 0x00000007, 0x0002fffe,
////	0x454e494c, 0x00000007, 0x00000005, 0xb00f0001,
////	0x90e40001, 0xb0e40001, 0x0002fffe, 0x454e494c,
////	0x00000008, 0x0002fffe, 0x454e494c, 0x00000008,
////	0x00000005, 0xb00f0001, 0xb0e40001, 0xb0e40002,
////	0x0002fffe, 0x454e494c, 0x00000009, 0x0002fffe,
////	0x454e494c, 0x00000009, 0x00000004, 0x80070000,
////	0x90e40000, 0xb0e40000, 0xb0e40001, 0x0002fffe,
////	0x454e494c, 0x0000000a, 0x0002fffe, 0x454e494c,
////	0x0000000a, 0x40000001, 0x80080000, 0xa0aa0000,
////	0x0000ffff
////};