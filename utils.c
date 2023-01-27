#include <stdio.h>

#include "utils.h"

void print_memory_le(void *data, int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%02x ", ((unsigned char *)data)[i]);
    }
    printf("\n");
}

void print_memory(void *data, int size) {
    for (int i = 0; i < size; i++) {
        printf("%02x ", ((unsigned char *)data)[i]);
    }
    printf("\n");
}
