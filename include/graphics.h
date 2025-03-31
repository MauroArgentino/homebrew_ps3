
// graphics.h - Declaraciones de funciones para manejo de gráficos

#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <ppu-types.h>

void initGraphics(int width, int height);
void startFrame();
void endFrame();
void drawBackground();
void drawHandCursor();
void shutdownGraphics();

#endif
