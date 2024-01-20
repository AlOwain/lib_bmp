all: debug

# BMP

BMP := build/bmp.o build/bmp_read.o build/color.o

build/bmp.o: src/bmp/bmp.cpp
	g++ -c $^ -o $@

build/bmp_read.o: src/bmp/bmp_read.cpp
	g++ -c $^ -o $@

build/color.o: src/color/color.cpp
	g++ -c $^ -o $@

# Phonies

.PHONY: all clean lib debug

lib: build build/lib_bmp.a

debug: build build/debug

build:
	mkdir -p build

clean:
	rm -rf build/

# Linking

build/lib_bmp.a: $(BMP)
	ar rcs $@ $^

# Debug

build/debug: build/debug.o $(BMP)
	g++ $^ -o $@

build/debug.o: src/debug.cpp
	g++ -c $^ -o $@
