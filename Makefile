# Makefile para compilar el Homebrew en PSL1GHT v2

TARGET_ELF = homebrew_ps3.elf
TARGET_SELF = homebrew_ps3.self

PS3DEV = /opt/ps3dev
PSL1GHT = $(PS3DEV)
PORTLIBS = $(PS3DEV)/portlibs

CC = ppu-gcc
CXX = ppu-g++

# Rutas a los headers de PSL1GHT
CFLAGS = -I$(PSL1GHT)/spu/include -I$(PSL1GHT)/ppu/include -I$(PSL1GHT)/ppu/include/rsx -I$(PORTLIBS)/ppu/include -O2
LDFLAGS = -L$(PS3DEV)/ppu/lib -L$(PORTLIBS)/ppu/lib -L$(PS3DEV)/spu/lib

LIBS = -lrsx -laudio -lsysutil

# Busca todos los archivos .cpp en src/ y los convierte en .o
SRC = $(wildcard src/*.cpp)
OBJS = $(SRC:.cpp=.o)

all: $(TARGET_SELF)

$(TARGET_ELF): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $(OBJS) $(LIBS)

$(TARGET_SELF): $(TARGET_ELF)
	make_self $< $@

%.o: %.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(TARGET_ELF) $(TARGET_SELF)
