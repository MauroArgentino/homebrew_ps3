// logger.cpp - Manejo de logs para depuración
#include "../include/logger.h"
#include <stdio.h>

void logMessage(const char *msg) {
    FILE *file = fopen("/dev_hdd0/tmp/homebrew_log.txt", "a");
    if (file) {
        fprintf(file, "%s\n", msg);
        fclose(file);
    }
}
