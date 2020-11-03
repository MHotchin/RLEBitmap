
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
//  Data is from file '..\Processed\Weather\wi-day-hail.bmp'.
//

const byte wi_day_hail_RLEBM_data[] PROGMEM_LATE = 
{
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x48, 0x51, 0x00, 0x30, 
	0x00, 0x47, 0x71, 0x00, 0x2f, 
	0x00, 0x47, 0x71, 0x00, 0x2f, 
	0x00, 0x47, 0x71, 0x00, 0x2f, 
	0x00, 0x47, 0x71, 0x00, 0x2f, 
	0x00, 0x47, 0x71, 0x00, 0x2f, 
	0x00, 0x47, 0x71, 0x00, 0x2f, 
	0x00, 0x47, 0x71, 0x00, 0x2f, 
	0x00, 0x47, 0x71, 0x00, 0x2f, 
	0x00, 0x47, 0x71, 0x00, 0x2f, 
	0x00, 0x47, 0x71, 0x00, 0x2f, 
	0x00, 0x47, 0x71, 0x00, 0x2f, 
	0x00, 0x2b, 0x51, 0x00, 0x17, 0x71, 0x00, 0x17, 0x51, 0x00, 0x13, 
	0x00, 0x2a, 0x71, 0x00, 0x16, 0x71, 0x00, 0x16, 0x71, 0x00, 0x12, 
	0x00, 0x2a, 0x81, 0x00, 0x16, 0x51, 0x00, 0x16, 0x81, 0x00, 0x12, 
	0x00, 0x2a, 0x91, 0x00, 0x16, 0x31, 0x00, 0x16, 0x91, 0x00, 0x12, 
	0x00, 0x2a, 0xa1, 0x00, 0x2d, 0xa1, 0x00, 0x12, 
	0x00, 0x2a, 0xa1, 0x00, 0x2c, 0xb1, 0x00, 0x12, 
	0x00, 0x2b, 0x91, 0x00, 0x2b, 0xb1, 0x00, 0x13, 
	0x00, 0x2c, 0x81, 0x00, 0x2a, 0xb1, 0x00, 0x14, 
	0x00, 0x2d, 0x61, 0x00, 0x2b, 0xa1, 0x00, 0x15, 
	0x00, 0x2e, 0x41, 0x00, 0x2c, 0x91, 0x00, 0x16, 
	0x00, 0x49, 0x41, 0x00, 0x11, 0x81, 0x00, 0x17, 
	0x00, 0x44, 0xe1, 0xc0, 0x71, 0x00, 0x18, 
	0x00, 0x41, 0x01, 0x13, 0xb0, 0x51, 0x00, 0x19, 
	0x00, 0x3f, 0x01, 0x17, 0x00, 0x27, 
	0x00, 0x3e, 0x01, 0x19, 0x00, 0x26, 
	0x00, 0x2a, 0xb1, 0x70, 0x01, 0x1d, 0x00, 0x24, 
	0x00, 0x26, 0x01, 0x12, 0x30, 0x01, 0x1f, 0x00, 0x23, 
	0x00, 0x24, 0x01, 0x37, 0x00, 0x22, 
	0x00, 0x22, 0x01, 0x26, 0x50, 0xf1, 0x00, 0x21, 
	0x00, 0x20, 0x01, 0x25, 0xc0, 0xb1, 0x00, 0x21, 
	0x00, 0x1f, 0x01, 0x24, 0xf0, 0xb1, 0x00, 0x20, 
	0x00, 0x1e, 0x01, 0x23, 0x00, 0x13, 0xa1, 0x00, 0x1f, 
	0x00, 0x1d, 0x01, 0x24, 0x00, 0x14, 0x91, 0x00, 0x1f, 
	0x00, 0x1c, 0xd1, 0xc0, 0xd1, 0x00, 0x14, 0x91, 0x00, 0x1e, 
	0x00, 0x1b, 0xc1, 0x00, 0x10, 0xc1, 0x00, 0x14, 0x81, 0x00, 0x1e, 
	0x00, 0x1a, 0xb1, 0x00, 0x14, 0xb1, 0x00, 0x13, 0x91, 0x00, 0x1d, 
	0x00, 0x1a, 0xa1, 0x00, 0x16, 0xa1, 0x00, 0x14, 0x81, 0x00, 0x1d, 
	0x00, 0x19, 0xa1, 0x00, 0x18, 0xa1, 0x00, 0x13, 0x81, 0x00, 0x1d, 
	0x00, 0x19, 0x91, 0x00, 0x1a, 0x91, 0x00, 0x13, 0x81, 0x00, 0x1d, 
	0x00, 0x18, 0x91, 0x00, 0x1c, 0x91, 0x00, 0x13, 0x81, 0x80, 0xd1, 0x70, 
	0x00, 0x18, 0x81, 0x00, 0x1e, 0x81, 0x00, 0x13, 0x81, 0x70, 0xf1, 0x60, 
	0x00, 0x17, 0x91, 0x00, 0x1e, 0x91, 0x00, 0x12, 0x81, 0x60, 0x01, 0x10, 0x60, 
	0x00, 0x17, 0x81, 0x00, 0x20, 0x81, 0x00, 0x12, 0x81, 0x60, 0x01, 0x11, 0x50, 
	0x00, 0x17, 0x81, 0x00, 0x20, 0x81, 0x00, 0x12, 0x81, 0x60, 0x01, 0x11, 0x50, 
	0x00, 0x16, 0x81, 0x00, 0x22, 0xd1, 0xc0, 0x81, 0x70, 0xf1, 0x60, 
	0x00, 0x13, 0xb1, 0x00, 0x22, 0x01, 0x10, 0x90, 0x81, 0x80, 0xd1, 0x70, 
	0x00, 0x11, 0xd1, 0x00, 0x22, 0x01, 0x12, 0x60, 0x81, 0xb0, 0x91, 0x90, 
	0xf0, 0xf1, 0x00, 0x22, 0x01, 0x14, 0x40, 0x81, 0x00, 0x1d, 
	0xe0, 0x01, 0x10, 0x00, 0x23, 0x01, 0x14, 0x30, 0x81, 0x00, 0x1d, 
	0xd0, 0x01, 0x11, 0x00, 0x23, 0x01, 0x1f, 0x00, 0x1d, 
	0xc0, 0x01, 0x11, 0x00, 0x24, 0x01, 0x1e, 0x00, 0x1e, 
	0xb0, 0x01, 0x11, 0x00, 0x25, 0x01, 0x1e, 0x00, 0x1e, 
	0xa0, 0xd1, 0x00, 0x36, 0x01, 0x11, 0x00, 0x1f, 
	0xa0, 0xb1, 0x00, 0x3a, 0xf1, 0x00, 0x1f, 
	0x90, 0xa1, 0x00, 0x3e, 0xc1, 0x00, 0x20, 
	0x90, 0x91, 0x00, 0x40, 0xb1, 0x00, 0x20, 
	0x80, 0x91, 0x00, 0x42, 0x91, 0x00, 0x21, 
	0x80, 0x81, 0x00, 0x44, 0x81, 0x00, 0x21, 
	0x70, 0x91, 0x00, 0x44, 0x91, 0x00, 0x20, 
	0x70, 0x81, 0x00, 0x46, 0x81, 0x00, 0x20, 
	0x70, 0x81, 0x00, 0x46, 0x81, 0x00, 0x20, 
	0x70, 0x81, 0x00, 0x47, 0x71, 0x00, 0x20, 
	0x70, 0x71, 0x00, 0x48, 0x71, 0x00, 0x20, 
	0x60, 0x81, 0x00, 0x48, 0x81, 0x00, 0x1f, 
	0x60, 0x81, 0x00, 0x48, 0x81, 0x00, 0x1f, 
	0x60, 0x81, 0x00, 0x18, 0x31, 0xb0, 0x31, 0xb0, 0x31, 0x00, 0x11, 0x81, 0x60, 0x21, 0x00, 0x17, 
	0x70, 0x71, 0x00, 0x16, 0x71, 0x80, 0x61, 0x80, 0x61, 0xf0, 0x71, 0x50, 0x61, 0x00, 0x15, 
	0x70, 0x71, 0x00, 0x16, 0x71, 0x70, 0x71, 0x70, 0x71, 0xf0, 0x71, 0x50, 0x71, 0x00, 0x14, 
	0x70, 0x81, 0x00, 0x14, 0x81, 0x70, 0x71, 0x70, 0x71, 0xe0, 0x81, 0x40, 0x91, 0x00, 0x13, 
	0x70, 0x81, 0x00, 0x14, 0x81, 0x60, 0x81, 0x60, 0x81, 0xe0, 0x81, 0x40, 0xa1, 0x00, 0x12, 
	0x70, 0x81, 0x00, 0x14, 0x81, 0x60, 0x81, 0x60, 0x81, 0xe0, 0x81, 0x40, 0xa1, 0x00, 0x12, 
	0x70, 0x91, 0x00, 0x13, 0x81, 0x60, 0x81, 0x60, 0x81, 0xd0, 0x81, 0x60, 0xa1, 0x00, 0x11, 
	0x80, 0x91, 0x00, 0x11, 0x81, 0x60, 0x81, 0x60, 0x81, 0xd0, 0x91, 0x70, 0x81, 0x00, 0x12, 
	0x80, 0x91, 0x00, 0x11, 0x81, 0x60, 0x81, 0x60, 0x81, 0xd0, 0x91, 0x80, 0x71, 0x00, 0x12, 
	0x90, 0x91, 0x00, 0x10, 0x81, 0x60, 0x81, 0x60, 0x81, 0xc0, 0x91, 0xa0, 0x51, 0x00, 0x13, 
	0x90, 0xa1, 0xe0, 0x81, 0x70, 0x81, 0x50, 0x81, 0xc0, 0xa1, 0xb0, 0x31, 0x00, 0x14, 
	0xa0, 0xb1, 0xc0, 0x81, 0x60, 0x81, 0x60, 0x81, 0xa0, 0xb1, 0x00, 0x23, 
	0xb0, 0xc1, 0xa0, 0x81, 0x60, 0x81, 0x60, 0x81, 0x80, 0xc1, 0x00, 0x24, 
	0xc0, 0xf1, 0x50, 0x81, 0x70, 0x81, 0x50, 0x81, 0x50, 0xf1, 0x00, 0x25, 
	0xc0, 0x01, 0x10, 0x40, 0x81, 0x60, 0x81, 0x60, 0x81, 0x40, 0x01, 0x10, 0x00, 0x25, 
	0xe0, 0xe1, 0x40, 0x81, 0x60, 0x81, 0x60, 0x81, 0x40, 0xf1, 0x00, 0x26, 
	0xf0, 0xd1, 0x30, 0x81, 0x70, 0x81, 0x60, 0x71, 0x50, 0xd1, 0x00, 0x28, 
	0x00, 0x10, 0xc1, 0x30, 0x81, 0x70, 0x81, 0x60, 0x71, 0x50, 0xc1, 0x00, 0x29, 
	0x00, 0x12, 0xa1, 0x30, 0x81, 0x60, 0x81, 0x70, 0x71, 0x50, 0xa1, 0x00, 0x2b, 
	0x00, 0x14, 0x81, 0x40, 0x61, 0x70, 0x81, 0x70, 0x61, 0x60, 0x81, 0x00, 0x2d, 
	0x00, 0x18, 0x41, 0x50, 0x51, 0x70, 0x81, 0x90, 0x31, 0x70, 0x41, 0x00, 0x31, 
	0x00, 0x2c, 0x81, 0x00, 0x49, 
	0x00, 0x2c, 0x81, 0x00, 0x49, 
	0x00, 0x2c, 0x81, 0x00, 0x49, 
	0x00, 0x1f, 0x31, 0x90, 0x91, 0x70, 0x31, 0x00, 0x3f, 
	0x00, 0x1d, 0x61, 0x80, 0x81, 0x70, 0x51, 0x00, 0x3e, 
	0x00, 0x1d, 0x71, 0x70, 0x81, 0x60, 0x71, 0x00, 0x3d, 
	0x00, 0x1c, 0x81, 0x70, 0x81, 0x60, 0x71, 0x00, 0x3d, 
	0x00, 0x1c, 0x81, 0x60, 0x81, 0x70, 0x71, 0x00, 0x3d, 
	0x00, 0x1d, 0x71, 0x60, 0x81, 0x70, 0x71, 0x00, 0x3d, 
	0x00, 0x1d, 0x61, 0x70, 0x81, 0x80, 0x51, 0x00, 0x3e, 
	0x00, 0x1f, 0x31, 0x90, 0x61, 0xa0, 0x31, 0x00, 0x3f, 
	0x00, 0x2c, 0x51, 0x00, 0x4c, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x29, 0x41, 0x00, 0x50, 
	0x00, 0x28, 0x61, 0x00, 0x4f, 
	0x00, 0x27, 0x71, 0x00, 0x4f, 
	0x00, 0x27, 0x81, 0x00, 0x4e, 
	0x00, 0x27, 0x81, 0x00, 0x4e, 
	0x00, 0x27, 0x71, 0x00, 0x4f, 
	0x00, 0x28, 0x51, 0x00, 0x50, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	
}; // 125x125 Bitmap (15625 pixels) in 1009 bytes

const uint16_t wi_day_hail_RLEBM_palette[] PROGMEM_LATE = 
{
	// Palette has 2 entries
	0x0000, 0xffff, 
};



//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary
//  addresses will do.
#if not defined pgm_get_far_address
#define pgm_get_far_address(x) ((uint32_t)(&(x)))
#endif

//  Returns the info needed to render the bitmap.
inline void get_wi_day_hail_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(wi_day_hail_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(wi_day_hail_RLEBM_palette);
	bmInfo.width = 125;
	bmInfo.height = 125;
	bmInfo.flags = 0x01;
}
