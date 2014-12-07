#ifndef CGI_H
#define CGI_H

#include "httpd.h"

int cgiLed(HttpdConnData *connData);
void tplLed(HttpdConnData *connData, char *token, void **arg);
int cgiReadFlash(HttpdConnData *connData);
int cgi_g35_led(HttpdConnData *connData);
int cgi_g35_pattern(HttpdConnData *connData);
void tplCounter(HttpdConnData *connData, char *token, void **arg);
void tpl_g35_json(HttpdConnData *connData, char *token, void **arg);

#endif
