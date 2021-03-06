
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
//  Data is from file '64x64\night\Processed\119.bmp'.
//

const byte 119_RLEBM_data[] PROGMEM_LATE = 
{
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x10, 0x21, 0x00, 0x15, 0x31, 0x00, 0x16, 
	0xd0, 0x11, 0x62, 0x13, 0x11, 0xd0, 0x11, 0x14, 0x75, 0x14, 0x11, 0x00, 0x12, 
	0xb0, 0x11, 0xa2, 0x13, 0xa0, 0x11, 0x14, 0xb5, 0x14, 0x00, 0x11, 
	0xa0, 0x11, 0x52, 0x36, 0x42, 0x11, 0x80, 0x14, 0xf5, 0x11, 0xf0, 
	0x90, 0x11, 0x32, 0x16, 0x17, 0x38, 0x16, 0x32, 0x90, 0x14, 0x55, 0x19, 0x58, 0x19, 0x55, 0x11, 0xe0, 
	0x90, 0x32, 0x16, 0x48, 0x17, 0x32, 0x90, 0x14, 0x45, 0x19, 0x98, 0x19, 0x45, 0x11, 0xd0, 
	0x80, 0x13, 0x22, 0x16, 0x58, 0x32, 0x11, 0x80, 0x11, 0x45, 0xd8, 0x45, 0xd0, 
	0x80, 0x32, 0x58, 0x17, 0x22, 0x13, 0x90, 0x14, 0x35, 0xf8, 0x35, 0x14, 0xc0, 
	0x70, 0x11, 0x22, 0x16, 0x58, 0x16, 0x22, 0x11, 0x50, 0x11, 0x34, 0x35, 0x08, 0x10, 0x19, 0x35, 0xc0, 
	0x70, 0x13, 0x22, 0x17, 0x58, 0x16, 0x22, 0x11, 0x30, 0x14, 0x85, 0x08, 0x11, 0x35, 0x14, 0xb0, 
	0x70, 0x13, 0x22, 0x17, 0x58, 0x32, 0x20, 0x11, 0x95, 0x19, 0x08, 0x11, 0x19, 0x25, 0x14, 0xb0, 
	0x70, 0x13, 0x22, 0x17, 0x58, 0x16, 0x22, 0x10, 0x11, 0x55, 0x49, 0x15, 0x08, 0x13, 0x35, 0xb0, 
	0x70, 0x11, 0x22, 0x17, 0x58, 0x16, 0x22, 0x11, 0x45, 0x19, 0x08, 0x19, 0x35, 0xb0, 
	0x70, 0x11, 0x22, 0x16, 0x58, 0x17, 0x22, 0x45, 0x08, 0x1b, 0x35, 0x11, 0xa0, 
	0x80, 0x32, 0x17, 0x58, 0x22, 0x35, 0x19, 0x08, 0x1b, 0x45, 0x14, 0x90, 
	0x80, 0x11, 0x32, 0x58, 0x26, 0x35, 0x08, 0x1c, 0x55, 0x14, 0x80, 
	0x90, 0x42, 0x17, 0x38, 0x17, 0x35, 0x19, 0x08, 0x1d, 0x19, 0x45, 0x14, 0x70, 
	0xa0, 0x42, 0x16, 0x17, 0x55, 0x08, 0x20, 0x45, 0x70, 
	0xb0, 0x42, 0x65, 0x08, 0x21, 0x35, 0x14, 0x60, 
	0xc0, 0x11, 0x12, 0x45, 0x19, 0x08, 0x23, 0x19, 0x35, 0x60, 
	0xd0, 0x11, 0x35, 0x19, 0x08, 0x25, 0x35, 0x11, 0x50, 
	0xd0, 0x14, 0x35, 0x08, 0x26, 0x35, 0x11, 0x50, 
	0xd0, 0x14, 0x25, 0x19, 0x08, 0x26, 0x35, 0x11, 0x50, 
	0xd0, 0x14, 0x25, 0x19, 0x08, 0x26, 0x35, 0x60, 
	0xd0, 0x14, 0x25, 0x19, 0x08, 0x25, 0x19, 0x35, 0x60, 
	0xd0, 0x11, 0x35, 0x08, 0x25, 0x35, 0x14, 0x60, 
	0xe0, 0x45, 0x08, 0x23, 0x45, 0x70, 
	0xe0, 0x11, 0x45, 0x19, 0x08, 0x1e, 0x19, 0x55, 0x11, 0x70, 
	0xf0, 0x14, 0x05, 0x27, 0x11, 0x80, 
	0x00, 0x10, 0x14, 0x05, 0x25, 0x11, 0x90, 
	0x00, 0x12, 0x24, 0x05, 0x1e, 0x24, 0x11, 0xb0, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	
}; // 64x64 Bitmap (4096 pixels) in 410 bytes

const uint16_t 119_RLEBM_palette[] PROGMEM_LATE = 
{
	// Palette has 10 entries
	0x0000, 0x2966, 0x039b, 0x2b33, 0x3a4a, 0x8c92, 0x345b, 0xae3b, 0xef5d, 0xd6bb, 
};



//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary
//  addresses will do.
#if not defined pgm_get_far_address
#define pgm_get_far_address(x) ((uint32_t)(&(x)))
#endif

//  Returns the info needed to render the bitmap.
inline void get_119_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(119_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(119_RLEBM_palette);
	bmInfo.width = 64;
	bmInfo.height = 64;
	bmInfo.flags = 0x01;
}
