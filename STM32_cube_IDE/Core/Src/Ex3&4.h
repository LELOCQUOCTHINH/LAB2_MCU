#ifndef EX3_H
#define EX3_H

#include "main.h"
#include "Display7Seg.h"
extern const int MAX_LED;
extern int led_buffer [4];

void update7SEG ( int index );
void Ex3_set();
void Ex3_run();
void Ex3_time();
#endif
