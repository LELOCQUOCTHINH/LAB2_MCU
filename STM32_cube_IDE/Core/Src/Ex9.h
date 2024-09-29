#ifndef EX9_H
#define EX9_H

#include "main.h"

#define HIGH 1
#define LOW 0

void updateLEDMatrix(int index);
void swap_index(uint8_t *arr, int index_1, int index_2); //swap data at index1 and index2
void clearLEDMatrix();
void Ex9_set();
void Ex9_run();
void Ex9_time();

#endif
