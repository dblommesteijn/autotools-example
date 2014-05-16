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

**C++ code snippet**

```cpp
#include <toollib.h>
int main(int args, char** argv) {
	toollib("I'm using toollib!!");	
	return 0;
}
```

**Compile with clang**

```bash
clang++ -Wall -std=c++11 -gdwarf-2 -fPIC -I/usr/local/include -c main.cpp
clang++ -L/usr/local/lib main.o -o main -lautotools
./main
```




