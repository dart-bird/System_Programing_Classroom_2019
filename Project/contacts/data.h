#include <stdio.h>
#include <stdlib.h>

#ifndef DATA_H
#define DATA_H

struct contactData {
  char *name;
  char *phoneNumber;
  char *birth;
  struct contactData *next; //next contactData node
};

struct contactData **data;

void(*func_p(const int opCode))();

void Registration();
void ShowAll();
void Delete();
void FindByBirth();

#endif