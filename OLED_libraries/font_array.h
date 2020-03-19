#ifndef __FONT_ARRAY_H
#define __FONT_ARRAY_H


code unsigned char P8x8[] =     // 显示8x8图像
{
	/* 进度条组合 */
	0x3C, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF, 0x7E, 0x3C,		//0 基准 1
	0x7E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7E, 0x3C,		//1 基准 2
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7E, 0x3C,		//2 推进值
	
	0x00, 0x00, 0x18, 0x3C, 0x3C, 0x18, 0x00, 0x00,		//3 未选定点
	0x3C, 0x66, 0xC3, 0x81, 0x81, 0xC3, 0x66, 0x3C,		//4 选定点
	
	0x07, 0x05, 0x07, 0x00, 0x3E, 0x41, 0x41, 0x41,		//5 摄氏度
	
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		//6 清零
};

code unsigned char P16x16[] =    // 显示16x16图像
{
    /*电池显示*/
    0xF8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xF8, 0xC0,
    0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x03, //0
    0xF8, 0x08, 0xE8, 0xE8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xF8, 0xC0,
    0x1F, 0x10, 0x17, 0x17, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x03, //1
    0xF8, 0x08, 0xE8, 0xE8, 0x08, 0xE8, 0xE8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xF8, 0xC0,
    0x1F, 0x10, 0x17, 0x17, 0x10, 0x17, 0x17, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x03, //2
    0xF8, 0x08, 0xE8, 0xE8, 0x08, 0xE8, 0xE8, 0x08, 0xE8, 0xE8, 0x08, 0x08, 0x08, 0x08, 0xF8, 0xC0,
    0x1F, 0x10, 0x17, 0x17, 0x10, 0x17, 0x17, 0x10, 0x17, 0x17, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x03, //3
    0xF8, 0x08, 0xE8, 0xE8, 0x08, 0xE8, 0xE8, 0x08, 0xE8, 0xE8, 0x08, 0xE8, 0xE8, 0x08, 0xF8, 0xC0,
    0x1F, 0x10, 0x17, 0x17, 0x10, 0x17, 0x17, 0x10, 0x17, 0x17, 0x10, 0x17, 0x17, 0x10, 0x1F, 0x03, //4
	
    0x00, 0x00, 0x00, 0x00, 0x20, 0x40, 0x80, 0xFC, 0x88, 0x50, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x1F, 0x08, 0x05, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, //5	蓝牙标志
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0xC0, 0x00, 0xE0, 0x00, 0xF0, 0x00, 0xF8, 0x00, 0x00,
    0x00, 0x0E, 0x00, 0x0F, 0x00, 0x0F, 0x00, 0x0F, 0x00, 0x0F, 0x00, 0x0F, 0x00, 0x0F, 0x00, 0x00, //6	信号格
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x14, 0x24, 0x44, 0xFC, 0x44, 0x24, 0x14, 0x0C,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, //7 信号天线
    0x00, 0x20, 0x10, 0x88, 0x44, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x44, 0x88, 0x10, 0x20, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x19, 0x19, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, //8 wifi 4
    0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x19, 0x19, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, //9 wifi 3
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x19, 0x19, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, //10 wifi 2
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //11 wifi 1
    0x06, 0x0A, 0x12, 0x22, 0xFE, 0x22, 0x12, 0x0A, 0x06, 0x00, 0x80, 0x00, 0xE0, 0x00, 0xF8, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x18, 0x00, 0x1E, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, //12 信号
	0x20, 0x10, 0x90, 0x60, 0x00, 0x80, 0x40, 0x20, 0xF0, 0x00, 0x00, 0xE0, 0x10, 0x10, 0x10, 0x20,
	0x06, 0x05, 0x04, 0x04, 0x00, 0x05, 0x01, 0x01, 0x07, 0x01, 0x00, 0x03, 0x04, 0x05, 0x05, 0x03,	//13 2.4G
};

