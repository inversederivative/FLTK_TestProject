### FLTK Test Project

The Fast Light Toolkit (FullTick) is a simple and portable library to be used for creating graphics applications in C++.
The name says it all, it's supposed to be easy to setup, statically linked executables don't produce huge files, and 
just works.

---

### Introduction

This project is meant to be a simple exercise in building a window. 

---

### Preparation

Before building this project, you will need to download the FLTK source from [here](https://www.fltk.org/software.php). 
Once it's downloaded, simply create a folder called build, and run cmake from that directory. I.e.:

    mkdir build

    cd build

    cmake -G "MinGW Makefiles" ..

After the project is configured run:

    mingw32-make

At this point, the project should be built, with no errors, and in the build directory, there should be a 
FLTKConfig.cmake file. With this, the stuff in CMakeLists.txt should work.

Also, note that there is a manual mapping of FLTK_DIR in the set function above find_package in source/CMakeLists.txt. 
In your project you will need to update this line, so that it matches wherever you have installed FLTK.


---

