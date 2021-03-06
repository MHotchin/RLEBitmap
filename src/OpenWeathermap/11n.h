
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
//  Data is from file 'Processed\11n.bmp'.
//

const byte 11n_RLEBM_data[] PROGMEM_LATE = 
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
	0x00, 0x34, 0x11, 0x22, 0x13, 0x22, 0x11, 0x00, 0x29, 
	0x00, 0x32, 0x11, 0x93, 0x11, 0x00, 0x27, 
	0x00, 0x31, 0x12, 0xb3, 0x12, 0x00, 0x26, 
	0x00, 0x30, 0x12, 0xe3, 0x00, 0x25, 
	0x00, 0x2f, 0x12, 0xf3, 0x12, 0x00, 0x24, 
	0x00, 0x2f, 0x03, 0x11, 0x11, 0x00, 0x23, 
	0x00, 0x24, 0x14, 0x15, 0x56, 0x15, 0x14, 0x10, 0x11, 0x12, 0x03, 0x10, 0x12, 0x00, 0x23, 
	0x00, 0x22, 0x14, 0x16, 0x97, 0x16, 0x15, 0x22, 0x03, 0x10, 0x00, 0x23, 
	0x00, 0x21, 0x15, 0xd7, 0x16, 0x22, 0xf3, 0x20, 0x12, 0x23, 0x22, 0x00, 0x1c, 
	0x00, 0x20, 0x16, 0xf7, 0x16, 0x22, 0xe3, 0x12, 0x73, 0x11, 0x00, 0x1a, 
	0x00, 0x1f, 0x15, 0x07, 0x11, 0x16, 0x12, 0x03, 0x17, 0x00, 0x1a, 
	0x00, 0x1e, 0x13, 0x07, 0x13, 0x15, 0x12, 0x03, 0x16, 0x12, 0x00, 0x19, 
	0x00, 0x1e, 0x07, 0x15, 0x13, 0x12, 0x03, 0x16, 0x00, 0x19, 
	0x00, 0x1d, 0x14, 0x07, 0x15, 0x15, 0x12, 0x03, 0x16, 0x11, 0x00, 0x18, 
	0x00, 0x1d, 0x15, 0x07, 0x15, 0x16, 0x82, 0xf3, 0x00, 0x19, 
	0x00, 0x1d, 0x16, 0x07, 0x16, 0x13, 0x12, 0x25, 0x16, 0x25, 0x14, 0x22, 0xd3, 0x11, 0x00, 0x18, 
	0x00, 0x1c, 0x11, 0x07, 0x17, 0x15, 0x16, 0x67, 0x15, 0x13, 0x12, 0xf3, 0x12, 0x11, 0x00, 0x14, 
	0x00, 0x1c, 0x12, 0x07, 0x21, 0x13, 0x12, 0x03, 0x10, 0x12, 0x00, 0x13, 
	0x00, 0x1d, 0x07, 0x21, 0x16, 0x12, 0x03, 0x11, 0x11, 0x00, 0x12, 
	0x00, 0x1d, 0x16, 0x07, 0x21, 0x14, 0x12, 0x03, 0x11, 0x00, 0x12, 
	0x00, 0x17, 0x12, 0x15, 0x46, 0x07, 0x22, 0x15, 0x12, 0x03, 0x11, 0x12, 0x00, 0x11, 
	0x00, 0x15, 0x11, 0x15, 0x07, 0x28, 0x16, 0x12, 0x03, 0x12, 0x00, 0x11, 
	0x00, 0x14, 0x12, 0x07, 0x2a, 0x16, 0x03, 0x13, 0x00, 0x11, 
	0x00, 0x13, 0x12, 0x07, 0x2b, 0x15, 0x11, 0x32, 0xf3, 0x00, 0x11, 
	0x00, 0x12, 0x11, 0x16, 0x07, 0x2b, 0x15, 0x14, 0x25, 0x14, 0x22, 0xd3, 0x00, 0x11, 
	0x00, 0x12, 0x15, 0x07, 0x31, 0x15, 0x13, 0x12, 0xb3, 0x12, 0x00, 0x11, 
	0x00, 0x12, 0x07, 0x34, 0x14, 0x11, 0xa3, 0x00, 0x12, 
	0x00, 0x11, 0x14, 0x07, 0x35, 0x14, 0x12, 0x83, 0x00, 0x13, 
	0x00, 0x11, 0x15, 0x07, 0x36, 0x13, 0x12, 0x53, 0x12, 0x00, 0x14, 
	0x00, 0x11, 0x16, 0x07, 0x36, 0x15, 0x10, 0x11, 0x22, 0x21, 0x00, 0x15, 
	0x00, 0x11, 0x16, 0x07, 0x36, 0x15, 0x00, 0x1b, 
	0x00, 0x11, 0x16, 0x07, 0x13, 0x78, 0x07, 0x1d, 0x11, 0x00, 0x1a, 
	0x00, 0x11, 0x15, 0x07, 0x13, 0x69, 0x1a, 0x07, 0x1d, 0x12, 0x00, 0x1a, 
	0x00, 0x11, 0x14, 0x07, 0x12, 0x18, 0x19, 0x4a, 0x19, 0x07, 0x1e, 0x12, 0x00, 0x1a, 
	0x00, 0x12, 0x07, 0x11, 0x16, 0x19, 0x4a, 0x19, 0x18, 0x07, 0x1e, 0x00, 0x1b, 
	0x00, 0x12, 0x14, 0x07, 0x10, 0x1b, 0x19, 0x3a, 0x19, 0x1b, 0x07, 0x1e, 0x15, 0x00, 0x1b, 
	0x00, 0x13, 0x16, 0xf7, 0x5a, 0x19, 0x16, 0x07, 0x1e, 0x13, 0x00, 0x1b, 
	0x00, 0x13, 0x11, 0xe7, 0x1b, 0x19, 0x3a, 0x19, 0x18, 0x07, 0x1e, 0x15, 0x00, 0x1c, 
	0x00, 0x14, 0x12, 0x16, 0xc7, 0x19, 0x5a, 0x37, 0x16, 0x07, 0x1a, 0x15, 0x00, 0x1d, 
	0x00, 0x16, 0x15, 0xa7, 0x18, 0x19, 0x8a, 0x19, 0x18, 0x07, 0x18, 0x15, 0x00, 0x1e, 
	0x00, 0x17, 0x12, 0x14, 0x15, 0x16, 0x57, 0x16, 0x19, 0x8a, 0x19, 0x18, 0x07, 0x15, 0x26, 0x14, 0x12, 0x00, 0x1f, 
	0x00, 0x20, 0x1c, 0x19, 0x8a, 0x1c, 0x11, 0x00, 0x38, 
	0x00, 0x1f, 0x11, 0x19, 0x8a, 0x1d, 0x00, 0x3a, 
	0x00, 0x1f, 0x11, 0x3e, 0x1c, 0x5a, 0x11, 0x00, 0x3a, 
	0x00, 0x23, 0x1e, 0x4a, 0x11, 0x00, 0x3b, 
	0x00, 0x23, 0x1d, 0x3a, 0x1e, 0x00, 0x3c, 
	0x00, 0x22, 0x1e, 0x3a, 0x1c, 0x00, 0x3d, 
	0x00, 0x22, 0x1d, 0x2a, 0x1c, 0x00, 0x3e, 
	0x00, 0x21, 0x11, 0x2a, 0x1d, 0x00, 0x3f, 
	0x00, 0x21, 0x1c, 0x1a, 0x1d, 0x11, 0x00, 0x3f, 
	0x00, 0x20, 0x11, 0x2a, 0x11, 0x00, 0x40, 
	0x00, 0x20, 0x1c, 0x1a, 0x11, 0x00, 0x41, 
	0x00, 0x20, 0x1a, 0x1c, 0x00, 0x42, 
	0x00, 0x1f, 0x1e, 0x1c, 0x00, 0x43, 
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
	
}; // 100x100 Bitmap (10000 pixels) in 664 bytes

const uint16_t 11n_RLEBM_palette[] PROGMEM_LATE = 
{
	// Palette has 15 entries
	0x0000, 0x28c2, 0x3186, 0x4a49, 0x6b6d, 0xa534, 0xd69a, 0xf79e, 0xed53, 0xeaa6, 0xeb69, 0xec6e, 0xa225, 0xd328, 0x59a5, 
};



//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary
//  addresses will do.
#if not defined pgm_get_far_address
#define pgm_get_far_address(x) ((uint32_t)(&(x)))
#endif

//  Returns the info needed to render the bitmap.
inline void get_11n_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(11n_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(11n_RLEBM_palette);
	bmInfo.width = 100;
	bmInfo.height = 100;
	bmInfo.flags = 0x01;
}
