#include <stdio.h>
#include <stdlib.h>
#include "data.h"

void Registration(contactData *contactdata) {
    contactdata -> name = (char*)malloc(sizeof(char)*20);
    contactdata -> phoneNumber = (char*)malloc(sizeof(char*)*15);
    contactdata -> birth = (char*)malloc(sizeof(char)*8);

    printf("Name:");
    scanf("%s",contactdata -> name);

    printf("Phone_number:");
    scanf("%s",contactdata -> phoneNumber);

    printf("Birth:");
    scanf("%s",contactdata -> birth);

    printf("Name: %s", contactdata->name);
    printf("Phone_number: %s", contactdata->phoneNumber);
    printf("Birth: %s\n", contactdata->birth);
}

void ShowAll() {

}

void Delete() {

}

void FindByBirth() {

}