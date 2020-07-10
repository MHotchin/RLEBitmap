//
//  Demonstrate drawing moon phases.  Tested on a Wemos D1 R32 (esp32 based), and a Mega
//  2560, using a Waveshare 4" TFT screen (GFX API)
//

#include <Arduino.h>
#include <SPI.h>

// *************************************************************************************
//  If your screen uses the Adafruit GFX API, then use these lines to set things up.
#include <Adafruit_gfx.h>
//  Replace this with the include files for your particular display
#include <Waveshare_ILI9486.h>

// If your screen uses TFT_eSPI, then comment out the Adafruit lines above, and use the
// following:
//  #include <TFT_eSPI.h>


// The RLE code will provide support based on the files included above.
#include <RLEBitmap.h>

//  If you'd like a different size, just pick the corresponding header file.
#include <Moon\MoonPhases_128.h>

#include "HtmlColors.h"



//  *************************************************************************************
//  Replace this with the declaration for your particular display
Waveshare_ILI9486 MyTFT;

// TFT_eSPI MyTFT = TFT_eSPI();



//
//  The easiest way to deal with the masks is to use function pointers (rather than data
//  pointers).
//
typedef void (*FN_BitmapInfoAccessor)(RLEBitmapInfo &bmInfo);

//
//  Here we are using all 32 masks.  If you use a different size, make sure to change all
//  the function names listed here to match.
//
//  For smaller sizes, this might be more masks than you really need.  You could just use
//  every second mask (giving 16 total) - just delete the others from the list.
//
const FN_BitmapInfoAccessor mask_functions[] = {
	get_mask_0_128_RLEBM,
	get_mask_1_128_RLEBM,
	get_mask_2_128_RLEBM,
	get_mask_3_128_RLEBM,
	get_mask_4_128_RLEBM,
	get_mask_5_128_RLEBM,
	get_mask_6_128_RLEBM,
	get_mask_7_128_RLEBM,
	get_mask_8_128_RLEBM,
	get_mask_9_128_RLEBM,
	get_mask_10_128_RLEBM,
	get_mask_11_128_RLEBM,
	get_mask_12_128_RLEBM,
	get_mask_13_128_RLEBM,
	get_mask_14_128_RLEBM,
	get_mask_15_128_RLEBM,
	get_mask_16_128_RLEBM,
	get_mask_17_128_RLEBM,
	get_mask_18_128_RLEBM,
	get_mask_19_128_RLEBM,
	get_mask_20_128_RLEBM,
	get_mask_21_128_RLEBM,
	get_mask_22_128_RLEBM,
	get_mask_23_128_RLEBM,
	get_mask_24_128_RLEBM,
	get_mask_25_128_RLEBM,
	get_mask_26_128_RLEBM,
	get_mask_27_128_RLEBM,
	get_mask_28_128_RLEBM,
	get_mask_29_128_RLEBM,
	get_mask_30_128_RLEBM,
	get_mask_31_128_RLEBM,
};


//  Gives the number of elements in an array.
#define COUNTOF(x) (sizeof(x)/sizeof(x[0]))


//  Return the fractional part of the current lunation, 0 -> new moon, multiplied by the
//  scale.  For example, to get the lunation percentage, use a scale value of 100.  The
//  full moon is halfway through the range.
unsigned int
lunation(unsigned long UTC, unsigned int scale)
{
	//  J2000.0 unixtime = 946728000
	//  'delta T' is 72 seconds in 2020
	const long deltaSeconds = UTC - 946728000L + 72;
	const float MARYs = deltaSeconds / 31556925.0f;

	//  Original equation
	//const double lunations = -5.367946E-10l * MARYs * MARYs + 12.3682665l * MARYs - 0.172522l;

	//  Re-arranged to reduce number of operations
	//const double lunations = -0.172522l + MARYs * (12.3682665l + MARYs * -5.367946E-10l);

	// Linear approximation is good enough.  In 2020, difference is only 0.01.
	const float lunations1 = -0.184336f + MARYs * 12.3682665f;

	float intPart;

	//  Get the fractional portion, multiply by the scale, round to nearest and reduce to
	//  the range [0, scale).
	return (unsigned int)(modff(lunations1, &intPart) * scale + .5) % scale;
}


void setup()
{
	SPI.begin();

	MyTFT.begin();
	MyTFT.setRotation(0);

	MyTFT.fillScreen(RGB565::Orange);
}


//  This example shows the moon phase starting with Jan 1, 2020, then advancing one day
//  per second.
unsigned long t = 1577836800L; //  Unixtime Jan 1, 2020

void loop()
{
	RLEBitmapInfo bmMoon;
	RLEBitmapInfo bmMask;

	//  Calculate the mask for the given time.
	unsigned int mask_index = lunation(t, COUNTOF(mask_functions));

	//  Get the bitmap info for the moon image and the mask.
	get_moon_128_RLEBM(bmMoon);
	mask_functions[mask_index](bmMask);

	MyTFT.fillRect(10, 10, bmMoon.width, bmMoon.height, RGB565::Orange);

	renderRLEBitmapWithRLEMask(
		bmMoon, bmMask,
		10, 10,
		&MyTFT, true);

	//  You could also use the masks as 'icons' for the current moon phase
	renderRLEBitmap(
		bmMask,
		10, 160,
		&MyTFT, false);

	delay(1000);

	t += 84600L;  //  Advance time by one day
}
