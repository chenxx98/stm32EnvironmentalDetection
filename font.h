#define USE_ONCHIP_FLASH_FONT 1
const unsigned char asc16[]={
#if USE_ONCHIP_FLASH_FONT
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, //" "
0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x10,0x10,0x00,0x00, //"!"
0x00,0x00,0x6C,0x6C,0x24,0x24,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00, //"""
0x00,0x24,0x24,0x24,0x24,0xFE,0x48,0x48,0x48,0x48,0xFC,0x90,0x90,0x90,0x90,0x00, //"#"
0x00,0x10,0x3C,0x54,0x92,0x90,0x50,0x38,0x14,0x12,0x12,0x92,0x54,0x78,0x10,0x00, //"$"
0x00,0x00,0x22,0x5C,0x94,0xA8,0x48,0x10,0x10,0x24,0x2A,0x52,0x54,0x88,0x00,0x00, //"%"
0x00,0x00,0x30,0x48,0x48,0x50,0x20,0x6E,0x54,0x94,0x8C,0x88,0x8A,0x74,0x00,0x00, //"&"
0x00,0x00,0x30,0x30,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, //"'"
0x00,0x04,0x08,0x10,0x10,0x20,0x20,0x20,0x20,0x20,0x20,0x10,0x10,0x08,0x04,0x00, //"("
0x00,0x80,0x40,0x20,0x20,0x10,0x10,0x10,0x10,0x10,0x10,0x20,0x20,0x40,0x80,0x00, //")"
0x00,0x00,0x00,0x00,0x10,0x54,0x38,0x10,0x38,0x54,0x10,0x00,0x00,0x00,0x00,0x00, //"*"
0x00,0x00,0x00,0x10,0x10,0x10,0x10,0xFE,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00, //"+"
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x20,0x00, //","
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, //"-"
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x00,0x00, //"."
0x00,0x00,0x04,0x04,0x08,0x08,0x10,0x10,0x20,0x20,0x40,0x40,0x80,0x80,0x00,0x00, //"/"
0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x44,0x38,0x00,0x00, //"0"
0x00,0x00,0x10,0x70,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00, //"1"
0x00,0x00,0x38,0x44,0x82,0x82,0x04,0x08,0x10,0x20,0x40,0x82,0x84,0xFC,0x00,0x00, //"2"
0x00,0x00,0x38,0x44,0x82,0x02,0x04,0x38,0x04,0x02,0x02,0x82,0x44,0x38,0x00,0x00, //"3"
0x00,0x00,0x04,0x0C,0x14,0x14,0x24,0x24,0x44,0x44,0xFE,0x04,0x04,0x0E,0x00,0x00, //"4"
0x00,0x00,0xFC,0x80,0x80,0x80,0xB8,0xC4,0x82,0x02,0x02,0x82,0x84,0x78,0x00,0x00, //"5"
0x00,0x00,0x3C,0x42,0x82,0x80,0xB8,0xC4,0x82,0x82,0x82,0x82,0x44,0x38,0x00,0x00, //"6"
0x00,0x00,0x7E,0x42,0x82,0x04,0x04,0x08,0x08,0x08,0x10,0x10,0x10,0x10,0x00,0x00, //"7"
0x00,0x00,0x38,0x44,0x82,0x82,0x44,0x38,0x44,0x82,0x82,0x82,0x44,0x38,0x00,0x00, //"8"
0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x46,0x3A,0x02,0x82,0x44,0x38,0x00,0x00, //"9"
0x00,0x00,0x00,0x00,0x10,0x10,0x00,0x00,0x00,0x00,0x10,0x10,0x00,0x00,0x00,0x00, //":"
0x00,0x00,0x00,0x00,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x20,0x00,0x00, //";"
0x00,0x00,0x00,0x00,0x06,0x18,0x60,0x80,0x60,0x18,0x06,0x00,0x00,0x00,0x00,0x00, //"<"
0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,0x00, //"="
0x00,0x00,0x00,0x00,0xC0,0x30,0x0C,0x02,0x0C,0x30,0xC0,0x00,0x00,0x00,0x00,0x00, //">"
0x00,0x38,0x44,0x82,0x82,0x02,0x04,0x08,0x10,0x10,0x10,0x00,0x10,0x10,0x00,0x00, //"?"
0x00,0x00,0x38,0x44,0x82,0x9A,0xAA,0xAA,0xAA,0xAA,0xAA,0x96,0x80,0x42,0x3C,0x00, //"@"
0x00,0x00,0x10,0x10,0x10,0x28,0x28,0x28,0x44,0x44,0x7C,0x44,0x44,0xEE,0x00,0x00, //"A"
0x00,0x00,0xFC,0x42,0x42,0x42,0x42,0x7C,0x42,0x42,0x42,0x42,0x42,0xFC,0x00,0x00, //"B"
0x00,0x00,0x3C,0x44,0x82,0x80,0x80,0x80,0x80,0x80,0x82,0x82,0x44,0x38,0x00,0x00, //"C"
0x00,0x00,0xF8,0x44,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x44,0xF8,0x00,0x00, //"D"
0x00,0x00,0xFC,0x44,0x42,0x40,0x44,0x7C,0x44,0x40,0x40,0x42,0x44,0xFC,0x00,0x00, //"E"
0x00,0x00,0xFC,0x44,0x42,0x40,0x44,0x7C,0x44,0x40,0x40,0x40,0x40,0xF0,0x00,0x00, //"F"
0x00,0x00,0x34,0x4C,0x82,0x80,0x80,0x80,0x8E,0x84,0x84,0x84,0x4C,0x34,0x00,0x00, //"G"
0x00,0x00,0xEE,0x44,0x44,0x44,0x44,0x7C,0x44,0x44,0x44,0x44,0x44,0xEE,0x00,0x00, //"H"
0x00,0x00,0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00, //"I"
0x00,0x00,0x3E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x88,0x88,0x70,0x00,0x00, //"J"
0x00,0x00,0xEE,0x44,0x48,0x48,0x50,0x60,0x50,0x48,0x48,0x44,0x44,0xEE,0x00,0x00, //"K"
0x00,0x00,0xE0,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x42,0x44,0xFC,0x00,0x00, //"L"
0x00,0x00,0xC6,0x44,0x6C,0x6C,0x6C,0x54,0x54,0x54,0x44,0x44,0x44,0xEE,0x00,0x00, //"M"
0x00,0x00,0xCE,0x44,0x64,0x64,0x64,0x54,0x54,0x4C,0x4C,0x4C,0x44,0xE4,0x00,0x00, //"N"
0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x44,0x38,0x00,0x00, //"O"
0x00,0x00,0xF8,0x44,0x42,0x42,0x42,0x44,0x78,0x40,0x40,0x40,0x40,0xE0,0x00,0x00, //"P"
0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0xBA,0x44,0x3C,0x02,0x00, //"Q"
0x00,0x00,0xF0,0x48,0x44,0x44,0x44,0x48,0x70,0x48,0x44,0x44,0x44,0xE6,0x00,0x00, //"R"
0x00,0x00,0x3C,0x44,0x82,0x80,0x40,0x30,0x0C,0x02,0x02,0x82,0x44,0x78,0x00,0x00, //"S"
0x00,0x00,0x7C,0x54,0x92,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x38,0x00,0x00, //"T"
0x00,0x00,0xEE,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x38,0x00,0x00, //"U"
0x00,0x00,0xEE,0x44,0x44,0x44,0x44,0x28,0x28,0x28,0x28,0x10,0x10,0x10,0x00,0x00, //"V"
0x00,0x00,0xEE,0x44,0x54,0x54,0x54,0x54,0x54,0x54,0x28,0x28,0x28,0x28,0x00,0x00, //"W"
0x00,0x00,0xEE,0x44,0x44,0x28,0x28,0x10,0x10,0x28,0x28,0x44,0x44,0xEE,0x00,0x00, //"X"
0x00,0x00,0xEE,0x44,0x44,0x28,0x28,0x28,0x10,0x10,0x10,0x10,0x10,0x38,0x00,0x00, //"Y"
0x00,0x00,0x7E,0x44,0x84,0x08,0x08,0x10,0x20,0x20,0x40,0x82,0x84,0xFC,0x00,0x00, //"Z"
0x00,0x1C,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1C,0x00, //"["
0x00,0x00,0xEE,0x44,0x54,0x54,0xFE,0x54,0x54,0x54,0x28,0x28,0x28,0x28,0x00,0x00, //"\"
0x00,0x70,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x70,0x00, //"]"
0x00,0x30,0x48,0x84,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, //"^"
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00, //"_"
0x00,0x40,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, //"`"
0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x84,0x04,0x7C,0x84,0x84,0x8C,0x76,0x00,0x00, //"a"
0x00,0x00,0xC0,0x40,0x40,0x40,0x58,0x64,0x42,0x42,0x42,0x42,0x64,0x58,0x00,0x00, //"b"
0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x44,0x80,0x80,0x80,0x80,0x44,0x38,0x00,0x00, //"c"
0x00,0x00,0x0C,0x04,0x04,0x04,0x34,0x4C,0x84,0x84,0x84,0x84,0x4C,0x36,0x00,0x00, //"d"
0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x84,0x84,0xFC,0x80,0x80,0x84,0x78,0x00,0x00, //"e"
0x00,0x00,0x18,0x24,0x20,0x20,0xF8,0x20,0x20,0x20,0x20,0x20,0x20,0x70,0x00,0x00, //"f"
0x00,0x00,0x00,0x00,0x00,0x00,0x3A,0x44,0x44,0x78,0x80,0x7C,0x82,0x82,0x7C,0x00, //"g"
0x00,0x00,0xC0,0x40,0x40,0x40,0x58,0x64,0x44,0x44,0x44,0x44,0x44,0xEE,0x00,0x00, //"h"
0x00,0x00,0x10,0x10,0x00,0x00,0x30,0x10,0x10,0x10,0x10,0x10,0x10,0x38,0x00,0x00, //"i"
0x00,0x00,0x10,0x10,0x00,0x00,0x30,0x10,0x10,0x10,0x10,0x10,0x10,0x90,0x60,0x00, //"j"
0x00,0x00,0xC0,0x40,0x40,0x40,0x5C,0x48,0x50,0x60,0x50,0x48,0x44,0xEE,0x00,0x00, //"k"
0x00,0x00,0x30,0x10,0x10,0x10,0x10,0x11,0x10,0x10,0x10,0x10,0x10,0x39,0x00,0x00, //"l"
0x00,0x00,0x00,0x00,0x00,0x00,0xAC,0xD2,0x92,0x92,0x92,0x92,0x92,0xD6,0x00,0x00, //"m"
0x00,0x00,0x00,0x00,0x00,0x00,0x58,0xE4,0x44,0x44,0x44,0x44,0x44,0xEE,0x00,0x00, //"n"
0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x44,0x38,0x00,0x00, //"o"
0x00,0x00,0x00,0x00,0x00,0x00,0xD8,0x64,0x42,0x42,0x42,0x64,0x58,0x40,0xE0,0x00, //"p"
0x00,0x00,0x00,0x00,0x00,0x00,0x36,0x4C,0x84,0x84,0x84,0x4C,0x34,0x04,0x0E,0x00, //"q"
0x00,0x00,0x00,0x00,0x00,0x00,0x6C,0x30,0x20,0x20,0x20,0x20,0x20,0x70,0x00,0x00, //"r"
0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x88,0x84,0x60,0x18,0x84,0x44,0x78,0x00,0x00, //"s"
0x00,0x00,0x00,0x20,0x20,0x20,0xF8,0x20,0x20,0x20,0x20,0x20,0x24,0x18,0x00,0x00, //"t"
0x00,0x00,0x00,0x00,0x00,0x00,0xC6,0x42,0x42,0x42,0x42,0x42,0x46,0x3A,0x00,0x00, //"u"
0x00,0x00,0x00,0x00,0x00,0x00,0xEE,0x44,0x44,0x28,0x28,0x28,0x10,0x10,0x00,0x00, //"v"
0x00,0x00,0x00,0x00,0x00,0x00,0xEE,0x44,0x44,0x54,0x54,0x28,0x28,0x28,0x00,0x00, //"w"
0x00,0x00,0x00,0x00,0x00,0x00,0xEE,0x44,0x28,0x10,0x10,0x28,0x44,0xEE,0x00,0x00, //"x"
0x00,0x00,0x00,0x00,0x00,0x00,0xEE,0x44,0x44,0x28,0x28,0x10,0x10,0xA0,0xC0,0x00, //"y"
0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x44,0x88,0x10,0x20,0x42,0x84,0xFC,0x00,0x00, //"z"
0x00,0x0C,0x10,0x10,0x10,0x10,0x10,0x60,0x10,0x10,0x10,0x10,0x10,0x10,0x0C,0x00, //"{"
0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00, //"|"
0x00,0xC0,0x20,0x20,0x20,0x20,0x20,0x18,0x20,0x20,0x20,0x20,0x20,0x20,0xC0,0x00, //"}"
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x72,0x8C,0x00,0x00,0x00,0x00,0x00,0x00,0x00, //"~"
#endif
0x00,
};

