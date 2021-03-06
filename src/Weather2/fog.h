
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
//  Data is from file '.\Processed\fog.bmp'.
//

const byte fog_RLEBM_data[] PROGMEM_LATE = 
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
	0x00, 0x2f, 0x61, 0x00, 0x2f, 
	0x00, 0x2b, 0x11, 0xc2, 0x11, 0x00, 0x2b, 
	0x00, 0x29, 0x02, 0x11, 0x11, 0x00, 0x29, 
	0x00, 0x27, 0x02, 0x15, 0x11, 0x00, 0x27, 
	0x00, 0x26, 0x02, 0x18, 0x00, 0x26, 
	0x00, 0x24, 0x11, 0xa2, 0x21, 0x10, 0x31, 0xa2, 0x00, 0x25, 
	0x00, 0x23, 0x11, 0x82, 0xb0, 0x11, 0x82, 0x00, 0x24, 
	0x00, 0x22, 0x11, 0x72, 0xf0, 0x11, 0x72, 0x00, 0x23, 
	0x00, 0x22, 0x62, 0x11, 0x00, 0x12, 0x62, 0x11, 0x00, 0x22, 
	0x00, 0x21, 0x62, 0x11, 0x00, 0x14, 0x62, 0x00, 0x22, 
	0x00, 0x20, 0x11, 0x52, 0x11, 0x00, 0x16, 0x62, 0x00, 0x21, 
	0x00, 0x20, 0x62, 0x00, 0x17, 0x11, 0x52, 0x00, 0x21, 
	0x00, 0x1f, 0x11, 0x52, 0x00, 0x19, 0x62, 0x00, 0x20, 
	0x00, 0x1f, 0x52, 0x11, 0x00, 0x1a, 0x52, 0x00, 0x20, 
	0x00, 0x19, 0x11, 0xa2, 0x00, 0x1b, 0xb2, 0x00, 0x1a, 
	0x00, 0x17, 0xe2, 0x11, 0x00, 0x19, 0x11, 0xc2, 0x11, 0x00, 0x17, 
	0x00, 0x15, 0x02, 0x12, 0x00, 0x19, 0xe2, 0x00, 0x16, 
	0x00, 0x14, 0x02, 0x14, 0x11, 0x00, 0x17, 0xf2, 0x11, 0x00, 0x14, 
	0x00, 0x13, 0x02, 0x16, 0x00, 0x17, 0x02, 0x11, 0x00, 0x13, 
	0x00, 0x12, 0x82, 0x11, 0x70, 0x11, 0x62, 0x00, 0x17, 0x52, 0x40, 0x11, 0x82, 0x00, 0x12, 
	0x00, 0x11, 0x72, 0x11, 0xb0, 0x42, 0x11, 0x00, 0x17, 0x52, 0x60, 0x11, 0x62, 0x11, 0x00, 0x11, 
	0x00, 0x10, 0x11, 0x62, 0xf0, 0x11, 0x00, 0x19, 0x52, 0x80, 0x62, 0x00, 0x11, 
	0x00, 0x10, 0x62, 0x00, 0x2a, 0x52, 0x90, 0x62, 0x00, 0x10, 
	0xf0, 0x62, 0x00, 0x2b, 0x52, 0x90, 0x11, 0x52, 0x00, 0x10, 
	0xf0, 0x52, 0x11, 0x00, 0x2c, 0x32, 0xb0, 0x52, 0x11, 0xf0, 
	0xe0, 0x11, 0x52, 0x00, 0x3c, 0x52, 0xf0, 
	0xe0, 0x52, 0x11, 0x00, 0x3c, 0x52, 0xf0, 
	0xe0, 0x52, 0x00, 0x3d, 0x52, 0x11, 0xe0, 
	0xe0, 0x52, 0x70, 0x32, 0x43, 0x32, 0x00, 0x2c, 0x11, 0x42, 0x11, 0xe0, 
	0xe0, 0x52, 0x20, 0x11, 0x13, 0x04, 0x10, 0x13, 0x11, 0x00, 0x27, 0x11, 0x42, 0x11, 0xe0, 
	0xe0, 0x52, 0x13, 0x04, 0x16, 0x13, 0x11, 0x00, 0x25, 0x42, 0x11, 0xe0, 
	0xe0, 0x22, 0x13, 0x04, 0x1c, 0x12, 0x00, 0x22, 0x11, 0x42, 0x11, 0xe0, 
	0xe0, 0x13, 0x04, 0x20, 0x12, 0x00, 0x20, 0x11, 0x42, 0x11, 0xe0, 
	0xd0, 0xd4, 0x23, 0x62, 0x23, 0xd4, 0x00, 0x1f, 0x52, 0xf0, 
	0xb0, 0x12, 0xa4, 0x13, 0x12, 0xe0, 0x12, 0x13, 0xa4, 0x13, 0x00, 0x1d, 0x52, 0x10, 0x12, 0x13, 0xc0, 
	0xa0, 0x13, 0x94, 0x12, 0x00, 0x14, 0x12, 0x13, 0x94, 0x00, 0x1b, 0x62, 0x44, 0x11, 0xa0, 
	0xa0, 0x84, 0x32, 0x00, 0x17, 0x13, 0x84, 0x13, 0x00, 0x19, 0x42, 0x13, 0x54, 0x13, 0xa0, 
	0xa0, 0x64, 0x52, 0x11, 0x00, 0x17, 0x11, 0x94, 0x12, 0x00, 0x16, 0x32, 0x13, 0x74, 0x13, 0xa0, 
	0xa0, 0x13, 0x34, 0x13, 0x10, 0x62, 0x11, 0x00, 0x18, 0x12, 0x94, 0x12, 0x00, 0x13, 0x22, 0x13, 0x94, 0x11, 0xa0, 
	0xb0, 0x12, 0x13, 0x40, 0x62, 0x11, 0x30, 0x11, 0x22, 0x13, 0x32, 0x11, 0xe0, 0xa4, 0x13, 0x12, 0xe0, 0x11, 0x13, 0xb4, 0xc0, 
	0x00, 0x11, 0x11, 0x42, 0x23, 0xe4, 0x13, 0x12, 0xa0, 0x12, 0xc4, 0x23, 0x32, 0x11, 0x32, 0x23, 0xc4, 0x13, 0xd0, 
	0x00, 0x12, 0x11, 0x13, 0x04, 0x16, 0x12, 0x90, 0x13, 0x04, 0x1f, 0x13, 0xf0, 
	0x00, 0x11, 0x13, 0x04, 0x1b, 0x92, 0x13, 0x04, 0x1b, 0x13, 0x00, 0x11, 
	0xf0, 0x13, 0x04, 0x1f, 0x92, 0x13, 0x04, 0x17, 0x13, 0x00, 0x13, 
	0xd0, 0x13, 0xe4, 0x63, 0xe4, 0x13, 0xa2, 0x13, 0x04, 0x11, 0x12, 0x11, 0x00, 0x15, 
	0xb0, 0x11, 0xb4, 0x13, 0xe2, 0x13, 0xb4, 0x13, 0xc2, 0xb3, 0x12, 0xc0, 0x11, 0xc0, 
	0xa0, 0x12, 0x94, 0x13, 0x60, 0x31, 0x12, 0xa1, 0x13, 0xa4, 0x01, 0x12, 0xf0, 0x13, 0x34, 0xb0, 
	0xa0, 0x84, 0x12, 0x00, 0x18, 0x12, 0x94, 0x12, 0x00, 0x1d, 0x11, 0x54, 0x13, 0xa0, 
	0xa0, 0x64, 0x12, 0x00, 0x1c, 0x12, 0x94, 0x11, 0x00, 0x1a, 0x13, 0x74, 0xa0, 
	0xa0, 0x44, 0x13, 0x00, 0x20, 0x13, 0x94, 0x12, 0x00, 0x15, 0x11, 0x13, 0x84, 0x12, 0xa0, 
	0xb0, 0x23, 0x12, 0x00, 0x22, 0x12, 0xa4, 0x13, 0x11, 0xf0, 0x11, 0x13, 0xa4, 0x12, 0xb0, 
	0x00, 0x1a, 0x32, 0x43, 0x32, 0xe0, 0x13, 0xc4, 0x13, 0x22, 0x11, 0x30, 0x21, 0x12, 0x23, 0xb4, 0x13, 0xd0, 
	0x00, 0x15, 0x11, 0x13, 0x04, 0x10, 0x13, 0x11, 0xa0, 0x11, 0x04, 0x21, 0x11, 0xe0, 
	0x00, 0x13, 0x13, 0x04, 0x16, 0x13, 0x11, 0x90, 0x12, 0x04, 0x1d, 0x12, 0x00, 0x10, 
	0x00, 0x10, 0x12, 0x04, 0x1c, 0x12, 0x90, 0x11, 0x13, 0x04, 0x17, 0x13, 0x11, 0x00, 0x12, 
	0xe0, 0x11, 0x04, 0x20, 0x12, 0xa0, 0x12, 0x13, 0x04, 0x11, 0x13, 0x12, 0x00, 0x15, 
	0xd0, 0xd4, 0x23, 0x62, 0x23, 0xd4, 0xd0, 0x22, 0x33, 0x34, 0x33, 0x22, 0x00, 0x19, 
	0xb0, 0x12, 0xa4, 0x13, 0x12, 0xe0, 0x12, 0x13, 0xa4, 0x13, 0x00, 0x23, 0x12, 0x13, 0xc0, 
	0xa0, 0x13, 0x94, 0x12, 0x00, 0x14, 0x12, 0x13, 0x94, 0x00, 0x21, 0x44, 0x11, 0xa0, 
	0xa0, 0x74, 0x13, 0x00, 0x1a, 0x13, 0x84, 0x13, 0x00, 0x1d, 0x12, 0x54, 0x13, 0xa0, 
	0xa0, 0x64, 0x11, 0x00, 0x1c, 0x11, 0x94, 0x12, 0x00, 0x19, 0x12, 0x74, 0x13, 0xa0, 
	0xa0, 0x13, 0x34, 0x13, 0x00, 0x20, 0x12, 0x94, 0x12, 0x00, 0x15, 0x12, 0x94, 0x11, 0xa0, 
	0xb0, 0x12, 0x13, 0x00, 0x24, 0xa4, 0x13, 0x12, 0xf0, 0x12, 0x13, 0xa4, 0xc0, 
	0x00, 0x32, 0x12, 0xc4, 0x23, 0x32, 0x11, 0x32, 0x23, 0xc4, 0x13, 0xd0, 
	0x00, 0x34, 0x13, 0x04, 0x1f, 0x13, 0xf0, 
	0x00, 0x36, 0x13, 0x04, 0x1b, 0x13, 0x00, 0x11, 
	0x00, 0x38, 0x12, 0x04, 0x17, 0x13, 0x00, 0x13, 
	0x00, 0x3b, 0x12, 0x13, 0xf4, 0x13, 0x12, 0x11, 0x00, 0x15, 
	0x00, 0x3f, 0x22, 0x73, 0x22, 0x00, 0x1a, 
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
	
}; // 100x100 Bitmap (10000 pixels) in 880 bytes

const uint16_t fog_RLEBM_palette[] PROGMEM_LATE = 
{
	// Palette has 5 entries
	0x0000, 0x3a02, 0x52aa, 0xad55, 0xffff, 
};



//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary
//  addresses will do.
#if not defined pgm_get_far_address
#define pgm_get_far_address(x) ((uint32_t)(&(x)))
#endif

//  Returns the info needed to render the bitmap.
inline void get_fog_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(fog_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(fog_RLEBM_palette);
	bmInfo.width = 100;
	bmInfo.height = 100;
	bmInfo.flags = 0x01;
}
