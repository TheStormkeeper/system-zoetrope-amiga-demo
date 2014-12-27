#include <intuition/intuition.h>

/* Image palette, RGB4 format (OCS/ECS machines) */
UWORD ruby_stripe_palRGB4[4] = {
	0x000,0x621,0x942,0xC62,
};

/* Ensure that this data is within chip memory or you'll see nothing !!! */
UWORD chip ruby_stripe_img[16][60]=
{
	/* Sprite #0 */
	{
		0x0,0x0,
		0x100,0x180,
		0x100,0x180,
		0x380,0x340,
		0x7c0,0x700,
		0x7e0,0x700,
		0xfe0,0xf10,
		0xff0,0xf00,
		0x1ff8,0x1f00,
		0x1ff8,0x3f00,
		0x35fc,0x3f00,
		0x56fe,0x7f00,
		0x55fe,0x7f00,
		0xbfff,0xff00,
		0x281f,0xd7e0,
		0xffcf,0xf0,
		0x7f0e,0xf0,
		0x3f3e,0x40c0,
		0x3f3c,0xc0,
		0x1fb8,0x40,
		0xff8,0x1000,
		0xff0,0x0,
		0x7f0,0x800,
		0x3e0,0x400,
		0x3c0,0x0,
		0xc0,0x300,
		0x80,0x100,
		0x0,0x180,
		0x0,0x0,
		0x0,0x0
	},
	/* Sprite #1 */
	{
		0x0,0x0,
		0x100,0x180,
		0x100,0x180,
		0x3c0,0x300,
		0x7c0,0x700,
		0x760,0x780,
		0xff0,0xf00,
		0xff0,0xf00,
		0x1f78,0x1f80,
		0x1f78,0x3f80,
		0x3f7c,0x3f80,
		0x777c,0x7f80,
		0x4f7e,0x7f80,
		0xffff,0xff80,
		0x883f,0x77c0,
		0xffdf,0x60,
		0x7f8e,0x70,
		0x3ffc,0x4040,
		0x3fbc,0x40,
		0x1fb8,0x40,
		0xff8,0x1000,
		0xff0,0x0,
		0x7f0,0x800,
		0x3e0,0x400,
		0x3c0,0x0,
		0xc0,0x300,
		0x80,0x100,
		0x0,0x180,
		0x0,0x0,
		0x0,0x0
	},
	/* Sprite #2 */
	{
		0x0,0x0,
		0x100,0x180,
		0x100,0x180,
		0x340,0x380,
		0x740,0x780,
		0x7e0,0x780,
		0xfe0,0xf80,
		0xff0,0xf80,
		0x1ff8,0x1f80,
		0x1ff8,0x3f80,
		0x3ffc,0x3f80,
		0x7ffc,0x7f80,
		0x7fbe,0x7fc0,
		0xfffe,0xffc0,
		0x17f,0xffc0,
		0xff9e,0x60,
		0x7e9e,0x160,
		0x3e9c,0x4160,
		0x3ebc,0x140,
		0x1ef8,0x100,
		0xff8,0x1000,
		0xff0,0x0,
		0xee0,0x100,
		0x3e0,0x400,
		0x3c0,0x0,
		0x1c0,0x200,
		0x80,0x100,
		0x100,0x180,
		0x0,0x0,
		0x0,0x0
	},
	/* Sprite #3 */
	{
		0x0,0x0,
		0x100,0x180,
		0x180,0x180,
		0x340,0x380,
		0x7c0,0x780,
		0x7e0,0x780,
		0xfe0,0xf80,
		0xff0,0xf80,
		0x1fb0,0x1fc0,
		0x1ff8,0x3fc0,
		0x3ff8,0x3fc0,
		0x7ffc,0x7fc0,
		0x7ffe,0x7fc0,
		0xffde,0xffe0,
		0x5df,0xffe0,
		0xffbe,0x60,
		0x7e1e,0x1e0,
		0x3edc,0x4160,
		0x3eb8,0x144,
		0x1eb8,0x140,
		0x1ef0,0x100,
		0xfb0,0x40,
		0x6e0,0x900,
		0x7e0,0x0,
		0x3c0,0x0,
		0x180,0x240,
		0x80,0x100,
		0x0,0x180,
		0x0,0x0,
		0x0,0x0
	},
	/* Sprite #4 */
	{
		0x0,0x0,
		0x180,0x180,
		0x180,0x180,
		0x3c0,0x380,
		0x7c0,0x780,
		0x7e0,0x780,
		0xfa0,0xfc0,
		0xfb0,0xfc0,
		0x1ff0,0x1fc0,
		0x1ff8,0x3fc0,
		0x3fd8,0x3fe0,
		0x7fdc,0x7fe0,
		0x7ffc,0x7fe0,
		0xfffe,0xffe0,
		0x17ee,0xfff0,
		0xff2e,0xf0,
		0x7a2c,0x5f0,
		0x3e18,0x1e4,
		0x3e88,0x170,
		0x1ea0,0x158,
		0xeb0,0x1140,
		0xfa0,0x50,
		0xee0,0x100,
		0x7c0,0x20,
		0x3c0,0x0,
		0x180,0x240,
		0x80,0x100,
		0x0,0x180,
		0x0,0x0,
		0x0,0x0
	},
	/* Sprite #5 */
	{
		0x0,0x0,
		0x180,0x180,
		0x180,0x180,
		0x3c0,0x380,
		0x7c0,0x780,
		0x7a0,0x7c0,
		0xfe0,0xfc0,
		0xff0,0xfc0,
		0x1ff0,0x1fc0,
		0x1ff0,0x1fe0,
		0x3ff8,0x3fe0,
		0x3ff8,0x7fe0,
		0x7fec,0x7ff0,
		0x7ffc,0xfff0,
		0x55fe,0xfff0,
		0x7a1c,0x5f2,
		0x7a18,0x5f4,
		0x3e28,0x1f4,
		0x3e80,0x178,
		0x1ab0,0x558,
		0xea0,0x1150,
		0xfe0,0x10,
		0x7c0,0x20,
		0x6c0,0x120,
		0x380,0x40,
		0x380,0x40,
		0x0,0x180,
		0x0,0x180,
		0x0,0x0,
		0x0,0x0
	},
	/* Sprite #6 */
	{
		0x0,0x0,
		0x180,0x180,
		0x180,0x180,
		0x380,0x380,
		0x380,0x3c0,
		0x7c0,0x7c0,
		0x7e0,0xfc0,
		0xfe0,0xfc0,
		0x1fd0,0x1fe0,
		0x1ff0,0x1fe0,
		0x1fa8,0x3ff0,
		0x3fe8,0x3ff0,
		0x7f5c,0x7ff0,
		0x7ff4,0x7ff8,
		0x7c,0xfff8,
		0x7a14,0x5f8,
		0x3a58,0x45f4,
		0x3e08,0x1f0,
		0x1e80,0x178,
		0x1aa0,0x550,
		0xfa0,0x50,
		0xfe0,0x0,
		0x7c0,0x20,
		0x7c0,0x0,
		0x380,0x40,
		0x180,0x240,
		0x0,0x180,
		0x0,0x180,
		0x0,0x0,
		0x0,0x0
	},
	/* Sprite #7 */
	{
		0x0,0x0,
		0x180,0x180,
		0x180,0x180,
		0x380,0x3c0,
		0x3c0,0x3c0,
		0x7c0,0x7c0,
		0x7c0,0x7e0,
		0xf40,0xfe0,
		0xda0,0xff0,
		0x1e40,0x1ff0,
		0x1550,0x1ff0,
		0x3d50,0x3ff8,
		0x3550,0x3ff8,
		0x7fd8,0x7ffc,
		0x207c,0x5ffc,
		0x7e18,0x1fc,
		0x3a20,0x5f8,
		0x3e00,0x1f8,
		0x1a80,0x570,
		0x1ea0,0x150,
		0xfa0,0x50,
		0xfe0,0x0,
		0x7e0,0x0,
		0x7c0,0x0,
		0x380,0x40,
		0x380,0x0,
		0x0,0x180,
		0x0,0x180,
		0x0,0x0,
		0x0,0x0
	},
	/* Sprite #8 */
	{
		0x0,0x0,
		0x180,0x180,
		0x180,0x180,
		0x380,0x3c0,
		0x3c0,0x3c0,
		0x7c0,0x7c0,
		0x640,0x7e0,
		0x500,0xfe0,
		0xd40,0xff0,
		0x810,0x1ff0,
		0x1540,0x1ff8,
		0x1000,0x3ff8,
		0x2550,0x3ffc,
		0x3554,0x3ffc,
		0x20f8,0x5ffe,
		0x3e10,0x1fc,
		0x3a40,0x5fc,
		0x1e80,0x178,
		0x1e80,0x178,
		0xfb0,0x40,
		0xfe0,0x10,
		0x7e0,0x0,
		0x7e0,0x0,
		0x3c0,0x0,
		0x3c0,0x0,
		0x380,0x40,
		0x0,0x180,
		0x0,0x180,
		0x0,0x0,
		0x0,0x0
	},
	/* Sprite #9 */
	{
		0x0,0x0,
		0x180,0x180,
		0x180,0x180,
		0x380,0x3c0,
		0x3c0,0x3c0,
		0x340,0x3e0,
		0x400,0x7e0,
		0x500,0x7f0,
		0x400,0xff0,
		0x800,0xff8,
		0x0,0x1ff8,
		0x1040,0x1ffc,
		0x1110,0x1ffc,
		0x2444,0x3ffe,
		0x970,0x37fe,
		0x3a50,0x5fe,
		0x1a00,0x5fc,
		0x1e00,0x1fc,
		0xea8,0x150,
		0xeb0,0x148,
		0xfe0,0x10,
		0x7e0,0x10,
		0x3e0,0x400,
		0x3e0,0x0,
		0x3c0,0x0,
		0x180,0x40,
		0x0,0x180,
		0x0,0x180,
		0x0,0x0,
		0x0,0x0
	},
	/* Sprite #10 */
	{
		0x0,0x0,
		0x180,0x180,
		0x180,0x180,
		0x380,0x3c0,
		0x340,0x3c0,
		0x600,0x7e0,
		0x400,0x7e0,
		0x400,0xff0,
		0x800,0xff0,
		0x800,0xff8,
		0x1000,0x1ff8,
		0x1000,0x1ffc,
		0x1800,0x37fe,
		0x2040,0x3ffe,
		0x9f0,0x77fe,
		0x3842,0x7fc,
		0x3a00,0x5fe,
		0x1a08,0x5f4,
		0xea8,0x1150,
		0xea8,0x150,
		0xff0,0x0,
		0x7e0,0x10,
		0x7e0,0x0,
		0x3e0,0x0,
		0x3c0,0x0,
		0x180,0x40,
		0x80,0x100,
		0x100,0x180,
		0x0,0x0,
		0x0,0x0
	},
	/* Sprite #11 */
	{
		0x0,0x0,
		0x180,0x180,
		0x180,0x180,
		0x300,0x3c0,
		0x340,0x3c0,
		0x600,0x7e0,
		0x400,0x7e0,
		0xc00,0xff0,
		0xea0,0xd58,
		0xa08,0x1df0,
		0x1820,0x1fdc,
		0x1408,0x3bf4,
		0x1000,0x3ffe,
		0x7000,0x7ffe,
		0x29d2,0x57fd,
		0x3842,0x7fc,
		0x3804,0x7fa,
		0x1a08,0x25f4,
		0x1ea8,0x154,
		0xeb8,0x1140,
		0xff0,0x8,
		0x7f0,0x800,
		0x7e0,0x0,
		0x3e0,0x400,
		0x3c0,0x0,
		0x180,0x240,
		0x80,0x100,
		0x0,0x180,
		0x0,0x0,
		0x0,0x0
	},
	/* Sprite #12 */
	{
		0x0,0x0,
		0x180,0x180,
		0x100,0x180,
		0x340,0x3c0,
		0x200,0x3c0,
		0x600,0x7e0,
		0x6a0,0x750,
		0xc80,0xf70,
		0xea0,0xd58,
		0x1ea8,0x1d50,
		0x1228,0x3dd4,
		0x2a88,0x3d74,
		0x2822,0x7fdc,
		0x5802,0x7ffd,
		0x942,0x77fd,
		0x78ca,0x7f5,
		0x3806,0x7f8,
		0x3c0c,0x3f2,
		0x1ea8,0x154,
		0xeb8,0x1140,
		0xff8,0x0,
		0x7f0,0x800,
		0x7e0,0x10,
		0x3e0,0x400,
		0x3c0,0x0,
		0x180,0x240,
		0x80,0x100,
		0x0,0x180,
		0x0,0x0,
		0x0,0x0
	},
	/* Sprite #13 */
	{
		0x0,0x0,
		0x180,0x180,
		0x100,0x180,
		0x380,0x340,
		0x380,0x340,
		0x680,0x760,
		0x6a0,0xf50,
		0xfa0,0xe50,
		0x1db0,0x1e48,
		0x15a8,0x1e50,
		0x16a8,0x3d54,
		0x36ac,0x3d52,
		0x460a,0x7df4,
		0x5a8a,0x7d75,
		0x143,0xfffc,
		0x798e,0x7f1,
		0x3c06,0x43f8,
		0x3c0c,0x3f2,
		0x1eac,0x2150,
		0x1eb8,0x140,
		0xff8,0x0,
		0xff0,0x0,
		0x7e0,0x10,
		0x3e0,0x400,
		0x3c0,0x0,
		0x1c0,0x200,
		0x80,0x100,
		0x0,0x180,
		0x0,0x0,
		0x0,0x0
	},
	/* Sprite #14 */
	{
		0x0,0x0,
		0x180,0x180,
		0x100,0x180,
		0x380,0x340,
		0x780,0x740,
		0x7e0,0x700,
		0x6a0,0xf50,
		0xff0,0xe00,
		0x1fb8,0x1e40,
		0x17f8,0x1e00,
		0x35b8,0x3e44,
		0x15ac,0x7e52,
		0x54ae,0x7f50,
		0x6d2b,0xfed4,
		0x90f,0xf7f0,
		0x7dc6,0x3f9,
		0x3e0e,0x41f0,
		0x3e0e,0x1f0,
		0x3e3c,0x1c0,
		0x1eb8,0x140,
		0xff8,0x1000,
		0xff0,0x0,
		0x7e0,0x10,
		0x3e0,0x400,
		0x3c0,0x0,
		0x1c0,0x200,
		0x80,0x100,
		0x0,0x180,
		0x0,0x0,
		0x0,0x0
	},
	/* Sprite #15 */
	{
		0x0,0x0,
		0x100,0x180,
		0x100,0x180,
		0x380,0x340,
		0x7c0,0x700,
		0x7e0,0x700,
		0xfe0,0xf10,
		0xef0,0xf00,
		0x1ef8,0x1f00,
		0x1ef8,0x3f00,
		0x26fc,0x3f00,
		0x3bfe,0x7e00,
		0x44be,0x7f40,
		0xdeaf,0xff50,
		0xa0f,0xf5f0,
		0xffce,0x1f1,
		0x7e0e,0x1f0,
		0x3e2e,0x1d0,
		0x3f3c,0xc0,
		0x1eb8,0x140,
		0xff8,0x1000,
		0xff0,0x0,
		0x7f0,0x800,
		0x3e0,0x400,
		0x3c0,0x0,
		0x1c0,0x200,
		0x80,0x100,
		0x0,0x180,
		0x0,0x0,
		0x0,0x0
	},
};

