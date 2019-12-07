#ifndef DATA_H
#define DATA_H
#include <stdio.h>
#include <stdlib.h>
struct contactData {
  char *name;
  char *phoneNumber;
  char *birth;
  struct contactData *next; //next contactData node
};
struct contactData *data;
void Registration();
void ShowAll();
void Delete();
void FindByBirth();
void ReadFile();
void WriteFile();
#endif