code unsigned char P32x32[] =    // 显示32x32图像
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x30, 0x70, 0x30, 0x00,
	0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x60, 0x60, 0x60, 0x61, 0x03, 0xF9, 0xFC, 0x9E, 0xC6, 0xC7, 0xE7, 0x67, 0x66,
	0x6E, 0x7C, 0xF9, 0xC3, 0xE1, 0xE0, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x70, 0xFC, 0xFE, 0x07, 0x07, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x07, 0x8E, 0xFE, 0xF8, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x0E, 0x0C, 0x1C, 0x1C,
	0x1C, 0x1C, 0x0C, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,	// 0 多云

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xC0, 0xE0, 0x60, 0x70, 0x70,
	0x70, 0x70, 0xE0, 0xE0, 0xC0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xFC, 0xFE, 0x87, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x87, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0xC3, 0xF3, 0xC3, 0x07, 0x36, 0xF8, 0xFC,
	0xCE, 0x01, 0xC7, 0xF7, 0xC3, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x08, 0x07, 0x03, 0x01,
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	// 1 雷阵雨

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0x70, 0x38, 0x18, 0x18, 0x18, 0x18, 0x38, 0x70, 0xE0, 0xC0,
	0xE0, 0x70, 0x38, 0x18, 0x18, 0x18, 0x18, 0x38, 0x70, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0E, 0x1C, 0x18, 0x18, 0x18, 0x18, 0x1C, 0x0E, 0x07, 0x03,
	0x07, 0x0E, 0x1C, 0x18, 0x18, 0x18, 0x18, 0x1C, 0x0E, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	// 2 霾

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0,
	0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x81, 0x03, 0xC7, 0xF2, 0xF8, 0x3C, 0x1C, 0x0E, 0x0E,
	0x0E, 0x0E, 0x1C, 0x3C, 0xF8, 0xF2, 0xC7, 0x03, 0x81, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x81, 0xC0, 0xE3, 0x4F, 0x1F, 0x3C, 0x78, 0x70, 0x70,
	0x70, 0x70, 0x78, 0x3C, 0x1F, 0x4F, 0xE3, 0xC0, 0x81, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F,
	0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	// 3 晴

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE,
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE,
	0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	// 4 雾

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x60, 0x60,
	0x60, 0x60, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x70, 0xF8, 0xFC, 0x0E, 0x06, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x06, 0x0E, 0xFC, 0xF8, 0x70, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0xC6, 0xE6, 0xF6, 0xC6, 0x0C, 0x0C, 0x18, 0x18,
	0x18, 0x18, 0x0C, 0x0C, 0xC6, 0xF6, 0xE6, 0xC6, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x0C, 0x1F,
	0x1E, 0x0C, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	// 5 下雨
	
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0x80,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x60, 0x38, 0x0E, 0x03, 0x00, 0x03,
	0x0E, 0x38, 0x60, 0xC0, 0x00, 0x00, 0x20, 0x20, 0xAA, 0xAA, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC3, 0xBD, 0xFF, 0xFF, 0xFE, 0xFE, 0xFC,
	0xF8, 0xF8, 0xF8, 0xFD, 0x7F, 0x00, 0x08, 0x08, 0xAA, 0xAA, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x07, 0x07, 0x07,
	0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // 6 湿度图
	
#if 0
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x40,
	0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x4C, 0x58, 0xF0, 0x40, 0xF0, 0x58, 0x4C, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFE,
	0x00, 0xFF, 0xAA, 0xAA, 0x22, 0x00, 0x44, 0x48, 0xE0, 0xF0, 0xFC, 0xF0, 0xE0, 0x48, 0x44, 0x00,
	0x00, 0x00, 0x06, 0x03, 0x01, 0x00, 0x01, 0x03, 0x06, 0x00, 0xF0, 0xF8, 0x0C, 0x67, 0xF0, 0xFF,
	0xF0, 0x67, 0x0C, 0xF8, 0xF0, 0x00, 0x04, 0x02, 0x00, 0x01, 0x07, 0x01, 0x00, 0x02, 0x04, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x0C, 0x0D,
	0x0C, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
