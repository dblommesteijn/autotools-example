# Autotools Example

This repo contains a sample project with the Makefile.am and configure.ac files with content to construct a shared and static library for C++ (Linux and OSX).


## Installation

**Clone repo**

```bash
git clone git@github.com:dblommesteijn/autotools-example.git
cd autotools-example
```

**Configuration**

Constructing configuration and Makefiles

```bash
autoreconf -vfi
./configure
```

**Compiling/ Linking**

Compile and install the library to the OS defaults (`/usr/local/lib` and `/usr/local/include`)

```bash
sudo make install
```


## Using Lib

Including the created library with your project. 

*NOTE: you have to install the library before headers can be found, and linking can be done*

**C++ code snippet**

*This example can be found in `example/`.*

```cpp
#include <toollib.h>
int main(int args, char** argv) {
	toollib("I'm using toollib!!");	
	return 0;
}
```

**Compile with clang**

Assuming the library is installed at the OS default location, otherwise you have to provide flags -I and -L accordingly.

```bash
clang++ -Wall -std=c++11 -O3 -fPIC -c main.cpp
clang++ main.o -o main -lautotools
./main
```

## Removing Clutter

You have to become root to cleanup, because `sudo make install` generates `src/.libs/*`.

```bash
sudo sh cleanup.sh
```

## Uninstalling Library

```bash
sudo make uninstall
```