//数码管字体  %  ℃
const unsigned char sz32[]={
#if USE_ONCHIP_FLASH_FONT
//"0",
0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x1F,0xE0,0x00,0x01,0x80,0x06,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x01,0x80,0x06,0x00,0x00,0x1F,0xE0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x1F,0xE0,0x00,
//"1",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x01,0x80,0x00,0x00,0x03,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x03,0x80,0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,
//"2",
0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x00,0x00,0x3F,0xF0,0x00,0x00,0xFF,0xF0,0x00,0x01,0xFF,0xE0,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x1F,0xE3,0x00,0x00,0x7F,0xF8,0x00,0x00,0x7F,0xF8,0x00,0x00,0x1F,0xE0,0x00,0x03,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x1F,0xF0,0x00,0x00,0x3F,0xF8,0x00,0x00,0x3F,0xFC,0x00,0x00,0x1F,0xFE,0x00,
//"3",
0x00,0x00,0x00,0x00,0x03,0xFF,0x80,0x00,0x01,0xFF,0xC0,0x00,0x00,0xFF,0xC0,0x00,0x00,0x7F,0x80,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x7F,0x8C,0x00,0x01,0xFF,0xE0,0x00,0x01,0xFF,0xF0,0x00,0x00,0x7F,0x80,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x18,0x00,0x00,0x7F,0x80,0x00,0x00,0xFF,0xC0,0x00,0x01,0xFF,0xC0,0x00,0x03,0xFF,0x80,0x00,
//"4",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x01,0x00,0x03,0x00,0x03,0x00,0x03,0x80,0x07,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0x1F,0xE3,0x00,0x00,0x7F,0xF8,0x00,0x00,0x7F,0xFC,0x00,0x00,0x1F,0xE0,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,
//"5",
0x00,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x3F,0xF8,0x00,0x00,0x3F,0xF0,0x00,0x00,0x1F,0xE0,0x00,0x01,0x80,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0x1F,0xE0,0x00,0x00,0x7F,0xF8,0x00,0x00,0x7F,0xF8,0x00,0x00,0x1F,0xE0,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x06,0x00,0x00,0x3F,0xE0,0x00,0x00,0x7F,0xF0,0x00,0x00,0xFF,0xF0,0x00,0x01,0xFF,0xE0,0x00,
//"6",
0x00,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x3F,0xF8,0x00,0x00,0x3F,0xF0,0x00,0x00,0x1F,0xE0,0x00,0x01,0x80,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0x1F,0xE0,0x00,0x00,0x7F,0xF8,0x00,0x00,0x7F,0xFC,0x00,0x00,0x1F,0xE0,0x00,0x03,0x00,0x03,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x01,0x80,0x06,0x00,0x00,0x1F,0xE0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x1F,0xE0,0x00,
//"7",
0x00,0x00,0x00,0x00,0x07,0xFF,0xE0,0x00,0x03,0xFF,0xC0,0x00,0x01,0xFF,0x88,0x00,0x00,0xFF,0x18,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,
//"8",
0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x1F,0xE0,0x00,0x01,0x80,0x06,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0x1F,0xE3,0x00,0x00,0x7F,0xF8,0x00,0x00,0x7F,0xFC,0x00,0x00,0x1F,0xE0,0x00,0x03,0x00,0x03,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x01,0x80,0x06,0x00,0x00,0x1F,0xE0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x1F,0xE0,0x00,
//"9",
0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x1F,0xE0,0x00,0x01,0x80,0x06,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0x1F,0xE3,0x00,0x00,0x7F,0xF8,0x00,0x00,0x7F,0xFC,0x00,0x00,0x1F,0xE0,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x06,0x00,0x00,0x1F,0xE0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x7F,0xF0,0x00,0x00,0xFF,0xE0,0x00,
//".",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//":",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//"%",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xC0,0x06,0x00,0x0F,0xE0,0x06,0x00,0x00,0x00,0x0C,0x00,0x30,0x18,0x18,0x00,0x30,0x18,0x18,0x00,0x30,0x18,0x30,0x00,0x30,0x18,0x30,0x00,0x30,0x18,0x60,0x00,0x30,0x08,0xC0,0x00,0x07,0xC0,0xC0,0x00,0x0F,0xE0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xE0,0x00,0x06,0x07,0xC0,0x00,0x06,0x30,0x18,0x00,0x0C,0x30,0x18,0x00,0x0C,0x30,0x18,0x00,0x18,0x30,0x18,0x00,0x30,0x30,0x18,0x00,0x30,0x30,0x18,0x00,0x60,0x00,0x00,0x00,0xC0,0x0F,0xE0,0x00,0xC0,0x07,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//"℃",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0xE0,0x00,0x08,0x87,0xFC,0x00,0x08,0x8E,0x03,0x00,0x08,0x98,0x01,0x80,0x07,0x18,0x00,0x80,0x00,0x30,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x18,0x01,0x00,0x00,0x0C,0x03,0x00,0x00,0x07,0xFC,0x00,0x00,0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
//"-",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x7F,0xF0,0x00,0x00,0x7F,0xE0,0x00,0x00,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
#endif
0x00,
};

