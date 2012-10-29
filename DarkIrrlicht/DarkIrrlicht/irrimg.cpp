#include "main.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// IRRIMG library (IImage manager)
//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

EXPORTC DWORD irrimg_lock(video::IImage *img)
{
	return (DWORD)img->lock();
}

EXPORTC void irrimg_unlock(video::IImage *img)
{
	img->unlock();
}

EXPORTC DWORD irrimg_getwidth(video::IImage *img)
{
	return (DWORD)img->getDimension().Width;
}

EXPORTC DWORD irrimg_getheight(video::IImage *img)
{
	return (DWORD)img->getDimension().Height;
}

EXPORTC DWORD irrimg_getbitsperpixel(video::IImage *img)
{
	return (DWORD)img->getBitsPerPixel();
}

EXPORTC DWORD irrimg_getbytesperpixel(video::IImage *img)
{
	return (DWORD)img->getBytesPerPixel();
}

EXPORTC DWORD irrimg_getimagedatasizeinbytes(video::IImage *img)
{
	return (DWORD)img->getImageDataSizeInBytes();
}

EXPORTC DWORD irrimg_getimagedatasizeinpixels(video::IImage *img)
{
	return (DWORD)img->getImageDataSizeInPixels();
}

EXPORTC DWORD irrimg_getpixel(video::IImage *img,int x,int y)
{
	return (DWORD)img->getPixel(x,y).color;
}

EXPORTC void irrimg_setpixel(video::IImage *img,int x,int y,DWORD col,int blend)
{
	bool flag;
	if (blend) flag=true; else flag=false;
	img->setPixel(x,y,col,flag);
}

EXPORTC DWORD irrimg_getcolorformat(video::IImage *img)
{
	return (DWORD)img->getColorFormat();
}

EXPORTC DWORD irrimg_getpitch(video::IImage *img)
{
	return (DWORD)img->getPitch();
}

EXPORTC void irrimg_copytoscaling(video::IImage *img,video::IImage *target)
{
	img->copyToScaling(target);
}

EXPORTC void irrimg_copyto(video::IImage *img,video::IImage *target,int x,int y)
{
	img->copyTo(target,core::vector2d<s32>(x,y));
}

EXPORTC void irrimg_copytowithsource(video::IImage *img,video::IImage *target,
	int xpos,int ypos,
	int srcx1,int srcy1,int srcx2,int srcy2)
{
	img->copyTo(target,core::vector2d<s32>(xpos,ypos),
		core::rect<s32>(srcx1,srcy1,srcx2,srcy2));
}

EXPORTC void irrimg_copytowithsourceandclip(video::IImage *img,video::IImage *target,
	int xpos,int ypos,
	int srcx1,int srcy1,int srcx2,int srcy2,
	int clipx1,int clipy1,int clipx2,int clipy2)
{
	core::rect<s32> clip(clipx1,clipy1,clipx2,clipy2);
	img->copyTo(target,core::vector2d<s32>(xpos,ypos),
		core::rect<s32>(srcx1,srcy1,srcx2,srcy2),
		&clip);
}

EXPORTC void irrimg_copytowithsourcealpha(video::IImage *img,video::IImage *target,
	int xpos,int ypos,
	int srcx1,int srcy1,int srcx2,int srcy2,video::SColor col)
{
	img->copyToWithAlpha(target,core::vector2d<s32>(xpos,ypos),
		core::rect<s32>(srcx1,srcy1,srcx2,srcy2),col);
}

EXPORTC void irrimg_copytowithsourceandclipalpha(video::IImage *img,video::IImage *target,
	int xpos,int ypos,
	int srcx1,int srcy1,int srcx2,int srcy2,
	video::SColor col,
	int clipx1,int clipy1,int clipx2,int clipy2)
{
	core::rect<s32> clip(clipx1,clipy1,clipx2,clipy2);
	img->copyToWithAlpha(target,core::vector2d<s32>(xpos,ypos),
		core::rect<s32>(srcx1,srcy1,srcx2,srcy2),
		col,&clip);
}

EXPORTC void irrimg_copytoscalingboxfilter(video::IImage *img,video::IImage *target,
	s32 bias,int blend)
{
	bool flag;
	if (blend) flag=true; else flag=false;
	img->copyToScalingBoxFilter(target,bias,flag);
}

EXPORTC void irrimg_fill(video::IImage *img,video::SColor col)
{
	img->fill(col);
}

EXPORTC DWORD irrimg_create32(int width, int height)
{
	return (DWORD)irrcore.driver->createImage(video::ECF_A8R8G8B8,
		core::dimension2d<u32>(width, height));
}
