#include <stdio.h>
#include <stdlib.h>

#define BMP_IN "stdio-training.bmp"
#define BMP_OUT "stdio-training-modified.bmp"

#pragma pack(push, 1)
struct Pix
{
	unsigned char B;
	unsigned char G;
	unsigned char R;

};
#pragma pack(pop)

#pragma pack(push, 1)
struct BitMap
{
	short		m_signature;
	long		m_reserved1;
	long		m_reserved2;

	long		m_dataOffSet;

	long		m_size;
	long		m_width;
	long		m_height;
	short		m_planes;
	short		m_bpp;

	long		m_compression;
	long		m_sizeImage;

	long		m_xPixelsPreMeter;
	long		m_yPixelsPreMeter;

	long		m_colorsUsed;
	long		m_colorsImportant;
};
#pragma pack(pop)

void readBMP(const char* filePath, BitMap &header, char* &data);
void writeBMP(const char* filePath, BitMap &header, char* &data);

char* convertPixelArrayToData(Pix* &pixels, BitMap &header);
Pix* convertDataToPixelArray(char* &data, BitMap &header);

void incrcolor(Pix* &pixel, int size);

int main(int argc, char **argv)
{
	BitMap _header;
	char* _data = NULL;

	readBMP(BMP_IN, _header, _data);

	Pix* _pixels = convertDataToPixelArray(_data, _header);
	delete[] _data;
	_data = NULL;

	incrcolor(_pixels, _header.m_width * _header.m_height);

	_data = convertPixelArrayToData(_pixels, _header);

	writeBMP(BMP_OUT, _header, _data);
	delete[] _pixels;
	_pixels = NULL;

	return 0;
}

void readBMP(const char* filePath, BitMap &header, char* &data)
{
	FILE* f = fopen(filePath, "rb");
	if (!f)
	{
		printf("Cannot open file for reading!!!");
		exit(-1);
	}

	fread(&header, sizeof(header), 1, f);

	int _padding = header.m_width % 4;
	int _size = header.m_width * header.m_height * (header.m_bpp / 8) + _padding * header.m_height;

	data = new char[_size];
	fread(data, sizeof(char), _size, f);

	fclose(f);
}

void writeBMP(const char* filePath, BitMap &header, char* &data)
{
	FILE* f = fopen(filePath, "wb");
	if (!f)
	{
		printf("Cannot open file for writing!!!");
		exit(-1);
	}

	fwrite(&header, sizeof(header), 1, f);

	int _padding = header.m_width % 4;
	int _size = header.m_width * header.m_height * (header.m_bpp / 8) + _padding * header.m_height;

	fwrite(data, sizeof(char), _size, f);

	fclose(f);
}

Pix* convertDataToPixelArray(char* &data, BitMap &header)
{
	int _size = header.m_width * header.m_height;
	Pix* _pixels = new Pix[_size];

	int _padding = header.m_width % 4;

	char* _temp = data;

	for (int i = 0; i < header.m_height; i++)
	{
		for (int j = 0; j < header.m_width; j++)
		{
			_pixels[i * header.m_height + j].B = *(_temp++);
			_pixels[i * header.m_height + j].G = *(_temp++);
			_pixels[i * header.m_height + j].R = *(_temp++);
		}

		_temp += _padding;
	}

	return _pixels;
}

char* convertPixelArrayToData(Pix* &pixels, BitMap &header)
{
	int _padding = header.m_width % 4;
	int _size = header.m_width * header.m_height * (header.m_bpp / 8) + _padding * header.m_height;

	char* _data = new char[_size];
	char* _temp = _data;

	for (int i = 0; i < header.m_height; i++)
	{
		for (int j = 0; j < header.m_width; j++)
		{
			*(_temp++) = pixels[i * header.m_height + j].B;
			*(_temp++) = pixels[i * header.m_height + j].G;
			*(_temp++) = pixels[i * header.m_height + j].R;
		}

		for (int k = 0; k < _padding; k++)
		{
			*(_temp++) = 0;
		}
	}

	return _data;
}

void incrcolor(Pix* &pixels, int size)
{
	for (int i = 0; i < size; i++)
	{
		pixels[i].R +=100; 
		pixels[i].G +=100; 
		pixels[i].B +=100; 
	}
}