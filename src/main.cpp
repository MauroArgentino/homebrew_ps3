
// homebrew_ps3.cpp
// Proyecto Homebrew en PSL1GHT v2
// Muestra un menú con fondo musical y puntero en forma de mano

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io/pad.h>
#include <sysmodule/sysmodule.h>
#include <sysutil/sysutil.h>
#include <rsx/rsx.h>
#include <audio/audio.h>
#include "graphics.h"
#include "audio.h"
#include "hand_cursor.h"

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080

void init();
void cleanup();
void render();

int main() {
    init();
    while (1) {
        sysUtilCheckCallback();
        render();
    }
    cleanup();
    return 0;
}

void init() {
    initGraphics(SCREEN_WIDTH, SCREEN_HEIGHT);
    initAudio();
    playBackgroundMusic("/dev_hdd0/game/HOMEBREW/sound/menu.wav");
    loadHandCursorTexture();
}

void render() {
    startFrame();
    drawBackground();
    drawHandCursor();
    endFrame();
}

void cleanup() {
    stopBackgroundMusic();
    shutdownAudio();
    shutdownGraphics();
}
