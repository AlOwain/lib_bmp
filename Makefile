all: debug

# Options

lib: clean build build/lib_bmp.a bmp

debug: build build/debug bmp

build:
	mkdir -p build

clean:
	rm -rf build/

# Linking

build/lib_bmp.a: build/bmp.o build/bmp_read.o build/color.o
	ar rcs build/lib_bmp.a build/bmp.o build/bmp_read.o build/color.o

build/debug: build/debug.o bmp
	g++ build/debug.o build/bmp.o build/bmp_read.o build/color.o -o build/debug

# Debug

build/debug.o: src/debug.cpp
	g++ -c src/debug.cpp -o build/debug.o

# BMP

bmp: build/bmp.o build/bmp_read.o build/color.o

build/bmp.o: src/bmp/bmp.cpp
	g++ -c src/bmp/bmp.cpp -o build/bmp.o

build/bmp_read.o: src/bmp/bmp_read.cpp
	g++ -c src/bmp/bmp_read.cpp -o build/bmp_read.o

build/color.o: src/color/color.cpp src/color/color.h
	g++ -c src/color/color.cpp -o build/color.o