#else
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x60, 0x20, 0x60, 0xC0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xF0, 0x00, 0xFF,
	0x55, 0x55, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xFC, 0x86, 0x33, 0x78, 0xFF, 0x78, 0x33,
	0x86, 0xFC, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x06, 0x06, 0x03,
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 7 温度图
	
#endif

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xFE, 0x0C, 0x38, 0xE0, 0x80, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xC0, 0x70, 0x1E, 0x02, 0x00, 0x80, 0xF0, 0x1C, 0x06, 0x1C, 0xF0, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0E, 0x18, 0x3F, 0x00, 0x00, 0x20, 0x3C, 0x07,
	0x01, 0x00, 0x00, 0x30, 0x1E, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x1E, 0x30, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 8 未知天气图
};

#define _P16x32_MODE		0
code unsigned char P16x32[] =
{
#if (0 == _P16x32_MODE)
	// 0
	0x00, 0xC0, 0x80, 0x20, 0x60, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0x80, 0xC0, 0x00,
	0x00, 0x3F, 0x7F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x7F, 0x3F, 0x00,
	0x00, 0xFE, 0xFF, 0x7E, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x7E, 0xFF, 0xFE, 0x00,
	0x00, 0x01, 0x00, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x00, 0x01, 0x00,

	// 1
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x7F, 0x3F, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0xFF, 0xFE, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,

	// 2
	0x00, 0x00, 0x20, 0x60, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0x80, 0xC0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x3F, 0x7F, 0x3F, 0x00,
	0x00, 0xFE, 0xFF, 0x7E, 0x00, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0x00, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x00, 0x00,

	// 3
	0x00, 0x00, 0x20, 0x60, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0x80, 0xC0, 0x00,
	0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x3F, 0x7F, 0x3F, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x00, 0x7E, 0xFF, 0xFE, 0x00,
	0x00, 0x00, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x00, 0x01, 0x00,

	// 4
	0x00, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x00,
	0x00, 0x3F, 0x7F, 0x3F, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x3F, 0x7F, 0x3F, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0xFE, 0xFF, 0xFE, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x00,

	// 5
	0x00, 0xC0, 0x80, 0x20, 0x60, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0x00, 0x00,
	0x00, 0x3F, 0x7F, 0x3F, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x00, 0x7E, 0xFF, 0xFE, 0x00,
	0x00, 0x00, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x00, 0x01, 0x00,

	// 6
	0x00, 0xC0, 0x80, 0x20, 0x60, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0x00, 0x00,
	0x00, 0x3F, 0x7F, 0x3F, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFE, 0xFF, 0x7E, 0x00, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x00, 0x7E, 0xFF, 0xFE, 0x00,
	0x00, 0x01, 0x00, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x00, 0x01, 0x00,

	// 7
	0x00, 0x00, 0x00, 0x20, 0x60, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0x80, 0xC0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x7F, 0x3F, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFE, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x00,

	// 8
	0x00, 0xC0, 0x80, 0x20, 0x60, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0x80, 0xC0, 0x00,
	0x00, 0x3F, 0x7F, 0x3F, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x3F, 0x7F, 0x3F, 0x00,
	0x00, 0xFE, 0xFF, 0x7E, 0x00, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x00, 0x7E, 0xFF, 0xFE, 0x00,
	0x00, 0x01, 0x00, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x00, 0x01, 0x00,

	// 9
	0x00, 0xC0, 0x80, 0x20, 0x60, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0x80, 0xC0, 0x00,
	0x00, 0x3F, 0x7F, 0x3F, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x3F, 0x7F, 0x3F, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x00, 0x7E, 0xFF, 0xFE, 0x00,
	0x00, 0x00, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x00, 0x01, 0x00,

#elif (1 == _P16x32_MODE)		// 宽字
	0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0x00, 0x00, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00,
	0xE0, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xE0,
	0x03, 0x1F, 0x7F, 0x7F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x7F, 0x7F, 0x1F, 0x03,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,/*"0",0*/
	/* (16 X 32 , Stencil Std )*/

	0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,/*"1",1*/
	/* (16 X 32 , Stencil Std )*/

	0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x00, 0x40, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00,
	0x00, 0x0E, 0x1F, 0x1F, 0x1F, 0x1F, 0x0E, 0x80, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1E, 0x00,
	0x00, 0xC0, 0xE0, 0xE8, 0xF4, 0xF6, 0xF3, 0xF3, 0xF3, 0xE1, 0xE1, 0xE0, 0xE0, 0xE0, 0x78, 0x00,
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,/*"2",2*/
	/* (16 X 32 , Stencil Std )*/

	0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0x00, 0x40, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0E, 0x1F, 0x1F, 0x1F, 0x0E, 0x80, 0xC0, 0xC0, 0xFF, 0x7F, 0x7F, 0x3F, 0x1E, 0x00,
	0x00, 0x70, 0xF8, 0xF8, 0xF8, 0x30, 0x00, 0x00, 0x00, 0x81, 0xFF, 0xFF, 0xFF, 0xFE, 0x7C, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,/*"3",3*/
	/* (16 X 32 , Stencil Std )*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0x38, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x18, 0x1C, 0x17, 0x11, 0x10, 0x10, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x90, 0x10, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,/*"4",4*/
	/* (16 X 32 , Stencil Std )*/

	0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0x00, 0x00,
	0x00, 0x00, 0xF7, 0xF7, 0xC7, 0x67, 0x67, 0x07, 0x67, 0xE7, 0xE3, 0xC3, 0xC1, 0x80, 0x00, 0x00,
	0x00, 0x70, 0xF8, 0xF8, 0xF8, 0x30, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1E, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,/*"5",5*/
	/* (16 X 32 , Stencil Std )*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x00, 0x40, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00,
	0x00, 0xE0, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x80, 0x8E, 0x9F, 0x9F, 0x9F, 0x07, 0x00, 0x00,
	0x00, 0x03, 0x1F, 0x7F, 0x7F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1E,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,/*"6",6*/
	/* (16 X 32 , Stencil Std )*/

	0x00, 0x00, 0x00, 0xC0, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00,
	0x00, 0x00, 0x0C, 0x07, 0x03, 0x03, 0x03, 0x03, 0x87, 0xC7, 0xE7, 0x37, 0x0F, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,/*"7",7*/
	/* (16 X 32 , Stencil Std )*/

	0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0x40, 0x00, 0x40, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00,
	0x00, 0x0C, 0x1F, 0x3F, 0x7F, 0xFF, 0xFF, 0xC0, 0x00, 0xC0, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0x06,
	0x00, 0x3C, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x7E, 0x3C,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,/*"8",8*/
	/* (16 X 32 , Stencil Std )*/

	0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0x40, 0x00, 0x40, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x7C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xC0,
	0x00, 0x00, 0x70, 0xF9, 0xF9, 0xF9, 0x31, 0x01, 0x00, 0x80, 0xFF, 0xFF, 0x7F, 0x7F, 0x1F, 0x03,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,/*"9",9*/
	/* (16 X 32 , Stencil Std )*/
	
#elif (2 == _P16x32_MODE)		// 标准
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xF0, 0xFC, 0xFF, 0x07, 0x01, 0x00, 0x00, 0x00, 0x01, 0x07, 0xFF, 0xFC, 0xF0, 0x00, 0x00,
	0x00, 0x1F, 0x7F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x7F, 0x1F, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x02, 0x02, 0x02, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,/*"0",0*/
	/* (16 X 32 , MS Serif )*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x04, 0x06, 0x02, 0x03, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x03, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00,/*"1",1*/
	/* (16 X 32 , MS Serif )*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0C, 0x07, 0x03, 0x01, 0x01, 0x01, 0x03, 0x87, 0xFF, 0xFF, 0x3C, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x30, 0x0C, 0x06, 0x03, 0x01, 0x00, 0x80, 0xC0, 0x00, 0x00,
	0x00, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00,/*"2",2*/
	/* (16 X 32 , MS Serif )*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0C, 0x07, 0x03, 0x01, 0x01, 0x81, 0x83, 0xC7, 0xFF, 0x3F, 0x0C, 0x00, 0x00, 0x00,
	0x00, 0x80, 0x80, 0x80, 0x00, 0x01, 0x01, 0x01, 0x01, 0x03, 0x87, 0xFF, 0x7F, 0x3C, 0x00, 0x00,
	0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x02, 0x02, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,/*"3",3*/
	/* (16 X 32 , MS Serif )*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x30, 0x0C, 0x06, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x38, 0x3C, 0x33, 0x31, 0x30, 0x30, 0x30, 0x30, 0xFF, 0xFF, 0xFF, 0x30, 0x30, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00,/*"4",4*/
	/* (16 X 32 , MS Serif )*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xC0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xC0, 0xF8, 0xEF, 0xE1, 0xE1, 0xE1, 0xC1, 0xC1, 0x81, 0x81, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x8F, 0xFF, 0x3E, 0x00, 0x00, 0x00,
	0x00, 0x01, 0x03, 0x03, 0x03, 0x02, 0x02, 0x02, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,/*"5",5*/
	/* (16 X 32 , MS Serif )*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xC0, 0xF0, 0xF8, 0x9C, 0x46, 0x43, 0x41, 0xC1, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x3F, 0xFF, 0xFF, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0xFF, 0xFF, 0x3E, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x02, 0x02, 0x02, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,/*"6",6*/
	/* (16 X 32 , MS Serif )*/

	0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x06, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0xC1, 0xF9, 0x3F, 0x07, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xF0, 0x7E, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,/*"7",7*/
	/* (16 X 32 , MS Serif )*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x1C, 0x3E, 0x7F, 0xF3, 0xE1, 0xC0, 0x80, 0xC1, 0x63, 0x3F, 0x1E, 0x00, 0x00, 0x00,
	0x00, 0x78, 0xFC, 0xFE, 0x86, 0x03, 0x01, 0x01, 0x03, 0x07, 0x8F, 0xFE, 0xFC, 0x78, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x02, 0x02, 0x02, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,/*"8",8*/
	/* (16 X 32 , MS Serif )*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xF8, 0xFE, 0xFF, 0x03, 0x01, 0x00, 0x00, 0x00, 0x01, 0x03, 0xFF, 0xFE, 0xF8, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x03, 0x07, 0x06, 0x04, 0x84, 0xC4, 0x72, 0x3F, 0x1F, 0x07, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x02, 0x02, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,/*"9",9*/
	/* (16 X 32 , MS Serif )*/

#elif (3 == _P16x32_MODE)		// 斜体
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0xE0, 0xF0, 0x38, 0x1C, 0x04, 0x02, 0x02, 0x02, 0x06, 0xFE, 0xFC, 0xF8, 0x00,
	0x00, 0x3E, 0x7F, 0xFF, 0xC1, 0x80, 0x80, 0x80, 0x40, 0x70, 0x38, 0x1F, 0x0F, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,/*"0",0*/
	/* (16 X 32 , Mathematica5 )*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0xC4, 0xFC, 0x7C, 0x0E, 0x02, 0x00, 0x00, 0x00,
	0x40, 0x40, 0x40, 0x40, 0x40, 0x60, 0x78, 0x7F, 0x6F, 0x43, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,/*"1",1*/
	/* (16 X 32 , Mathematica5 )*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x08, 0x04, 0x04, 0x02, 0x02, 0x82, 0x82, 0xE6, 0xFE, 0x7C, 0x38, 0x00,
	0x40, 0x60, 0x70, 0x70, 0x78, 0x5C, 0x8C, 0x86, 0x87, 0x83, 0x81, 0x81, 0x50, 0x20, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,/*"2",2*/
	/* (16 X 32 , Mathematica5 )*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x88, 0x88, 0x84, 0x84, 0xC4, 0xC4, 0x7C, 0x3C, 0x18, 0x00,
	0x40, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x40, 0x60, 0x21, 0x3F, 0x1F, 0x0F, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,/*"3",3*/
	/* (16 X 32 , Mathematica5 )*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x20, 0x30, 0x90, 0xE8, 0xFC, 0x3C, 0x0E, 0x02, 0x00,
	0x0C, 0x06, 0x06, 0x05, 0x05, 0x04, 0xC4, 0xF4, 0x7E, 0x5F, 0x07, 0x04, 0x0C, 0x04, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,/*"4",4*/
	/* (16 X 32 , Mathematica5 )*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x40, 0x70, 0x5C, 0x4E, 0x44, 0xC4, 0xC4, 0x84, 0x04, 0x04, 0x02, 0x02,
	0x40, 0xE0, 0xE0, 0xC0, 0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x30, 0x1F, 0x0F, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,/*"5",5*/
	/* (16 X 32 , Mathematica5 )*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0xC0, 0xE0, 0xE0, 0xB0, 0x58, 0x48, 0x44, 0x44, 0x84, 0x82, 0x02, 0x02, 0x06,
	0x00, 0x1E, 0x7F, 0x7F, 0xC3, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x30, 0x3F, 0x0F, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,/*"6",6*/
	/* (16 X 32 , Mathematica5 )*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x08, 0x0C, 0x0C, 0x0C, 0x0C, 0x04, 0x84, 0x84, 0x44, 0x24, 0x34, 0x1C, 0x0C,
	0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF8, 0x8C, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,/*"7",7*/
	/* (16 X 32 , Mathematica5 )*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x70, 0x78, 0xC4, 0xC4, 0x82, 0x82, 0x42, 0x62, 0x3E, 0x3E, 0x1C, 0x00,
	0x78, 0x7C, 0xFC, 0xC6, 0x82, 0x81, 0x80, 0x80, 0x41, 0x63, 0x3F, 0x3E, 0x1C, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,/*"8",8*/
	/* (16 X 32 , Mathematica5 )*/

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xE0, 0xF0, 0x18, 0x04, 0x04, 0x02, 0x02, 0x02, 0x02, 0x06, 0xFE, 0xFC, 0xF8,
	0xC0, 0xE0, 0xC0, 0x80, 0x81, 0x83, 0x82, 0x42, 0x42, 0x22, 0x22, 0x1A, 0x0F, 0x07, 0x03, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,/*"9",9*/
	/* (16 X 32 , Mathematica5 )*/

#endif


	0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,/*":",10*/
};

code unsigned char P78x24[] =    // 显示72x8进度条外框
{
	0x00,0x80,0xC0,0xE0,0xE0,0xF0,0x70,0x70,0x70,0x70,0x70,0x70,0x70,
	0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,
	0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,
	0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,
	0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,
	0x70,0x70,0x70,0x70,0x70,0x70,0x70,0xF0,0xE0,0xE0,0xC0,0x80,0x00,
	0x7E,0xFF,0xFF,0xC3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC3,0xFF,0xFF,0x7E,
	0x00,0x01,0x03,0x07,0x07,0x0F,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,
	0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,
	0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,
	0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,
	0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,
	0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0F,0x07,0x07,0x03,0x01,0x00,
};


#endif /* __FONT_ARRAY_H */


/*---------------------------- END OF FILE ----------------------------*/


