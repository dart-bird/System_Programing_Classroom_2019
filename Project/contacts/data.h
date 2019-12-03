#ifndef DATA_H
#define DATA_H
typedef struct contactData {
  char *name;
  char *phoneNumber;
  char *birth;
  struct contactData *next; //next contactData node
}contactData;
//struct ContactData **Data;
void Registration(contactData *contactdata);
#endif