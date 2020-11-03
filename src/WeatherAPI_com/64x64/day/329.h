
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
//  Data is from file '64x64\day\Processed\329.bmp'.
//

const byte 329_RLEBM_data[] PROGMEM_LATE = 
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
	0x00, 0x15, 0x31, 0x00, 0x28, 
	0x00, 0x15, 0x31, 0x00, 0x28, 
	0xd0, 0x12, 0x11, 0x13, 0x50, 0x31, 0x50, 0x12, 0x11, 0x12, 0x00, 0x20, 
	0xc0, 0x13, 0x31, 0x50, 0x31, 0x50, 0x31, 0x13, 0x00, 0x1f, 
	0xd0, 0x31, 0x12, 0x40, 0x31, 0x40, 0x12, 0x21, 0x12, 0x00, 0x20, 
	0xd0, 0x13, 0x31, 0xa0, 0x13, 0x31, 0x00, 0x21, 
	0xe0, 0x12, 0x11, 0x12, 0xb0, 0x12, 0x11, 0x12, 0x00, 0x21, 
	0xf0, 0x13, 0x40, 0x43, 0x50, 0x13, 0x90, 0x33, 0x00, 0x16, 
	0x70, 0x12, 0x11, 0x13, 0x80, 0x12, 0x71, 0x12, 0x80, 0x13, 0x14, 0x75, 0x14, 0x13, 0x00, 0x12, 
	0x60, 0x13, 0x41, 0x13, 0x40, 0x12, 0xb1, 0x13, 0x40, 0x13, 0x14, 0xb5, 0x14, 0x00, 0x11, 
	0x70, 0x12, 0x41, 0x30, 0x12, 0xd1, 0x13, 0x20, 0x14, 0x65, 0x36, 0x65, 0x13, 0xf0, 
	0x80, 0x13, 0x21, 0x13, 0x20, 0x12, 0x41, 0x77, 0x41, 0x13, 0x14, 0x45, 0x16, 0x18, 0x59, 0x18, 0x16, 0x45, 0x13, 0xe0, 
	0xa0, 0x13, 0x20, 0x13, 0x41, 0x97, 0x31, 0x45, 0x16, 0x18, 0x99, 0x18, 0x16, 0x35, 0x13, 0xd0, 
	0xd0, 0x41, 0xb7, 0x21, 0x35, 0x16, 0xd9, 0x16, 0x35, 0xd0, 
	0xd0, 0x31, 0xd7, 0x35, 0x16, 0xf9, 0x16, 0x25, 0x14, 0xc0, 
	0xc0, 0x13, 0x31, 0x97, 0x75, 0x09, 0x10, 0x18, 0x35, 0xc0, 
	0x50, 0x41, 0x12, 0x20, 0x12, 0x21, 0x87, 0x85, 0x16, 0x09, 0x11, 0x16, 0x25, 0x14, 0xb0, 
	0x40, 0x13, 0x51, 0x20, 0x12, 0x21, 0x77, 0x95, 0x18, 0x09, 0x11, 0x18, 0x25, 0x14, 0xb0, 
	0x40, 0x13, 0x51, 0x20, 0x12, 0x21, 0x67, 0x45, 0x16, 0x48, 0x16, 0x09, 0x13, 0x35, 0xb0, 
	0xc0, 0x12, 0x31, 0x47, 0x45, 0x18, 0x09, 0x19, 0x35, 0xb0, 
	0xc0, 0x13, 0x31, 0x37, 0x35, 0x16, 0x09, 0x1b, 0x16, 0x25, 0x13, 0xa0, 
	0xd0, 0x31, 0x37, 0x35, 0x18, 0x09, 0x1b, 0x45, 0x14, 0x90, 
	0xd0, 0x13, 0x31, 0x17, 0x35, 0x16, 0x09, 0x1c, 0x55, 0x14, 0x80, 
	0x90, 0x12, 0x11, 0x13, 0x20, 0x31, 0x45, 0x18, 0x09, 0x1d, 0x18, 0x16, 0x35, 0x14, 0x70, 
	0x70, 0x13, 0x41, 0x30, 0x11, 0x55, 0x09, 0x20, 0x16, 0x35, 0x70, 
	0x60, 0x13, 0x41, 0x12, 0x30, 0x55, 0x16, 0x09, 0x21, 0x16, 0x25, 0x14, 0x60, 
	0x70, 0x31, 0x13, 0x30, 0x14, 0x35, 0x18, 0x09, 0x23, 0x18, 0x35, 0x60, 
	0x70, 0x23, 0x40, 0x13, 0x35, 0x18, 0x09, 0x25, 0x16, 0x25, 0x13, 0x50, 
	0xd0, 0x14, 0x25, 0x16, 0x09, 0x26, 0x16, 0x25, 0x13, 0x50, 
	0xd0, 0x14, 0x25, 0x18, 0x09, 0x26, 0x16, 0x25, 0x13, 0x50, 
	0xd0, 0x14, 0x25, 0x18, 0x09, 0x26, 0x35, 0x60, 
	0xd0, 0x14, 0x25, 0x18, 0x09, 0x25, 0x18, 0x35, 0x60, 
	0xd0, 0x13, 0x25, 0x16, 0x09, 0x25, 0x16, 0x25, 0x14, 0x60, 
	0xe0, 0x35, 0x16, 0x09, 0x23, 0x16, 0x35, 0x70, 
	0xe0, 0x13, 0x35, 0x16, 0x18, 0x09, 0x1e, 0x18, 0x16, 0x45, 0x13, 0x70, 
	0xf0, 0x14, 0x05, 0x27, 0x13, 0x80, 
	0x00, 0x10, 0x14, 0x05, 0x25, 0x13, 0x90, 
	0x00, 0x12, 0x24, 0x05, 0x1e, 0x24, 0x13, 0xb0, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x20, 0x14, 0x15, 0x10, 0x13, 0x15, 0x13, 0x00, 0x1a, 
	0x00, 0x1f, 0x14, 0x28, 0x13, 0x16, 0x18, 0x15, 0x00, 0x1a, 
	0x00, 0x20, 0x16, 0x48, 0x13, 0x00, 0x1a, 
	0x00, 0x1e, 0x24, 0x15, 0x38, 0x16, 0x24, 0x13, 0x00, 0x18, 
	0x00, 0x1e, 0x16, 0x88, 0x14, 0x00, 0x18, 
	0x00, 0x1e, 0x14, 0x15, 0x16, 0x48, 0x25, 0x13, 0x00, 0x18, 
	0x00, 0x20, 0x15, 0x48, 0x13, 0x00, 0x1a, 
	0x00, 0x1f, 0x13, 0x28, 0x14, 0x16, 0x18, 0x15, 0x00, 0x1a, 
	0x00, 0x20, 0x14, 0x15, 0x10, 0x13, 0x16, 0x13, 0x00, 0x1a, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	0x00, 0x40, 
	
}; // 64x64 Bitmap (4096 pixels) in 536 bytes

const uint16_t 329_RLEBM_palette[] PROGMEM_LATE = 
{
	// Palette has 10 entries
	0x0000, 0xf560, 0x9b60, 0x3165, 0x5267, 0x9492, 0xbe18, 0xf701, 0xd69a, 0xe75d, 
};



//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary
//  addresses will do.
#if not defined pgm_get_far_address
#define pgm_get_far_address(x) ((uint32_t)(&(x)))
#endif

//  Returns the info needed to render the bitmap.
inline void get_329_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(329_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(329_RLEBM_palette);
	bmInfo.width = 64;
	bmInfo.height = 64;
	bmInfo.flags = 0x01;
}