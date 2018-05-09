# Codename: Aardvark

Shell-based program for working with Arduino on the commandline.

![Supports Linux](https://img.shields.io/badge/platform-Linux-green.svg)
![Supports macOS](https://img.shields.io/badge/platform-macOS-green.svg
[![GitHub license](https://img.shields.io/github/license/shakna-israel/aardvark-.svg)](https://github.com/shakna-israel/aardvark-/blob/master/LICENSE.md)

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

Currently, Codename: Aardvark runs on macOS and Linux.

It *may* work under Cygwin or the Linux Subsystem for Windows, but no guarantees.

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

# License

The full license information can be found at [LICENSE.md](LICENSE.md).

It is, at time of writing, under an MIT license, however a more liberal license may be chosen in the near future.
