#include "data.h"
#include <string.h>
// https://www.learn-c.org/en/Linked_lists
int cnt = 0;
void Registration() {
    struct contactData* tmp = (struct contactData*)malloc(sizeof(struct contactData));
    tmp-> name = (char*)malloc(sizeof(char)*21);
    tmp-> phoneNumber = (char*)malloc(sizeof(char)*16);
    tmp-> birth = (char*)malloc(sizeof(char)*9);
    struct contactData* curr = data[0];
    printf("Name:");
    scanf("%s",tmp->name);
        
    printf("Phone_number:");
    scanf("%s",(tmp->phoneNumber));

    printf("Birth:");
    scanf("%s",(tmp->birth));

    if(cnt == 0){
        curr->next = tmp;
        tmp->next = NULL; //빈 노드를 연결합니다.
    } else {
        int chk = 0;
        while(curr->next != NULL){
            if(strcmp(tmp->name, curr->next->name)<0){ //입력한 이름이 현재 있는 이름보다 클경우 뒤로 감.
                struct contactData* save = curr->next;
                curr->next = tmp;
                tmp->next = save;
                chk = 1;
                break;
            }
            curr = curr->next;
        }
        if (chk == 0) curr->next = tmp;
    }
    cnt++;
    printf("Count: %d\n", cnt);
}

void ShowAll() {
    struct contactData* curr = data[0]->next;
    while(curr != NULL){
        printf("%s %s %s\n", curr->name, curr->phoneNumber, curr->birth);
        curr = curr->next;
    }
}

void Delete() {
    char *inputStr = (char*)malloc(sizeof(char)*21);
    printf("Name:");
    scanf("%s",inputStr);
    struct contactData* curr = data[0]->next;
    if (curr == NULL) printf("No record founded.\n");
    
    while (curr != NULL){
        if (cnt==1 && strcmp(inputStr,data[0]->name))
        {
            struct contactData* rContactData = data[0]->next;
            data[0]->next=rContactData->next;
            free(rContactData);
            cnt--;
            break;
        }
        
        if(strcmp(inputStr, curr->name)){
            if(curr == NULL) break;
            struct contactData* rContactData = curr->next;
            if(rContactData==NULL) break;
            curr->next=rContactData->next;
            free(rContactData);
            cnt--;
            break;
        } else printf("No record founded.\n");
        curr = curr->next;
    }
}

void FindByBirth() {

}

