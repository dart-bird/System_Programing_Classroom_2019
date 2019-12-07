#include "data.h"
#include <string.h>
// https://www.learn-c.org/en/Linked_lists
int cnt = 0;

void Registration() {
    struct contactData* tmp = (struct contactData*)malloc(sizeof(struct contactData));
    tmp-> name = (char*)malloc(sizeof(char)*21);
    tmp-> phoneNumber = (char*)malloc(sizeof(char)*16);
    tmp-> birth = (char*)malloc(sizeof(char)*9);
    struct contactData* curr = data;
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
    struct contactData* curr = data->next;
    while(curr != NULL){
        printf("%s %s %s\n", curr->name, curr->phoneNumber, curr->birth);
        curr = curr->next;
    }
}

void Delete() {
    char *inputStr = (char*)malloc(sizeof(char)*21);
    printf("Name:");
    scanf("%s",inputStr);
    struct contactData* curr = data->next;
    while (curr != NULL){
        printf("%s", curr->name);
        if(strcmp(curr->name, inputStr)==0){ //처음 삭제
            struct contactData* targetData = data->next;
            data->next = targetData->next;
            free(targetData);
            cnt--;
            break;
        }
        if(strcmp(curr->next->name, inputStr)==0){ //중간 후반 삭제
            struct contactData* targetData = curr->next;
            curr->next = targetData->next;
            free(targetData);
            cnt--;
            break;
        } else {
            printf("No record founded.\n");
            break;
        }
        curr = curr->next;
    }
}

void FindByBirth() {

}

