### Original README

Freeciv
=======

[![Build Status](https://github.com/freeciv/freeciv/workflows/continuous%20integration/badge.svg)](https://github.com/freeciv/freeciv/actions?query=workflow%3A%22continuous+integration%22)
[![License: GPL v2](https://img.shields.io/badge/License-GPL%20v2-blue.svg)](https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html)

Freeciv is a Free and Open Source empire-building strategy game inspired by the history of human civilization.

Please see the [doc](doc) directory for a complete list of documentation files.

Links
=====
Freeciv website: [Freeciv.org](https://www.freeciv.org/)

Submit patches: [redmine.freeciv.org](https://redmine.freeciv.org/projects/freeciv)

Community forum: [forum.freeciv.org](https://forum.freeciv.org/)




0. Add the following lines at the end of the `.gitignore` file:

```
# Specific additions for macOS version
!freeciv-app/lib/*.a
!freeciv-app/lib/*.la
```

1. Install the following packages with `homebrew`
```
$ brew install autoconf automake
$ brew install icu4c
$ brew install sdl2 sdl2_image sdl2_ttf sdl2_gfx
$ brew install gtk+3
$ brew install llvm libomp
```

2. Open the Terminal and set the `PKG_CONFIG_PATH` to  
```
export PKG_CONFIG_PATH=/usr/local/opt/icu4c/lib/pkgconfig:$PKG_CONFIG_PATH
```

For an Apple Silicon Mac, the line becomes
```
export PKG_CONFIG_PATH="/opt/homebrew/opt/icu4c@77/lib/pkgconfig"
```

3. For compilers to find icu4c@77 you may need to set:
```
export LDFLAGS="-L/opt/homebrew/opt/icu4c@77/lib"
export CPPFLAGS="-I/opt/homebrew/opt/icu4c@77/include"
```
(for an Intel Mac, change the lines above replacing `/opt/homebrew` with `/usr/local`)

4. Use the `homebrew` `llvm` compiler
```
export CC=/opt/homebrew/opt/llvm/bin/clang
export CXX=/opt/homebrew/opt/llvm/bin/clang++
```

5. Edit the file `autogen.sh` and change line \#16  
from 
```
FC_RUN_CONFIGURE=yes
```  
to
```
FC_RUN_CONFIGURE=no
```

~~change also line \#240~~  
~~from  `real_package_name "libtoolize"  "ftp://ftp.gnu.org/pub/gnu/libtool/" 2 2 || DIE=1`~~  
~~to `real_package_name "glibtoolize" "ftp://ftp.gnu.org/pub/gnu/libtool/" 2 2 || DIE=1`~~  

5. Create build directory and work within it
```
$ mkdir build
$ cd build
```

6. From the Terminal, run freeciv's `../autogen.sh` script.

7. If `autogen.sh` ends without errors, run `../configure` with the following options

```
../configure --prefix=$HOME/Applications/freeciv-mac/freeciv-app --enable-client=auto --enable-freeciv-manual --enable-mapimg=auto --enable-debug=no --enable-static=no --enable-ack-legacy
```

8. When the configuration script ends, run `make` to compile freeciv, and then run `make install` to install the freeciv binaries in the `freeciv-app` directory.


### How to clean and start again

From the Terminal, run
```
rm -r freeciv-app
make distclean
```


### How to bundle Freeciv for macOS

1. Copy the `data` directory from the root freeciv directory to the installation directory
```
cd ..
cp -p -r data ./freeciv-app
```

TODO ...
