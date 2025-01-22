# OpenglIntro

## Table of content
* [Requirement](#Requirement)
    * [GLFW3](#GLFW3)
* [Build](#Build)
    * [Exception](#Exception)

## Requirement 

### GLFW3 

Download sources from the [GLFW website](https://www.glfw.org/download.html)
```
# Unzip the archive
unzip ~/Downloads/glfw-*.zip ./lib/
cd ./lib/glfw-*/

# Créer un dossier de build et compiler
mkdir build && cd build
cmake ..
make -j$(nproc)

# Installer GLFW sur le système
sudo make install
cd ../../../
```



## Build

To build this project, run this command : 
```
make
```

### Exception

If the build failed because the file `GLFW3Config.cmake` was not found. Run this command : 
```
sudo mv glfw3Config.cmake GLFW3Config.cmake
```
