all: build/lib_bmp.a

build/lib_bmp.a: build/bmp.o build/bmp_read.o build/color.o
	ar rcs build/lib_bmp.a build/bmp.o build/bmp_read.o build/color.o

build/bmp.o: | build
	g++ -c src/bmp.cpp -o build/bmp.o

build/bmp_read.o:
	g++ -c src/bmp_read.cpp -o build/bmp_read.o

build/color.o:
	g++ -c src/color/color.cpp -o build/color.o

build:
	mkdir -p build

clean:
	rm -rf build/
