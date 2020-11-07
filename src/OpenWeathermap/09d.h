
//
//  This file is AUTOMATICALLY GENERATED, and should not be edited unless you are certain
//  that it will not be re-generated anytime in the future.  As generated code, the
//  copyright owner(s) of the generating program do NOT claim any copyright on the code
//  generated.
//
//  Run Length Encoded (RLE) bitmaps.  Each run is encoded as either one or two bytes,
//  with NO PADDING.  Thus, the data for each line of the bitmap is VARIABLE LENGTH, and
//  there is no way of determining where any line other than the first starts without
//  walking though the data.  
//
//  Note that one byte encoding ONLY occurs if the total number of colors is 16 or less,
//  and in that case the 'flags' member of the 'RLEBitmapInfo' will have the first bit
//  (0x01) set.
//
//  In that case, if the high 4 bits of the first byte are ZERO, then this is a 2 byte
//  run.  The first byte is the index of the color in the color palette, and the second
//  byte is the length.
//
//  Else, the lower 4 bits are the color index, and the upper 4 bits are the run length.
//
//  If the 'flags' member first bit is zero, then ALL runs are 2 byte runs.  The first
//  byte is the palette index, and the second is the run length.
//
//  In order to save PROGMEM for other uses, the bitmap data is placed in a section that
//  occurs near the END of the used FLASH.  So, this data should only be accessed using
//  the 'far' versions of the progmem functions - the usual versions are limited to the
//  first 64K of FLASH.
//
//  Data is from file 'Processed\09d.bmp'.
//

