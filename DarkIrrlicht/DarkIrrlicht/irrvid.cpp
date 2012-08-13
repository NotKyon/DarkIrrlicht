#include "main.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// IRRVID library (IVideoDriver manager)
//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

EXPORTC void irrvid_beginscene(int backbuffer,int zbuffer,
	video::SColor col)
{
	bool backbufferflag;
	if (backbuffer) backbufferflag=true; else backbufferflag=false;
	bool zbufferflag;
	if (zbuffer) zbufferflag=true; else zbufferflag=false;
	irrcore.driver->beginScene(backbufferflag,zbufferflag,col);
}

EXPORTC void irrvid_endscene()
{
	irrcore.driver->endScene();
}

EXPORTC void irrvid_setmaterial(video::SMaterial &material)
{
	irrcore.driver->setMaterial(material);
}

EXPORTC DWORD irrvid_gettexture(char* filename)
{
	return (DWORD)irrcore.driver->getTexture(filename);
}

EXPORTC DWORD irrvid_gettexturefromid(u32 index)
{
	return (DWORD)irrcore.driver->getTextureByIndex(index);
}

EXPORTC DWORD irrvid_gettexturecount()
{
	return (DWORD)irrcore.driver->getTextureCount();
}

EXPORTC void irrvid_renametexture(video::ITexture *texture,char* name)
{
	irrcore.driver->renameTexture(texture,name);
}

EXPORTC DWORD irrvid_addtexture(int width,int height,char* name)
{
	return (DWORD)irrcore.driver->addTexture(core::dimension2d<u32>(width,height),name);
}

EXPORTC DWORD irrvid_addtexturefromimage(char* name,video::IImage *image)
{
	return (DWORD)irrcore.driver->addTexture(name,image);
}

EXPORTC DWORD irrvid_addrendertargettexture(int width,int height)
{
	return (DWORD)irrcore.driver->addRenderTargetTexture(core::dimension2d<u32>(width,height));
}

EXPORTC void irrvid_removetexture(video::ITexture* texture)
{
	irrcore.driver->removeTexture(texture);
}

EXPORTC void irrvid_removealltextures()
{
	irrcore.driver->removeAllTextures();
}

EXPORTC void irrvid_removehardwarebuffer(scene::IMeshBuffer *mb)
{
	irrcore.driver->removeHardwareBuffer(mb);
}

EXPORTC void irrvid_removeallhardwarebuffers()
{
	irrcore.driver->removeAllHardwareBuffers();
}

EXPORTC void irrvid_makecolorkeytexture(video::ITexture* texture,video::SColor col)
{
	irrcore.driver->makeColorKeyTexture(texture,col);
}

EXPORTC void irrvid_makecolorkeytexturefrompixel(video::ITexture *texture,int x,int y)
{
	irrcore.driver->makeColorKeyTexture(texture,core::vector2d<s32>(x,y));
}

EXPORTC void irrvid_makenormalmaptexture(video::ITexture* texture,f32 amplitude)
{
	irrcore.driver->makeNormalMapTexture(texture,amplitude);
}

EXPORTC DWORD irrvid_setrendertarget(video::ITexture* texture,
	int clearbackbuffer,int clearzbuffer,video::SColor col)
{
	bool cbbflag,czbflag;
	if (clearbackbuffer) cbbflag=true; else cbbflag=false;
	if (clearzbuffer) czbflag=true; else czbflag=false;
	return (DWORD)irrcore.driver->setRenderTarget(texture,cbbflag,czbflag,col);
}

EXPORTC void irrvid_setviewport(int x1,int y1,int x2,int y2)
{
	irrcore.driver->setViewPort(core::rect<s32>(x1,y1,x2,y2));
}

EXPORTC void irrvid_draw3dline(float x1,float y1,float z1,float x2,float y2,float z2,
	video::SColor col)
{
	irrcore.driver->draw3DLine(core::vector3df(x1,y1,z1),core::vector3df(x2,y2,z2),col);
}

EXPORTC void irrvid_draw2dimage(video::ITexture* texture,int x,int y)
{
	irrcore.driver->draw2DImage(texture,core::vector2d<s32>(x,y));
}

EXPORTC void irrvid_draw2drectangle(int x1,int y1,int x2,int y2,video::SColor col)
{
	irrcore.driver->draw2DRectangle(col,core::rect<s32>(x1,y1,x2,y2));
}

EXPORTC void irrvid_draw2drectangleoutline(int x1,int y1,int x2,int y2,video::SColor col)
{
	irrcore.driver->draw2DRectangleOutline(core::rect<s32>(x1,y1,x2,y2),col);
}

EXPORTC void irrvid_draw2dline(int x1,int y1,int x2,int y2,video::SColor col)
{
	irrcore.driver->draw2DLine(core::position2d<s32>(x1,y1),core::position2d<s32>(x2,y2),col);
}

