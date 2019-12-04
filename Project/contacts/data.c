#include "data.h"

void Registration() {

    struct contactData *newcontact;
    newcontact = (struct contactData*)malloc(sizeof(struct contactData));
    
    newcontact-> name = (char*)malloc(sizeof(char)*21);
    newcontact-> phoneNumber = (char*)malloc(sizeof(char)*16);
    newcontact-> birth = (char*)malloc(sizeof(char)*9);
    // if ((*data) != NULL) newcontact -> next = data[0];
    // else newcontact -> next = NULL;
    // data = &newcontact;
    printf("Name:");
    scanf("%s",newcontact->name);

    printf("Phone_number:");
    scanf("%s",newcontact->phoneNumber);

    printf("Birth:");
    scanf("%s",newcontact->birth);

    newcontact->next = (*data)->next;
    (*data)->next = newcontact;
    
    struct contactData *curr = (*data)->next;
    while(curr != NULL){
        printf("%s", curr->name);
        printf("%s", curr->phoneNumber);
        printf("%s", curr->birth);
        curr = curr->next;
    }
    
    // struct contactData *curr = *(data);
    // int cnt = 0;
    // while(curr != NULL){
    //     printf("%s\n", curr->name);
    //     cnt++;
    //     curr = curr->next;
    // }
    // printf("count: %d\n", cnt);
}

void ShowAll() {
    // if (data == NULL) printf("Nothing to show.\n");
    // else{
    //     struct contactData* curr= data[0];
    //     while(curr != NULL){
    //         printf("%s\n", curr->name);
    //         curr = curr->next;
    //     }
    // }
}

void Delete() {
    
}

void FindByBirth() {

}

