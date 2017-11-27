# U82g-mbed
using u8g2 lib: https://github.com/olikraus/u8g2

### Generating new fonts
On unix, first install `ftview` and `otf2bdf`:
`sudo apt-get install freetype2-demos`
`sudo apt-get install otf2bdf`

then follow the instructions on this wiki:
https://github.com/olikraus/dogm128/wiki/fonts

Q: How can I generate my own font.
A: The font must be available in bdf file format. Then use bdfconv to generate
the font data. The font data can be pasted into an existing file of your project.

Q: Which commandline options are required for bdfconv?
A: "bdfconv -f 1 -m '32-255' -n fontname -o myfont.c myfont.bdf"
"-f 1" generates a u8g2 font.
"-m '32-255'" selects unicode 32 to 255. On Windows, please use double quotes: -m "32-255"
"-n fontname": This is the name of the font in C/C++/Ino files.
"-o myfont.c": The font array will be stored in this file.
"myfont.bdf": The input file with the font data (bdf format).

First preview the font:
`ftview -r 149 12 font.ttf`
Turn off aliasing, and check that hinting is turned on

Export font to BDF:
`otf2bdf -p 12 -r 149 -o newFontName.bdf sourceFontName.ttf`

Convert BDF file to a c-file:
`bdf2dogm `

### Installing st-link tools
https://github.com/texane/stlink