struct typFNT_GB162
{
       unsigned char Index[2];	
       char Msk[32];
};
//宋体5号
#define hz16_num   50

const struct typFNT_GB162 hz16[] = {
#if USE_ONCHIP_FLASH_FONT
"开",0x00,0x00,0x7F,0xFC,0x08,0x20,0x08,0x20,0x08,0x20,0x08,0x20,0x08,0x20,0xFF,0xFE,
0x08,0x20,0x08,0x20,0x08,0x20,0x08,0x20,0x10,0x20,0x10,0x20,0x20,0x20,0x40,0x20,/*0*/
"机",0x10,0x00,0x11,0xF0,0x11,0x10,0x11,0x10,0xFD,0x10,0x11,0x10,0x31,0x10,0x39,0x10,
0x55,0x10,0x55,0x10,0x91,0x10,0x11,0x12,0x11,0x12,0x12,0x12,0x12,0x0E,0x14,0x00,/*1*/
"功",0x00,0x40,0x00,0x40,0x00,0x40,0xFE,0x40,0x11,0xFC,0x10,0x44,0x10,0x44,0x10,0x44,
0x10,0x44,0x10,0x84,0x10,0x84,0x1E,0x84,0xF1,0x04,0x41,0x04,0x02,0x28,0x04,0x10,/*2*/
"系",0x00,0xF8,0x3F,0x00,0x04,0x00,0x08,0x20,0x10,0x40,0x3F,0x80,0x01,0x00,0x06,0x10,
0x18,0x08,0x7F,0xFC,0x01,0x04,0x09,0x20,0x11,0x10,0x21,0x08,0x45,0x04,0x02,0x00,/*0*/
"统",0x10,0x40,0x10,0x20,0x20,0x20,0x23,0xFE,0x48,0x40,0xF8,0x88,0x11,0x04,0x23,0xFE,
0x40,0x92,0xF8,0x90,0x40,0x90,0x00,0x90,0x19,0x12,0xE1,0x12,0x42,0x0E,0x04,0x00,/*1*/
"环",0x00,0x00,0x00,0x00,0xFD,0xFE,0x10,0x10,0x10,0x10,0x10,0x20,0x10,0x20,0x7C,0x68,
0x10,0xA4,0x11,0x22,0x12,0x22,0x10,0x20,0x1C,0x20,0xE0,0x20,0x40,0x20,0x00,0x20,/*0*/
"境",0x20,0x80,0x20,0x40,0x23,0xF8,0x21,0x10,0xF8,0xA0,0x27,0xFE,0x20,0x00,0x23,0xF8,
0x22,0x08,0x23,0xF8,0x22,0x08,0x3B,0xF8,0xE1,0x20,0x41,0x22,0x02,0x22,0x0C,0x1E,/*1*/
"监",0x04,0x40,0x24,0x40,0x24,0x7C,0x24,0x40,0x24,0x90,0x24,0x88,0x25,0x08,0x04,0x00,
0x00,0x00,0x3F,0xF8,0x24,0x48,0x24,0x48,0x24,0x48,0x24,0x48,0xFF,0xFE,0x00,0x00,/*2*/
"测",0x00,0x04,0x27,0xC4,0x14,0x44,0x14,0x54,0x85,0x54,0x45,0x54,0x45,0x54,0x15,0x54,
0x15,0x54,0x25,0x54,0xE5,0x54,0x21,0x04,0x22,0x84,0x22,0x44,0x24,0x14,0x08,0x08,/*3*/
"数",0x08,0x20,0x49,0x20,0x2A,0x20,0x08,0x3E,0xFF,0x44,0x2A,0x44,0x49,0x44,0x88,0xA4,
0x10,0x28,0xFE,0x28,0x22,0x10,0x42,0x10,0x64,0x28,0x18,0x28,0x34,0x44,0xC2,0x82,/*0*/
"据",0x20,0x00,0x23,0xFC,0x22,0x04,0x22,0x04,0xFB,0xFC,0x22,0x20,0x22,0x20,0x2B,0xFE,
0x32,0x20,0xE2,0x20,0x22,0xFC,0x22,0x84,0x22,0x84,0x24,0x84,0xA4,0xFC,0x48,0x84,/*1*/
"初",0x20,0x00,0x10,0x00,0x01,0xFC,0xFC,0x44,0x08,0x44,0x10,0x44,0x10,0x44,0x34,0x44,
0x58,0x44,0x94,0x44,0x14,0x44,0x10,0x84,0x10,0x84,0x11,0x04,0x12,0x28,0x14,0x10,//0
"始",0x10,0x20,0x10,0x20,0x10,0x20,0x10,0x40,0xFC,0x48,0x24,0x84,0x25,0xFE,0x24,0x82,
0x24,0x00,0x48,0xFC,0x28,0x84,0x10,0x84,0x28,0x84,0x44,0x84,0x80,0xFC,0x00,0x84,//1
"化",0x08,0x80,0x08,0x80,0x08,0x84,0x10,0x88,0x10,0x90,0x30,0xA0,0x30,0xC0,0x50,0x80,
0x91,0x80,0x12,0x80,0x14,0x80,0x10,0x82,0x10,0x82,0x10,0x82,0x10,0x7E,0x10,0x00,//2	
"℃",0xC0,0x00,0x23,0xE8,0x2C,0x18,0xD8,0x08,0x10,0x08,0x30,0x00,0x30,0x00,0x30,0x00,
0x30,0x00,0x30,0x00,0x30,0x00,0x10,0x00,0x18,0x08,0x0C,0x10,0x03,0xE0,0x00,0x00,/*0*/
"烟",0x10,0x00,0x13,0xFE,0x12,0x02,0x16,0x22,0x5A,0x22,0x52,0x22,0x53,0xFE,0x92,0x22,
0x12,0x22,0x12,0x52,0x12,0x4A,0x2A,0x8A,0x27,0x02,0x42,0x02,0x43,0xFE,0x82,0x02,/*,0*/
"雾",0x3F,0xF8,0x01,0x00,0x7F,0xFE,0x41,0x02,0x9D,0x74,0x01,0x00,0x1D,0x70,0x04,0x00,
0x0F,0xE0,0x14,0x40,0x03,0x80,0x1C,0x70,0xE2,0x0E,0x0F,0xE0,0x04,0x20,0x18,0x60,/*,1*/
"光",0x01,0x00,0x21,0x08,0x11,0x08,0x09,0x10,0x09,0x20,0x01,0x00,0xFF,0xFE,0x04,0x40,
0x04,0x40,0x04,0x40,0x04,0x40,0x08,0x42,0x08,0x42,0x10,0x42,0x20,0x3E,0xC0,0x00,//0
"照",0x00,0x00,0x7D,0xFC,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x94,0x7D,0x08,0x44,0xFC,
0x44,0x84,0x44,0x84,0x44,0x84,0x7C,0xFC,0x00,0x00,0x48,0x88,0x44,0x44,0x84,0x44,//1
"正",0x00,0x00,0x7F,0xFC,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x11,0x00,0x11,0xF8,
0x11,0x00,0x11,0x00,0x11,0x00,0x11,0x00,0x11,0x00,0x11,0x00,0xFF,0xFE,0x00,0x00,//0
"在",0x02,0x00,0x02,0x00,0x04,0x00,0xFF,0xFE,0x08,0x00,0x08,0x40,0x10,0x40,0x30,0x40,
0x57,0xFC,0x90,0x40,0x10,0x40,0x10,0x40,0x10,0x40,0x10,0x40,0x1F,0xFE,0x10,0x00,//1
"学",0x22,0x08,0x11,0x08,0x11,0x10,0x00,0x20,0x7F,0xFE,0x40,0x02,0x80,0x04,0x1F,0xE0,
0x00,0x40,0x01,0x80,0xFF,0xFE,0x01,0x00,0x01,0x00,0x01,0x00,0x05,0x00,0x02,0x00,//2
"习",0x00,0x00,0x7F,0xF8,0x00,0x08,0x00,0x08,0x08,0x08,0x04,0x08,0x02,0x08,0x02,0x08,
0x00,0x68,0x01,0x88,0x0E,0x08,0x70,0x08,0x20,0x08,0x00,0x08,0x00,0x50,0x00,0x20,//3
"湿",0x00,0x00,0x27,0xF8,0x14,0x08,0x14,0x08,0x87,0xF8,0x44,0x08,0x44,0x08,0x17,0xF8,
0x11,0x20,0x21,0x20,0xE9,0x24,0x25,0x28,0x23,0x30,0x21,0x20,0x2F,0xFE,0x00,0x00,//1
"度",0x01,0x00,0x00,0x80,0x3F,0xFE,0x22,0x20,0x22,0x20,0x3F,0xFC,0x22,0x20,0x22,0x20,
0x23,0xE0,0x20,0x00,0x2F,0xF0,0x24,0x10,0x42,0x20,0x41,0xC0,0x86,0x30,0x38,0x0E,//2
"温",0x00,0x00,0x23,0xF8,0x12,0x08,0x12,0x08,0x83,0xF8,0x42,0x08,0x42,0x08,0x13,0xF8,
0x10,0x00,0x27,0xFC,0xE4,0xA4,0x24,0xA4,0x24,0xA4,0x24,0xA4,0x2F,0xFE,0x00,0x00,//2
"一",0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFE,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//0
"氧",0x20,0x00,0x3F,0xFC,0x40,0x00,0x9F,0xF0,0x00,0x00,0x7F,0xF0,0x11,0x10,0x0A,0x10,
0x7F,0xD0,0x04,0x10,0x3F,0x90,0x04,0x12,0xFF,0xEA,0x04,0x0A,0x04,0x06,0x04,0x02,//1
"化",0x08,0x80,0x08,0x80,0x08,0x84,0x10,0x88,0x10,0x90,0x30,0xA0,0x30,0xC0,0x50,0x80,
0x91,0x80,0x12,0x80,0x14,0x80,0x10,0x82,0x10,0x82,0x10,0x82,0x10,0x7E,0x10,0x00,//2
"碳",0x00,0x20,0x01,0x24,0xF9,0x24,0x21,0x24,0x21,0xFC,0x40,0x80,0x78,0x80,0x4B,0xFE,
0xC8,0x90,0x49,0x10,0x49,0x52,0x4A,0x54,0x7A,0xA8,0x4C,0x28,0x08,0x44,0x00,0x82,//3
"：",0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x30,0x00,0x30,0x00,0x00,0x00,0x30,0x00,0x30,0x00,0x00,0x00,0x00,0x00,//0
"正",0x00,0x00,0x7F,0xFC,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x11,0x00,0x11,0xF8,
0x11,0x00,0x11,0x00,0x11,0x00,0x11,0x00,0x11,0x00,0x11,0x00,0xFF,0xFE,0x00,0x00,//0
"在",0x02,0x00,0x02,0x00,0x04,0x00,0xFF,0xFE,0x08,0x00,0x08,0x40,0x10,0x40,0x30,0x40,
0x57,0xFC,0x90,0x40,0x10,0x40,0x10,0x40,0x10,0x40,0x10,0x40,0x1F,0xFE,0x10,0x00,//1
"设",0x00,0x00,0x21,0xF0,0x11,0x10,0x11,0x10,0x01,0x10,0x02,0x0E,0xF4,0x00,0x13,0xF8,
0x11,0x08,0x11,0x10,0x10,0x90,0x14,0xA0,0x18,0x40,0x10,0xA0,0x03,0x18,0x0C,0x06,//0
"备",0x04,0x00,0x04,0x00,0x0F,0xF0,0x18,0x20,0x64,0x40,0x03,0x80,0x1C,0x70,0xE0,0x0E,
0x1F,0xF0,0x11,0x10,0x11,0x10,0x1F,0xF0,0x11,0x10,0x11,0x10,0x1F,0xF0,0x10,0x10,//1
"完",0x02,0x00,0x01,0x00,0x7F,0xFE,0x40,0x02,0x80,0x04,0x1F,0xF0,0x00,0x00,0x00,0x00,
0x7F,0xFC,0x04,0x40,0x04,0x40,0x04,0x40,0x08,0x44,0x08,0x44,0x10,0x44,0x60,0x3C,//2
"成",0x00,0x50,0x00,0x48,0x00,0x40,0x3F,0xFE,0x20,0x40,0x20,0x40,0x20,0x44,0x3E,0x44,
0x22,0x44,0x22,0x28,0x22,0x28,0x22,0x12,0x2A,0x32,0x44,0x4A,0x40,0x86,0x81,0x02,//3
"连",0x00,0x40,0x20,0x40,0x17,0xFE,0x10,0x80,0x00,0xA0,0x01,0x20,0xF3,0xFC,0x10,0x20,
0x10,0x20,0x10,0x20,0x17,0xFE,0x10,0x20,0x10,0x20,0x28,0x20,0x47,0xFE,0x00,0x00,//4
"接",0x10,0x80,0x10,0x40,0x13,0xFC,0x10,0x00,0xFD,0x08,0x10,0x90,0x17,0xFE,0x10,0x40,
0x18,0x40,0x37,0xFE,0xD0,0x88,0x11,0x08,0x10,0x90,0x10,0x60,0x51,0x98,0x26,0x04,//5
"网",0x00,0x00,0x7F,0xFC,0x40,0x04,0x40,0x04,0x42,0x14,0x52,0x94,0x4A,0x54,0x44,0x24,
0x44,0x24,0x4A,0x54,0x4A,0x54,0x52,0x94,0x61,0x04,0x40,0x04,0x40,0x14,0x40,0x08,//6
"络",0x10,0x80,0x10,0x80,0x20,0xF8,0x21,0x08,0x4B,0x10,0xFC,0xA0,0x10,0x40,0x20,0xA0,
0x41,0x18,0xFA,0x06,0x45,0xF8,0x01,0x08,0x19,0x08,0xE1,0x08,0x41,0xF8,0x01,0x08,//7
"。",0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x18,0x00,0x24,0x00,0x24,0x00,0x18,0x00,0x00,0x00,0x00,0x00,//8
"进",0x00,0x90,0x20,0x90,0x10,0x90,0x13,0xFC,0x00,0x90,0x00,0x90,0xF0,0x90,0x17,0xFE,
0x10,0x90,0x10,0x90,0x11,0x10,0x11,0x10,0x12,0x10,0x28,0x00,0x47,0xFE,0x00,0x00,/*0*/
"行",0x08,0x00,0x09,0xFC,0x10,0x00,0x20,0x00,0x48,0x00,0x08,0x00,0x13,0xFE,0x30,0x20,
0x50,0x20,0x90,0x20,0x10,0x20,0x10,0x20,0x10,0x20,0x10,0x20,0x10,0xA0,0x10,0x40,/*1*/

#endif
0x00,
};