EXPORTC void irrvid_drawpixel(int x,int y,video::SColor col)
{
	irrcore.driver->drawPixel(x,y,col);
}

EXPORTC void irrvid_draw2dpolygon(int cx,int cy,f32 radius,video::SColor col,s32 vcount)
{
	irrcore.driver->draw2DPolygon(core::vector2d<s32>(cx,cy),radius,col,vcount);
}

EXPORTC void irrvid_drawmeshbuffer(scene::IMeshBuffer* mb)
{
	irrcore.driver->drawMeshBuffer(mb);
}

EXPORTC void irrvid_setfog(video::SColor col,int fogtype,f32 start,f32 end,
	f32 density,int pixelfog,int rangefog)
{
	bool pflag,rflag;
	if (pixelfog) pflag=true; else pflag=false;
	if (rangefog) rflag=true; else rflag=false;
	irrcore.driver->setFog(col,(video::E_FOG_TYPE)fogtype,start,end,density,pflag,rflag);
}

EXPORTC DWORD irrvid_getcolorformat()
{
	return (DWORD)irrcore.driver->getColorFormat();
}

EXPORTC DWORD irrvid_getscreensizex()
{
	return (DWORD)irrcore.driver->getScreenSize().Width;
}

EXPORTC DWORD irrvid_getscreensizey()
{
	return (DWORD)irrcore.driver->getScreenSize().Height;
}

EXPORTC DWORD irrvid_getrendertargetsizex()
{
	return (DWORD)irrcore.driver->getCurrentRenderTargetSize().Width;
}

EXPORTC DWORD irrvid_getrendertargetsizey()
{
	return (DWORD)irrcore.driver->getCurrentRenderTargetSize().Height;
}

EXPORTC DWORD irrvid_getfps()
{
	return (DWORD)irrcore.driver->getFPS();
}

EXPORTC DWORD irrvid_getprimitivecountdrawn(int mode)
{
	return (DWORD)irrcore.driver->getPrimitiveCountDrawn(mode);
}

EXPORTC void irrvid_deletealldynamiclights()
{
	irrcore.driver->deleteAllDynamicLights();
}

EXPORTC DWORD irrvid_adddynamiclight(video::SLight &light)
{
	return (DWORD)irrcore.driver->addDynamicLight(light);
}

EXPORTC DWORD irrvid_getmaxdynamiclights()
{
	return (DWORD)irrcore.driver->getMaximalDynamicLightAmount();
}

EXPORTC DWORD irrvid_getdynamiclightcount()
{
	return (DWORD)irrcore.driver->getDynamicLightCount();
}

EXPORTC DWORD irrvid_getdynamiclight(int index)
{
	return (DWORD)&irrcore.driver->getDynamicLight(index);
}

EXPORTC void irrvid_turnlighton(int index,int onflag)
{
	bool flag;
	if (onflag) flag=true; else flag=false;
	irrcore.driver->turnLightOn(index,flag);
}

EXPORTC void irrvid_settexturecreationflag(int flag,int enabled)
{
	bool eflag;
	if (enabled) eflag=true; else eflag=false;
	irrcore.driver->setTextureCreationFlag((video::E_TEXTURE_CREATION_FLAG)flag,eflag);
}

EXPORTC DWORD irrvid_gettexturecreationflag(int flag)
{
	return (DWORD)irrcore.driver->getTextureCreationFlag((video::E_TEXTURE_CREATION_FLAG) flag);
}

EXPORTC DWORD irrvid_createimagefromfile(char* file)
{
	return (DWORD)irrcore.driver->createImageFromFile(file);
}

EXPORTC DWORD irrvid_createimage(int format,int w,int h)
{
	return (DWORD)irrcore.driver->createImage((video::ECOLOR_FORMAT)format,core::dimension2d<u32>(w,h));
}

EXPORTC DWORD irrvid_createimagecopy(int format,video::IImage* image)
{
	return (DWORD)irrcore.driver->createImage((video::ECOLOR_FORMAT)format,image);
}

EXPORTC DWORD irrvid_creatimagefromimage(video::IImage* image,
	int posx,int posy,int w,int h)
{
	return (DWORD)irrcore.driver->createImage(image,
		core::position2d<s32>(posx,posy),
		core::dimension2d<u32>(w,h));
}

EXPORTC DWORD irrvid_creatimagefromtexture(video::ITexture* texture,
	int posx,int posy,int w,int h)
{
	return (DWORD)irrcore.driver->createImage(texture,
		core::position2d<s32>(posx,posy),
		core::dimension2d<u32>(w,h));
}

EXPORTC void irrvid_clearzbuffer()
{
	irrcore.driver->clearZBuffer();
}

EXPORTC DWORD irrvid_createscreenshot()
{
	return (DWORD)irrcore.driver->createScreenShot();
}

EXPORTC DWORD irrvid_getmaxtexturesize()
{
	return (DWORD)irrcore.driver->getMaxTextureSize().Width;
}
