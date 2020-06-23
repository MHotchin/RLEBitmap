//
//  Copyright Michael Hotchin
//
//  MIT License
//
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of this
// software andassociated documentation files(the "Software"), to deal in the Software
// without restriction, including without limitation the rights to use, copy, modify,
// merge, publish, distribute, sublicense, and/or sell copies of the Software, andto
// permit persons to whom the Software is furnished to do so, subject to the following
// conditions :
//
// The above copyright notice andthis permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
// INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
// PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
// HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
// CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR
// THE USE OR OTHER DEALINGS IN THE SOFTWARE
//


#include <Windows.h>
#include <stdint.h>
#include "CBitmapHandler.h"


namespace
{
	uint16_t RGB_888_to_565(uint8_t R, uint8_t G, uint8_t B)
	{
		return ((uint16_t)(R & 0xF8) << 8) | ((uint16_t)(G & 0xFC) << 3) | ((uint16_t)(B & 0xF8) >> 3);
	}

}

CBitmapHandler::CBitmapHandler(
	uint16_t xSize,
	uint16_t ySize)
	: m_xSize(xSize), m_ySize(ySize), m_numPaletteEntries(0)
{
	memset(m_aPaletteEntries, 0, sizeof(m_aPaletteEntries));
}




size_t
CBitmapHandler::GetNumPaletteEntries()
{
	if (m_numPaletteEntries == 0)
	{
		for (uint16_t i = 0; i < m_ySize; i++)
		{
			for (uint16_t j = 0; j < m_xSize; j++)
			{
				uint16_t color = GetPixelColor(j, i);

				size_t k;
				for (k = 0; k < m_numPaletteEntries; k++)
				{
					if (color == m_aPaletteEntries[k])
						break;
				}

				if ((k == m_numPaletteEntries) && (m_numPaletteEntries < 256))
				{
					m_aPaletteEntries[m_numPaletteEntries++] = color;
				}
			}
		}
	}

	return m_numPaletteEntries;
}


uint16_t
CBitmapHandler::GetPaletteEntry(
	size_t index)
{
	if (index < m_numPaletteEntries)
	{
		return m_aPaletteEntries[index];
	}

	//  Undefined entries are black.
	return 0;
}

size_t
CBitmapHandler::GetPaletteIndex(
	uint16_t color)
{
	for (size_t i = 0; i < m_numPaletteEntries; i++)
	{
		if (m_aPaletteEntries[i] == color)
		{
			return i;
		}
	}
	//  Should NEVER get here.

	return 0;
}


C24BitBitmapHandler::C24BitBitmapHandler(
	const uint8_t *pPixelData,
	uint16_t xSize,
	uint16_t ySize)
	: m_pPixelData(pPixelData), CBitmapHandler(xSize, ySize)
{

}

uint16_t
C24BitBitmapHandler::GetPixelColor(
	uint16_t x,
	uint16_t y)
{
	//  Round up lines to multiples of 4 bytes
	uint16_t LineLength = ((m_xSize * 3) + 3) & 0xfffc;

	const uint8_t *pLineStart = m_pPixelData + ((m_ySize-1- y) * LineLength);

	const uint8_t *pPixel = pLineStart + 3 * x;

	uint8_t Blue = *pPixel++;
	uint8_t Green = *pPixel++;
	uint8_t Red = *pPixel++;

	uint16_t color = RGB_888_to_565(Red, Green, Blue);
	return color;
}


C32BitBitmapHandler::C32BitBitmapHandler(
	const uint8_t *pPixelData,
	uint16_t xSize,
	uint16_t ySize)
	: m_pPixelData(pPixelData), CBitmapHandler(xSize, ySize)
{

}

uint16_t
C32BitBitmapHandler::GetPixelColor(
	uint16_t x,
	uint16_t y)
{
	//  Round up lines to multiples of 4 bytes
	uint16_t LineLength = (m_xSize * 4);

	const uint8_t *pLineStart = m_pPixelData + ((m_ySize - 1 - y) * LineLength);

	const uint8_t *pPixel = pLineStart + 4 * x;

	uint8_t Blue = *pPixel++;
	uint8_t Green = *pPixel++;
	uint8_t Red = *pPixel++;

	//  We ignore the alpha channel

	uint16_t color = RGB_888_to_565(Red, Green, Blue);
	return color;
}

C8BitBitmapHandler::C8BitBitmapHandler(
	const uint8_t *pPixelData,
	uint16_t xSize,
	uint16_t ySize,
	const byte *pPaletteData)
	: m_pPixelData(pPixelData), CBitmapHandler(xSize, ySize), m_pPaletteData(pPaletteData)
{

}



uint16_t
C8BitBitmapHandler::GetPixelColor(
	uint16_t x,
	uint16_t y)
{
	//  Round up lines to multiples of 4 bytes
	uint16_t LineLength = (m_xSize + 3) & 0xfffc;

	const uint8_t *pLineStart = m_pPixelData + ((m_ySize - 1 - y) * LineLength);

	const uint8_t *pPixel = pLineStart + x;

	byte bitmapPaletteIndex = *pPixel;

	//  Palette entries are BGRA.  Ignore alpha!
	const byte *pPaletteEntry = m_pPaletteData + 4 * bitmapPaletteIndex;
	uint8_t Blue = *pPaletteEntry++;
	uint8_t Green = *pPaletteEntry++;
	uint8_t Red = *pPaletteEntry++;

	uint16_t color = RGB_888_to_565(Red, Green, Blue);
	return color;
}