# RLEBitmap
Run Length Encoded bitmaps for the Arduino

Run Length Encoding (RLE) is a very simple compression format for images.  Its works best on images that have a limited number of different colors, with relatively large regions of each color.

This project provides code both to generate RLE encodings from existing bitmap (.BMP) files, and the code to render these images on any system that supports an AdaFruit 'GFX' style display interface, or the TFT_eSPI interface.  Other interfaces are easily supported.

~~If you are using the 'TFT_eSPI' library, there is a compatible fork [here](https://github.com/Bodmer/RLEBitmap).~~<br>
As of version 1.1.0, TFT_eSPI is now supported.

***

Also included are images suitable for weather reporting and forecasting, and images for displaying the phase of the moon.

The weather icons are based on a set originally designed by [Ashley Jager](http://ashleyjager.com/weather-underground).  There are 40 icons total (20 day, 20 night), however many of the night icons are actually the same as their day counterparts.  The icons are 128x128 pixels, and the code allows rendering at smaller sizes.

As an example, the 'chanceflurries' icon (like all the others) has 16384 (16K) pixels.  An uncompressed 16 bits-per-pixel bitmap (the usual for Arduino displays)  would be 32K bytes.  The RLE encoded version is 755 bytes.

![Icon for 'chance of flurries'](https://raw.githubusercontent.com/MHotchin/RLEBitmap/master/extras/Images/Weather/chanceflurries.bmp)

Here are all the icons, reduced to 64x64.  The files with 'nt_' at the front are the night-time variants.

![Weather Contact Sheet](https://github.com/MHotchin/RLEBitmap/blob/master/extras/Images/Weather/weather.png)

The moon images are provided at many different sizes, from 32x32 to 320x320 pixels.  Each image set consists of one full image of the moon, and 32 different masks for the moon phases.  The moon image is from [NASA](https://www.nasa.gov/feature/goddard/2016/novembers-spectacular-supermoon), and as such has no copyright.

The moon images have many more, and much smaller, areas of each color, and as such does not compress as well as the weather icons.  The 128x128 image of the moon (below) compresses to about 8400 bytes (about 1/4 native size).
![Moon 128x128](https://raw.githubusercontent.com/MHotchin/RLEBitmap/master/extras/Images/moon/images/moon_128.bmp)

The 64x64 image is just under 2400 bytes:
![Moon 128x128](https://raw.githubusercontent.com/MHotchin/RLEBitmap/master/extras/Images/moon/images/moon_64.bmp)

The largest image, 320x320 uses about 50KB.  The larger images are not practical on smaller AVR based boards, but would work on (for example) Mega 2560.

***

To generate the RLE encodings, a Windows program ('bmper.exe') is provided, with source.  It reads a .BMP file and outputs C++ code for storing the bitmap data.  The output can be re-directed into an appropriately names header file.  Input images are limited to *256* unique colors!

For each image set there is also the script ('generate.cmd') used to re-create it.  For the weather icons, this just uses 'bmper.exe' to create a header file for each icon.  The moon images are more involved - the script to generate the image set also requires ['ImageMagick' version 7](https://imagemagick.org/) to manipulate the images.

# Using RLE Bitmaps.

Because of certain storage constraints, using the RLE encoded bitmaps is a two step process:
1. Retrieve the information required for rendering into a `RLEBitmapInfo` structure.
2. Pass the information to the rendering function to do all the work.

When each RLE bitmap is created, also included is a small function to be called to retrieve the bitmap information.  For example, the header file for the 256x256 moon image has the function `get_moon_256_RLEBM`.

In order to render that image, you'd use code similar to this:

```cpp
	RLEBitmapInfo bmMoon;
	get_moon_256_RLEBM(bmMoon);

	renderRLEBitmap(
		bmMoon,
		(int16_t)(MONITOR_LCD_WIDTH - 10 - bmMoon.width), 10,
		pGFX,
		true);
```
