# Codename: Aardvark

Shell-based program for working with Arduino on the commandline.

[![Supports 46 boards](https://img.shields.io/badge/Boards-46-green.svg)](.models)
[![Supports Linux](https://img.shields.io/badge/platform-Linux-green.svg)](#)
[![Supports macOS](https://img.shields.io/badge/platform-macOS-green.svg)](#)
[![Partially supports Windows](https://img.shields.io/badge/platform-windows-yellow.svg)](#)
[![GitHub license](https://img.shields.io/github/license/shakna-israel/aardvark-.svg)](https://github.com/shakna-israel/aardvark-/blob/master/LICENSE.md)
[![Build Status](https://travis-ci.org/shakna-israel/aardvark-.svg?branch=master)](https://travis-ci.org/shakna-israel/aardvark-)

---

This project is under active development, and may change without warning.

---

# Current Progress

1. avr-gcc can be used to compile.
2. avrdude can be used to flash.
3. The only supported language at the moment is C, GNU99.

It does not yet:

1. Check the file is small enough to be flashed.
2. Check that the variables fit in RAM.
3. The port is accessible.
4. Support other programmers.
5. Support other languages or language extensions.

---

# Install

Currently, Codename: Aardvark runs on macOS and Linux, with [partial support for Windows](#windows).

## Dependencies

Codename: Aardvark relies on several things that need to be installed first:

* The [avr-gcc tools](https://gcc.gnu.org/wiki/avr-gcc). You can usually install it from your package manager.
* [avrdude](http://www.nongnu.org/avrdude/). You can usually install it from your package manager.
* The GNU [coreutils](https://www.gnu.org/software/coreutils/coreutils.html). You usually have them either preinstalled, or easily installable from your package manager.
* [Make](https://www.gnu.org/software/make/), for installation only. You can usually acquire it from your package manager.

## Install

The included Makefile will allow you to install it:

```
sudo make install
```

There is no configure step.

To uninstall:

```
sudo make uninstall
```

You can optionally supply a PREFIX to make to change the install location, but review the *very* simple [Makefile](Makefile) first to make sure you know what you're doing.

---

# Usage

The most up to date information can always be found by running:

```
> aardvark --help
```

What follows are some more in-depth examples.

## Compiling and Uploading to a device

```
aardvark build 'Arduino Uno' ttyUSB main.c
```

Will compile and upload a file called ```main.c``` onto /dev/ttyUSB, with the normal architecture options for an Arduino Uno-compatible board.

## Compiling an Intel Hex file:

```
aardvark compile 'Arduino Uno' main.c dump
```

Will produce dump.ihex, from a file called ```main.c```.

## Uploading a Hex file:

```
aardvark flash 'Arduino Uno' ttyUSB main
```

Will upload a file named ```main.ihex``` to /dev/ttyUSB, assuming that it speaks the same speed as an Arduino Uno-compatible board.

---

# Windows

It *may* work under Cygwin or the Linux Subsystem for Windows, but no guarantees.

The issue will likely happen if aardvark can't grab control of a port (e.g. /dev/USB0), because Windows has locked it.

Results are... Inconsistent.

However, the Linux Subsystem seems to work *much* less often.

I reccomend Cygwin, despite its flaws.

However, I may not be able to supply support for Windows, as I don't use it on a regular basis.

---

# License

The full license information can be found at [LICENSE.md](LICENSE.md).

It is, at time of writing, under an MIT license, however a more liberal license may be chosen in the near future.
