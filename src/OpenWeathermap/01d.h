
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
//  Data is from file 'Processed\01d.bmp'.
//

const byte 01d_RLEBM_data[] PROGMEM_LATE = 
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
	0x00, 0x64, 
	0x00, 0x2d, 0x11, 0x12, 0x13, 0x14, 0x35, 0x24, 0x12, 0x16, 0x17, 0x00, 0x2b, 
	0x00, 0x29, 0x17, 0x12, 0x13, 0xd8, 0x14, 0x12, 0x17, 0x00, 0x28, 
	0x00, 0x27, 0x17, 0x13, 0x08, 0x13, 0x14, 0x17, 0x00, 0x26, 
	0x00, 0x26, 0x13, 0x08, 0x17, 0x14, 0x17, 0x00, 0x24, 
	0x00, 0x24, 0x16, 0x19, 0x08, 0x1a, 0x12, 0x00, 0x23, 
	0x00, 0x23, 0x13, 0x08, 0x1d, 0x14, 0x00, 0x22, 
	0x00, 0x22, 0x14, 0x08, 0x1f, 0x15, 0x17, 0x00, 0x20, 
	0x00, 0x21, 0x14, 0x08, 0x21, 0x19, 0x17, 0x00, 0x1f, 
	0x00, 0x20, 0x14, 0x08, 0x23, 0x19, 0x00, 0x1f, 
	0x00, 0x1f, 0x13, 0x08, 0x25, 0x1a, 0x00, 0x1e, 
	0x00, 0x1e, 0x16, 0x08, 0x27, 0x12, 0x00, 0x1d, 
	0x00, 0x1e, 0x19, 0x08, 0x28, 0x11, 0x00, 0x1c, 
	0x00, 0x1d, 0x13, 0x08, 0x29, 0x19, 0x00, 0x1c, 
	0x00, 0x1d, 0x08, 0x2b, 0x11, 0x00, 0x1b, 
	0x00, 0x1c, 0x13, 0x08, 0x2b, 0x19, 0x00, 0x1b, 
	0x00, 0x1b, 0x17, 0x08, 0x2d, 0x11, 0x00, 0x1a, 
	0x00, 0x1b, 0x12, 0x08, 0x2d, 0x1b, 0x00, 0x1a, 
	0x00, 0x1b, 0x13, 0x08, 0x2d, 0x19, 0x00, 0x1a, 
	0x00, 0x1b, 0x08, 0x2f, 0x11, 0x00, 0x19, 
	0x00, 0x1a, 0x11, 0x08, 0x2f, 0x1b, 0x00, 0x19, 
	0x00, 0x1a, 0x12, 0x08, 0x2f, 0x14, 0x00, 0x19, 
	0x00, 0x1a, 0x13, 0x08, 0x2f, 0x1a, 0x00, 0x19, 
	0x00, 0x1a, 0x14, 0x08, 0x2f, 0x15, 0x00, 0x19, 
	0x00, 0x1a, 0x15, 0x08, 0x2f, 0x19, 0x00, 0x19, 
	0x00, 0x1a, 0x15, 0x08, 0x2f, 0x19, 0x00, 0x19, 
	0x00, 0x1a, 0x15, 0x08, 0x2f, 0x19, 0x00, 0x19, 
	0x00, 0x1a, 0x1a, 0x08, 0x2f, 0x19, 0x00, 0x19, 
	0x00, 0x1a, 0x14, 0x08, 0x2f, 0x1a, 0x00, 0x19, 
	0x00, 0x1a, 0x1b, 0x08, 0x2f, 0x14, 0x00, 0x19, 
	0x00, 0x1a, 0x16, 0x08, 0x2f, 0x13, 0x00, 0x19, 
	0x00, 0x1b, 0x08, 0x2f, 0x16, 0x00, 0x19, 
	0x00, 0x1b, 0x14, 0x08, 0x2e, 0x00, 0x1a, 
	0x00, 0x1b, 0x12, 0x08, 0x2d, 0x13, 0x00, 0x1a, 
	0x00, 0x1b, 0x17, 0x08, 0x2d, 0x16, 0x00, 0x1a, 
	0x00, 0x1c, 0x14, 0x08, 0x2c, 0x00, 0x1b, 
	0x00, 0x1c, 0x17, 0x08, 0x2b, 0x12, 0x00, 0x1b, 
	0x00, 0x1d, 0x14, 0x08, 0x2a, 0x00, 0x1c, 
	0x00, 0x1d, 0x17, 0x08, 0x29, 0x16, 0x00, 0x1c, 
	0x00, 0x1e, 0x12, 0x08, 0x27, 0x13, 0x00, 0x1d, 
	0x00, 0x1f, 0x14, 0x08, 0x25, 0x19, 0x00, 0x1e, 
	0x00, 0x20, 0x19, 0x08, 0x24, 0x17, 0x00, 0x1e, 
	0x00, 0x20, 0x17, 0x19, 0x08, 0x22, 0x11, 0x00, 0x1f, 
	0x00, 0x21, 0x17, 0x15, 0x08, 0x20, 0x11, 0x00, 0x20, 
	0x00, 0x23, 0x14, 0x08, 0x1d, 0x19, 0x17, 0x00, 0x21, 
	0x00, 0x24, 0x12, 0x08, 0x1b, 0x13, 0x17, 0x00, 0x22, 
	0x00, 0x25, 0x11, 0x14, 0x08, 0x17, 0x19, 0x12, 0x00, 0x24, 
	0x00, 0x27, 0x16, 0x15, 0x08, 0x13, 0x19, 0x12, 0x00, 0x26, 
	0x00, 0x29, 0x11, 0x1b, 0x19, 0xe8, 0x13, 0x16, 0x00, 0x28, 
	0x00, 0x2c, 0x11, 0x1b, 0x14, 0x1a, 0x15, 0x39, 0x15, 0x1a, 0x14, 0x1b, 0x16, 0x00, 0x2b, 
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
	
}; // 100x100 Bitmap (10000 pixels) in 519 bytes

const uint16_t 01d_RLEBM_palette[] PROGMEM_LATE = 
{
	// Palette has 12 entries
	0x0000, 0x4102, 0x71a4, 0x9226, 0xb287, 0xcae8, 0x4923, 0x28a1, 0xeb69, 0xd308, 0xc2c7, 0x81e5, 
};



//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary
//  addresses will do.
#if not defined pgm_get_far_address
#define pgm_get_far_address(x) ((uint32_t)(&(x)))
#endif

//  Returns the info needed to render the bitmap.
inline void get_01d_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(01d_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(01d_RLEBM_palette);
	bmInfo.width = 100;
	bmInfo.height = 100;
	bmInfo.flags = 0x01;
}
