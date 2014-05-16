autotools-example
=================

Example how to use autoconf and automake



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

Compile and install the library to the `/usr/local/lib` defaults

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