const byte 09d_RLEBM_data[] PROGMEM_LATE = 
{
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x33, 0x11, 0x12, 0x33, 0x12, 0x11, 0x00, 0x2a, 
	0x00, 0x32, 0x12, 0x83, 0x11, 0x00, 0x28, 
	0x00, 0x31, 0xb3, 0x11, 0x00, 0x27, 
	0x00, 0x30, 0xd3, 0x11, 0x00, 0x26, 
	0x00, 0x29, 0x21, 0x40, 0x11, 0xe3, 0x00, 0x26, 
	0x00, 0x26, 0x13, 0x14, 0x15, 0x26, 0x15, 0x17, 0x13, 0x21, 0xe3, 0x12, 0x00, 0x25, 
	0x00, 0x24, 0x18, 0x15, 0x96, 0x19, 0x11, 0x1a, 0xc3, 0x12, 0x30, 0x11, 0x00, 0x21, 
	0x00, 0x23, 0x17, 0xc6, 0x17, 0x12, 0x1a, 0xb3, 0x1a, 0x11, 0x12, 0x33, 0x12, 0x00, 0x1f, 
	0x00, 0x22, 0x17, 0xe6, 0x17, 0x11, 0x03, 0x13, 0x00, 0x1e, 
	0x00, 0x21, 0x13, 0x06, 0x10, 0x19, 0x12, 0x03, 0x12, 0x12, 0x00, 0x1d, 
	0x00, 0x21, 0x06, 0x12, 0x12, 0x03, 0x13, 0x00, 0x1d, 
	0x00, 0x20, 0x18, 0x06, 0x12, 0x19, 0x12, 0x13, 0x32, 0xe3, 0x11, 0x00, 0x1c, 
	0x00, 0x20, 0x17, 0x06, 0x12, 0x14, 0x21, 0x13, 0x28, 0x12, 0x11, 0x12, 0xb3, 0x00, 0x1d, 
	0x00, 0x20, 0x14, 0x06, 0x12, 0x15, 0x13, 0x14, 0x36, 0x15, 0x17, 0x13, 0x12, 0xa3, 0x12, 0x21, 0x00, 0x1a, 
	0x00, 0x20, 0x15, 0x06, 0x1a, 0x15, 0x22, 0xd3, 0x11, 0x00, 0x18, 
	0x00, 0x20, 0x15, 0x06, 0x1b, 0x15, 0x12, 0xe3, 0x12, 0x00, 0x17, 
	0x00, 0x1d, 0x11, 0x1b, 0x12, 0x14, 0x06, 0x1c, 0x1c, 0x12, 0xe3, 0x11, 0x00, 0x16, 
	0x00, 0x1b, 0x18, 0x14, 0x06, 0x20, 0x14, 0x12, 0xe3, 0x12, 0x00, 0x16, 
	0x00, 0x19, 0x12, 0x15, 0x06, 0x22, 0x15, 0x12, 0xf3, 0x00, 0x16, 
	0x00, 0x18, 0x12, 0x06, 0x24, 0x14, 0x11, 0x22, 0xd3, 0x00, 0x16, 
	0x00, 0x17, 0x11, 0x06, 0x25, 0x17, 0x13, 0x18, 0x13, 0x22, 0xb3, 0x00, 0x16, 
	0x00, 0x17, 0x14, 0x06, 0x29, 0x15, 0x18, 0x11, 0x93, 0x12, 0x00, 0x16, 
	0x00, 0x16, 0x12, 0x06, 0x2c, 0x19, 0x11, 0x83, 0x00, 0x17, 
	0x00, 0x16, 0x17, 0x06, 0x2d, 0x19, 0x12, 0x63, 0x00, 0x18, 
	0x00, 0x16, 0x15, 0x06, 0x2e, 0x11, 0x12, 0x33, 0x12, 0x00, 0x19, 
	0x00, 0x16, 0x15, 0x06, 0x2e, 0x12, 0x00, 0x1e, 
	0x00, 0x16, 0x15, 0x06, 0x2e, 0x19, 0x00, 0x1e, 
	0x00, 0x16, 0x14, 0x06, 0x2e, 0x17, 0x00, 0x1e, 
	0x00, 0x16, 0x18, 0x06, 0x2e, 0x17, 0x00, 0x1e, 
	0x00, 0x17, 0x06, 0x2e, 0x18, 0x00, 0x1e, 
	0x00, 0x17, 0x18, 0x06, 0x2d, 0x00, 0x1f, 
	0x00, 0x18, 0x14, 0x06, 0x2b, 0x17, 0x00, 0x1f, 
	0x00, 0x19, 0x14, 0xb6, 0x17, 0x13, 0x15, 0x06, 0x1b, 0x14, 0x00, 0x20, 
	0x00, 0x1a, 0x18, 0x15, 0x96, 0x12, 0x10, 0x18, 0x06, 0x1a, 0x19, 0x00, 0x21, 
	0x00, 0x1c, 0x13, 0x17, 0x64, 0x17, 0x22, 0x19, 0x04, 0x18, 0x19, 0x11, 0x00, 0x22, 
	0x00, 0x24, 0x11, 0x13, 0x1a, 0x00, 0x3d, 
	0x00, 0x25, 0x21, 0x00, 0x3d, 
	0x00, 0x34, 0x23, 0x00, 0x2e, 
	0x00, 0x2b, 0x21, 0x60, 0x12, 0x23, 0x11, 0x00, 0x2d, 
	0x00, 0x22, 0x21, 0x60, 0x11, 0x23, 0x12, 0x50, 0x12, 0x23, 0x00, 0x2e, 
	0x00, 0x22, 0x33, 0x50, 0x12, 0x23, 0x12, 0x60, 0x12, 0x11, 0x00, 0x2e, 
	0x00, 0x22, 0x33, 0x50, 0x33, 0x00, 0x37, 
	0x00, 0x21, 0x12, 0x23, 0x12, 0x40, 0x11, 0x23, 0x12, 0x00, 0x37, 
	0x00, 0x21, 0x33, 0x50, 0x11, 0x12, 0x13, 0x11, 0x00, 0x37, 
	0x00, 0x21, 0x12, 0x13, 0x12, 0x00, 0x40, 
	0x00, 0x29, 0x11, 0x70, 0x22, 0x00, 0x31, 
	0x00, 0x28, 0x23, 0x12, 0x50, 0x12, 0x23, 0x11, 0x00, 0x30, 
	0x00, 0x27, 0x11, 0x33, 0x50, 0x33, 0x00, 0x31, 
	0x00, 0x28, 0x23, 0x11, 0x40, 0x11, 0x23, 0x1a, 0x00, 0x31, 
	0x00, 0x2f, 0x11, 0x12, 0x13, 0x11, 0x00, 0x31, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	
}; // 100x100 Bitmap (10000 pixels) in 603 bytes

const uint16_t 09d_RLEBM_palette[] PROGMEM_LATE = 
{
	// Palette has 13 entries
	0x0000, 0x18e4, 0x3186, 0x4a49, 0xb596, 0xce79, 0xf79e, 0x9492, 0x5aec, 0x6b6d, 0x39e8, 0x4207, 0x7bf0, 
};



//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary
//  addresses will do.
#if not defined pgm_get_far_address
#define pgm_get_far_address(x) ((uint32_t)(&(x)))
#endif

//  Returns the info needed to render the bitmap.
inline void get_09d_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(09d_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(09d_RLEBM_palette);
	bmInfo.width = 100;
	bmInfo.height = 100;
	bmInfo.flags = 0x01;
}
