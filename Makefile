# Makefile para compilar el Homebrew en PSL1GHT v2

TARGET = homebrew_ps3.elf
OBJS = src/main.o src/graphics.o src/audio.o

LIBS = -lrsx -laudio -lsysutil

CC = ppu-gcc
CXX = ppu-g++
CFLAGS = -Iinclude -O2
LDFLAGS =

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $(OBJS) $(LIBS)

%.o: %.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(TARGET)
