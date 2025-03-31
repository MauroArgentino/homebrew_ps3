// graphics.cpp - Manejo de gráficos con RSX

#include "../include/graphics.h"
#include <rsx/rsx.h>
#include <rsx/gcm_sys.h>
#include <sys/memory.h>
#include <sysutil/video.h>
#include <stdlib.h>
#include <string.h>

#define HOST_BUFFER_SIZE (0x100000)

static void *host_addr = NULL;
static gcmContextData *context = NULL;
static u32 *frameBuffer = NULL;
static u32 frameBufferOffset;

void initGraphics(int width, int height) {
    // host_addr = memalign(1024*1024, HOST_BUFFER_SIZE);
    // context = rsxInit(HOST_BUFFER_SIZE, HOST_BUFFER_SIZE, host_addr);
    // if (!context) {
    //     return;
    // }

    // frameBuffer = (u32*)rsxMemalign(16, width * height * 4);
    // rsxAddressToOffset(frameBuffer, &frameBufferOffset);
    // rsxSetWriteBackendLabel(context, GCM_LABEL_INDEX, 1);
    // gcmSetFlipMode(GCM_FLIP_VSYNC);

    // gcmSurface sf;
    // memset(&sf, 0, sizeof(gcmSurface));
    // sf.colorFormat = GCM_TF_COLOR_X8R8G8B8;
    // sf.colorTarget = GCM_TF_TARGET_0;
    // sf.colorLocation[0] = GCM_LOCATION_RSX;
    // sf.colorOffset[0] = frameBufferOffset;
    // sf.colorPitch[0] = width * 4;
    // sf.width = width;
    // sf.height = height;
    // sf.x = 0;
    // sf.y = 0;
    // rsxSetSurface(context, &sf);
}

void startFrame() {
    // rsxSetClearColor(0x203040FF);
    // rsxClear(context, GCM_CLEAR_COLOR | GCM_CLEAR_DEPTH);
}

void endFrame() {
    // rsxFlushBuffer(context);
    // gcmSetFlip(context, 0);
    // rsxFinish(context);
}

void drawBackground() {
    // rsxSetClearColor(0x203040FF); 
    // rsxClear(context, GCM_CLEAR_COLOR | GCM_CLEAR_DEPTH);
}

void drawHandCursor() {
    // rsxSetClearColor(0x203040FF); 
    // rsxClear(context, GCM_CLEAR_COLOR | GCM_CLEAR_DEPTH);
}

void shutdownGraphics() {
    // if (frameBuffer) {
    //     rsxFree(frameBuffer);
    // }
    // if (context) {
    //     rsxFinish(context);
    // }
}