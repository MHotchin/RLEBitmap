
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
//  Data is from file '..\Processed\Weather\wi-storm-showers.bmp'.
//

const byte wi_storm_showers_RLEBM_data[] PROGMEM_LATE = 
{
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
	0x00, 0x7d, 
	0x00, 0x39, 0x61, 0x00, 0x3e, 
	0x00, 0x34, 0x01, 0x10, 0x00, 0x39, 
	0x00, 0x32, 0x01, 0x14, 0x00, 0x37, 
	0x00, 0x30, 0x01, 0x18, 0x00, 0x35, 
	0x00, 0x2e, 0x01, 0x1c, 0x00, 0x33, 
	0x00, 0x2d, 0x01, 0x1e, 0x00, 0x32, 
	0x00, 0x2b, 0x01, 0x21, 0x00, 0x31, 
	0x00, 0x2a, 0x01, 0x24, 0x00, 0x2f, 
	0x00, 0x29, 0xe1, 0xa0, 0xe1, 0x00, 0x2e, 
	0x00, 0x28, 0xc1, 0xf0, 0xc1, 0x00, 0x2e, 
	0x00, 0x28, 0xb1, 0x00, 0x12, 0xb1, 0x00, 0x2d, 
	0x00, 0x27, 0xa1, 0x00, 0x16, 0xa1, 0x00, 0x2c, 
	0x00, 0x26, 0xa1, 0x00, 0x18, 0xa1, 0x00, 0x2b, 
	0x00, 0x26, 0x91, 0x00, 0x1a, 0x91, 0x00, 0x2b, 
	0x00, 0x25, 0x91, 0x00, 0x1c, 0x91, 0x00, 0x2a, 
	0x00, 0x25, 0x91, 0x00, 0x1c, 0x91, 0x00, 0x2a, 
	0x00, 0x24, 0x91, 0x00, 0x1e, 0x81, 0x00, 0x2a, 
	0x00, 0x24, 0x81, 0x00, 0x20, 0x81, 0x00, 0x29, 
	0x00, 0x24, 0x81, 0x00, 0x20, 0x81, 0x00, 0x29, 
	0x00, 0x23, 0x91, 0x00, 0x20, 0xd1, 0x00, 0x24, 
	0x00, 0x21, 0xa1, 0x00, 0x22, 0x01, 0x10, 0x00, 0x20, 
	0x00, 0x1f, 0xc1, 0x00, 0x22, 0x01, 0x12, 0x00, 0x1e, 
	0x00, 0x1d, 0xe1, 0x00, 0x22, 0x01, 0x14, 0x00, 0x1c, 
	0x00, 0x1c, 0xf1, 0x00, 0x22, 0x01, 0x15, 0x00, 0x1b, 
	0x00, 0x1a, 0x01, 0x11, 0x00, 0x22, 0x01, 0x16, 0x00, 0x1a, 
	0x00, 0x19, 0x01, 0x11, 0x00, 0x24, 0x01, 0x17, 0x00, 0x18, 
	0x00, 0x18, 0x01, 0x12, 0x00, 0x24, 0x01, 0x17, 0x00, 0x18, 
	0x00, 0x18, 0xc1, 0x00, 0x36, 0xc1, 0x00, 0x17, 
	0x00, 0x17, 0xb1, 0x00, 0x3a, 0xb1, 0x00, 0x16, 
	0x00, 0x16, 0xa1, 0x00, 0x3d, 0xb1, 0x00, 0x15, 
	0x00, 0x16, 0x91, 0x00, 0x40, 0x91, 0x00, 0x15, 
	0x00, 0x15, 0x91, 0x00, 0x42, 0x91, 0x00, 0x14, 
	0x00, 0x15, 0x91, 0x00, 0x42, 0x91, 0x00, 0x14, 
	0x00, 0x14, 0x91, 0x00, 0x44, 0x81, 0x00, 0x14, 
	0x00, 0x14, 0x81, 0x00, 0x46, 0x81, 0x00, 0x13, 
	0x00, 0x14, 0x81, 0x00, 0x46, 0x81, 0x00, 0x13, 
	0x00, 0x14, 0x81, 0x00, 0x46, 0x81, 0x00, 0x13, 
	0x00, 0x14, 0x71, 0x00, 0x48, 0x71, 0x00, 0x13, 
	0x00, 0x14, 0x71, 0x00, 0x48, 0x71, 0x00, 0x13, 
	0x00, 0x14, 0x71, 0x00, 0x48, 0x71, 0x00, 0x13, 
	0x00, 0x14, 0x71, 0xf0, 0xe1, 0x00, 0x18, 0x31, 0x00, 0x10, 0x71, 0x00, 0x13, 
	0x00, 0x14, 0x71, 0xe0, 0xf1, 0x00, 0x16, 0x61, 0xf0, 0x71, 0x00, 0x13, 
	0x00, 0x14, 0x71, 0xe0, 0xe1, 0x00, 0x17, 0x71, 0xe0, 0x71, 0x00, 0x13, 
	0x00, 0x14, 0x81, 0xd0, 0xe1, 0x00, 0x17, 0x71, 0xd0, 0x81, 0x00, 0x13, 
	0x00, 0x14, 0x81, 0xc0, 0xe1, 0x00, 0x17, 0x81, 0xd0, 0x81, 0x00, 0x13, 
	0x00, 0x14, 0x81, 0xc0, 0xe1, 0x00, 0x17, 0x81, 0xd0, 0x81, 0x00, 0x13, 
	0x00, 0x15, 0x81, 0xa0, 0xe1, 0x00, 0x18, 0x81, 0xc0, 0x81, 0x00, 0x14, 
	0x00, 0x15, 0x91, 0x90, 0xe1, 0x00, 0x18, 0x81, 0xb0, 0x91, 0x00, 0x14, 
	0x00, 0x15, 0x91, 0x90, 0xd1, 0x00, 0x19, 0x71, 0xc0, 0x91, 0x00, 0x14, 
	0x00, 0x16, 0x91, 0x70, 0xe1, 0x00, 0x19, 0x71, 0xb0, 0x91, 0x00, 0x15, 
	0x00, 0x16, 0xa1, 0x60, 0xd1, 0x00, 0x1a, 0x61, 0xa0, 0xb1, 0x00, 0x15, 
	0x00, 0x17, 0xb1, 0x30, 0xd1, 0x00, 0x1d, 0x41, 0x90, 0xb1, 0x00, 0x16, 
	0x00, 0x18, 0xc1, 0x10, 0xd1, 0x00, 0x28, 0xc1, 0x00, 0x17, 
	0x00, 0x19, 0x01, 0x18, 0xd0, 0x41, 0x00, 0x13, 0x01, 0x11, 0x00, 0x17, 
	0x00, 0x19, 0x01, 0x18, 0xc0, 0x61, 0x00, 0x12, 0x01, 0x10, 0x00, 0x18, 
	0x00, 0x1a, 0x01, 0x16, 0xc0, 0x81, 0x00, 0x11, 0xf1, 0x00, 0x19, 
	0x00, 0x1c, 0x01, 0x14, 0xc0, 0x81, 0x00, 0x11, 0xd1, 0x00, 0x1b, 
	0x00, 0x1d, 0x01, 0x12, 0xd0, 0x81, 0x00, 0x11, 0xc1, 0x00, 0x1c, 
	0x00, 0x1f, 0x01, 0x10, 0xd0, 0x81, 0x00, 0x11, 0xa1, 0x00, 0x1e, 
	0x00, 0x21, 0xd1, 0xd0, 0x81, 0x00, 0x12, 0x81, 0x00, 0x20, 
	0x00, 0x22, 0xc1, 0xd0, 0x81, 0x70, 0x41, 0x70, 0x51, 0x00, 0x23, 
	0x00, 0x22, 0x01, 0x15, 0x40, 0x81, 0x60, 0x61, 0x00, 0x2e, 
	0x00, 0x21, 0x01, 0x15, 0x50, 0x71, 0x60, 0x71, 0x00, 0x2e, 
	0x00, 0x21, 0x01, 0x15, 0x60, 0x61, 0x60, 0x81, 0x00, 0x2d, 
	0x00, 0x20, 0x01, 0x15, 0x80, 0x41, 0x70, 0x71, 0x00, 0x2e, 
	0x00, 0x20, 0x01, 0x14, 0x00, 0x13, 0x81, 0x00, 0x2e, 
	0x00, 0x20, 0x01, 0x13, 0x00, 0x14, 0x81, 0x00, 0x2e, 
	0x00, 0x20, 0x01, 0x13, 0x00, 0x14, 0x81, 0x00, 0x2e, 
	0x00, 0x29, 0x91, 0x00, 0x15, 0x71, 0x00, 0x2f, 
	0x00, 0x29, 0x81, 0x00, 0x16, 0x71, 0x00, 0x2f, 
	0x00, 0x28, 0x81, 0x00, 0x18, 0x61, 0x00, 0x2f, 
	0x00, 0x28, 0x81, 0x00, 0x19, 0x41, 0x00, 0x30, 
	0x00, 0x28, 0x71, 0x00, 0x4e, 
	0x00, 0x27, 0x71, 0xa0, 0x51, 0x00, 0x40, 
	0x00, 0x27, 0x61, 0xa0, 0x71, 0x00, 0x3f, 
	0x00, 0x27, 0x61, 0xa0, 0x71, 0x00, 0x3f, 
	0x00, 0x27, 0x51, 0xb0, 0x71, 0x00, 0x3f, 
	0x00, 0x26, 0x51, 0xb0, 0x81, 0x00, 0x3f, 
	0x00, 0x26, 0x41, 0xc0, 0x81, 0x00, 0x3f, 
	0x00, 0x26, 0x41, 0xc0, 0x81, 0x00, 0x3f, 
	0x00, 0x26, 0x31, 0xd0, 0x71, 0x00, 0x40, 
	0x00, 0x25, 0x31, 0xe0, 0x71, 0x00, 0x40, 
	0x00, 0x25, 0x21, 0xf0, 0x71, 0x00, 0x40, 
	0x00, 0x25, 0x21, 0xf0, 0x61, 0x00, 0x41, 
	0x00, 0x38, 0x31, 0x00, 0x42, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	0x00, 0x7d, 
	
}; // 125x125 Bitmap (15625 pixels) in 821 bytes

const uint16_t wi_storm_showers_RLEBM_palette[] PROGMEM_LATE = 
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
inline void get_wi_storm_showers_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(wi_storm_showers_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(wi_storm_showers_RLEBM_palette);
	bmInfo.width = 125;
	bmInfo.height = 125;
	bmInfo.flags = 0x01;
}
