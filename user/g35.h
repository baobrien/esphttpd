//Quick-and-dirty ESP8266 G35

/*
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * Brady O'Brien <brady.obrien666@gmail.com> wrote this file. As long as you retain 
 * this notice you can do whatever you want with this stuff. If we meet some day, 
 * and you think this stuff is worth it, you can buy me a beer in return. 
 * ----------------------------------------------------------------------------
 */

#ifndef __GE35_H
#define __GE35_H
#include "espmissingincludes.h"
#include "c_types.h"
#include "user_interface.h"
#include "espconn.h"
#include "mem.h"
#include "osapi.h"
#include "gpio.h"

typedef struct {
	void (*g35_pattern_ticker)(int);
	int enabled;
	char name[32];
} g35_pattern;

typedef struct {
	char r;
	char g;
	char b;
} g35_color;

void g35_init(int len);
void set_cur_pattern(int pattern);
void set_rotate_pattern(int rotate);
void g35_sendframe(char addr,char br,char r,char g,char b);
void g35_pattern_blank(int);
void g35_pattern_wipefill(int);
g35_pattern * get_patterns();
int get_cur_pattern();
void g35_csendframe(char addr,char br,g35_color c);

#endif