struct typFNT_GB242
{
       unsigned char Index[2];	
       char Msk[72];
};

#define hz24_num   25
const struct typFNT_GB242 hz24[] = 
{
#if USE_ONCHIP_FLASH_FONT
//"温",0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x0C,0x7F,0xF0,0x04,0x40,0x20,0x04,
//0x40,0x20,0x01,0x40,0x20,0x02,0x7F,0xE0,0x62,0x40,0x20,0x32,0x40,0x20,0x12,0x40,
//0x20,0x04,0x7F,0xE0,0x04,0x00,0x00,0x05,0x00,0x10,0x04,0xFF,0xF8,0x08,0x89,0x10,
//0x78,0x89,0x10,0x18,0x89,0x10,0x18,0x89,0x10,0x18,0x89,0x10,0x18,0x89,0x10,0x18,
//0x89,0x16,0x07,0x76,0xE8,0x00,0x00,0x00,/*0*/
//"湿",0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x10,0x08,0x7F,0xF8,0x0C,0x60,0x10,0x04,
//0x60,0x10,0x01,0x60,0x10,0x42,0x7F,0xF0,0x32,0x60,0x10,0x1A,0x60,0x10,0x12,0x7F,
//0xF0,0x04,0x69,0x00,0x04,0x08,0x80,0x05,0x08,0x8C,0x08,0x88,0x8C,0x18,0xC8,0x98,
//0x38,0x48,0x90,0x18,0x68,0xA0,0x10,0x48,0xC0,0x10,0x08,0x80,0x30,0x08,0x80,0x10,
//0x08,0x8C,0x03,0xF7,0x70,0x00,0x00,0x00,/*1*/
//"度",0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x08,0x00,0x00,0x0C,0x08,0x0F,0xFF,0xFC,0x08,
//0x40,0x00,0x08,0x30,0xC0,0x08,0x20,0x88,0x08,0x20,0x9C,0x0F,0xFF,0xE0,0x08,0x20,
//0x80,0x08,0x20,0x80,0x08,0x3F,0x80,0x08,0x00,0x00,0x19,0xFF,0xE0,0x18,0x20,0xC0,
//0x10,0x20,0x80,0x10,0x11,0x80,0x10,0x0B,0x00,0x20,0x06,0x00,0x20,0x1B,0x80,0x40,
//0x60,0xFE,0x47,0x80,0x18,0x00,0x00,0x00,/*2*/
	
#endif
0x00,
};
