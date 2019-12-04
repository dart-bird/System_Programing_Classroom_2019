#include "data.h"

void Registration() {
    struct contactData* tmp = (struct contactData*)malloc(sizeof(struct contactData));
    tmp-> name = (char*)malloc(sizeof(char)*21);
    tmp-> phoneNumber = (char*)malloc(sizeof(char)*16);
    tmp-> birth = (char*)malloc(sizeof(char)*9);
    if ((*data) != NULL) tmp -> next = data[0];
    else tmp -> next = NULL;
    data = &tmp;
    printf("Name:");
    scanf("%s",tmp->name);

    printf("Phone_number:");
    scanf("%s",tmp->phoneNumber);

    printf("Birth:");
    scanf("%s",tmp->birth);
    
    struct contactData* curr = *(data);
    int cnt = 0;
    while(curr != NULL){
        printf("%s\n", curr->name);
        cnt++;
        curr = curr->next;
    }
    printf("count: %d\n", cnt);
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

