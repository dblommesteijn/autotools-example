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


