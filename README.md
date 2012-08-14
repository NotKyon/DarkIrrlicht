DarkIrrlicht
============

Irrlicht for Dark Basic Pro. Now you can use the high performance Irrlicht
rendering engine for your Dark Basic Professional games or applications!

This was being developed solely by WLGfx. Due to time constraints, this project
has been open sourced so anyone can advance it as necessary.

Quick instructions on setting up:

1. Grab Microsoft Visual Studio 2010 C++ Express

2. Grab the DirectX SDK (August 2007)
   You will need to add this to your global includes.
   See: http://clanlib.org/wiki/VisualStudio2010GlobalIncludes

3. To re-compile the irrlicht to a static library, load up the solution file in
   the Irrlicht source directory and set the output to a 'release' format of
   your choice. I prefer Release-Fast-FPU for that extra speed boost.
	
4. For the DarkIrrlicht source code, compile using the 'release' settings. You
   will also have to set the directories for the include directories and the
   library directories. There's two for each, these need to be directed to the
   DBPro directory and to the Irrlicht directory.
   
Hope this helps... Carl
