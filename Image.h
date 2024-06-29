#include<stdint.h>
#include<cstdio>
#include <complex>

#define STEG_HEADER_SIZE sizeof(uint32_t) * 8

enum ImageType{
PNG,JPG,BMP,TGA
};

class Image{\
public:
  uint8_t* data= NULL;
  size_t size = 0;
int w ;
int h;
int channels;
Image(const char* filename);
Image(int w,int h,int channels);
Image(const Image& img);
~Image();

bool read(const char* filename);
bool write(const char* filename);
ImageType getFileType(const char* filename);

Image& grayscale_avg();
Image& grayscale_lum();

Image& colorMask(float r,float g,float b);

Image& encodeMessage(const char* message);
Image& decodeMessage(char* buffer, size_t* messageLength);

Image& diffmap(Image& img);
Image& diffmap_scale(Image& img,uint8_t scl=0);


Image& std_convolve_clamp_to_0(uint8_t channel,uint32_t ker_w,uint32_t ker_h,double_t ker[],uint32_t cr,uint32_t cc);
Image& std_convolve_clamp_to_border(uint8_t channel,uint32_t ker_w,uint32_t ker_h,double_t ker[],uint32_t cr,uint32_t cc);
Image& std_convolve_cyclic(uint8_t channel, uint32_t ker_w, uint32_t ker_h, double ker[], uint32_t cr, uint32_t cc) ;


};