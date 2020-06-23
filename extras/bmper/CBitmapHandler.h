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

#pragma once

class CBitmapHandler
{
public:
	CBitmapHandler(uint16_t xSize, uint16_t ySize);
	virtual ~CBitmapHandler() {};

	size_t GetNumPaletteEntries();
	uint16_t GetPaletteEntry(size_t index);
	size_t GetPaletteIndex(uint16_t color);

	virtual uint16_t GetPixelColor(uint16_t x, uint16_t y) = 0;


protected:
	uint16_t m_xSize;
	uint16_t m_ySize;

private:
	uint16_t m_aPaletteEntries[256];
	size_t m_numPaletteEntries;
};

class C24BitBitmapHandler : public CBitmapHandler
{
public:
	C24BitBitmapHandler(const uint8_t *pPixelData, uint16_t xSize, uint16_t ySize);

	uint16_t GetPixelColor(uint16_t x, uint16_t y);

private:
	const uint8_t *m_pPixelData;

};

class C32BitBitmapHandler : public CBitmapHandler
{
public:
	C32BitBitmapHandler(const uint8_t *pPixelData, uint16_t xSize, uint16_t ySize);

	uint16_t GetPixelColor(uint16_t x, uint16_t y);

private:
	const uint8_t *m_pPixelData;
};



class C8BitBitmapHandler : public CBitmapHandler
{
public:
	C8BitBitmapHandler(const uint8_t *pPixelData, uint16_t xSize, uint16_t ySize,
		const uint8_t *pPaletteData);

	uint16_t GetPixelColor(uint16_t x, uint16_t y);

private:
	const uint8_t *m_pPixelData;
	const uint8_t *m_pPaletteData;
};

