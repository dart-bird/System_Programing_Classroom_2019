#include "data.h"
#include <string.h>

// https://www.learn-c.org/en/Linked_lists
int cnt = 0;
int chkRecord = 0;

void Registration() {
    struct contactData* tmp_ = (struct contactData*)malloc(sizeof(struct contactData));
    tmp_-> name = (char*)malloc(sizeof(char)*21);
    tmp_-> phoneNumber = (char*)malloc(sizeof(char)*16);
    tmp_-> birth = (char*)malloc(sizeof(char)*9);
    struct contactData* curr = data;
    printf("Name:");
    scanf("%s",tmp_->name);
        
    printf("Phone_number:");
    scanf("%s",(tmp_->phoneNumber));

    printf("Birth:");
    scanf("%s",(tmp_->birth));

    if(cnt == 0){
        curr->next = tmp_;
        tmp_->next = NULL; //빈 노드를 연결합니다.
    } else {
        int chk = 0;
        while(curr->next != NULL){
            if(strcmp(tmp_->name, curr->next->name)<0){ //입력한 이름이 현재 있는 이름보다 클경우 뒤로 감.
                struct contactData* save = curr->next;
                curr->next = tmp_;
                tmp_->next = save;
                chk = 1;
                break;
            }   
            curr = curr->next;
        }
        if (chk == 0) curr->next = tmp_;
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
    struct contactData* curr = data;
    while (curr != NULL){
        if(curr == data){//head 부분 null-1-2-3-null
            if(strcmp(curr->next->name, inputStr) == 0){
                chkRecord = 1;
                struct contactData* targetData = curr->next;
                curr->next = targetData->next;
                free(targetData);
                cnt--;
                break;
            }
        }
        else if(curr->next == NULL){//tail
            if(strcmp(curr->name, inputStr) == 0){
                chkRecord = 1;
                struct contactData* targetData = curr->next;
                curr = targetData;
                free(targetData);
                cnt--;
                break;
            }
        }
        else if(curr != NULL) {
            if(strcmp(curr->next->name, inputStr) == 0){
                chkRecord = 1;
                struct contactData* targetData = curr->next;
                curr->next = targetData->next;
                free(targetData);
                cnt--;
                break;
            }
        }
        curr = curr->next;
    }
    if(chkRecord == 0) {
      printf("No record founded.\n");

    } else chkRecord = 0;
}

void FindByBirth() {
    char *str = (char*)malloc(sizeof(char)*10);
    printf("Birth:");
    scanf("%s",str);
    struct contactData* curr = data->next;
    while(curr != NULL){
        if(curr->birth[4] == str[0] && str[1] == curr->birth[5] ){
          printf("%s %s %s\n", curr->name, curr->phoneNumber, curr->birth);
          curr = curr->next;
        }
        else if(curr->birth[4] == '0' && str[0] == curr->birth[5] ){
          printf("%s %s %s\n", curr->name, curr->phoneNumber, curr->birth);
          curr = curr->next;
        }
        else if(curr->birth[4] == '1' && str[0] == curr->birth[4] && str[1] == curr->birth[5]){
            printf("%s %s %s\n", curr->name, curr->phoneNumber, curr->birth);
            curr = curr->next;
        } else curr = curr->next; 
    }
}
void ReadFile(){

    FILE *pFile = NULL;

	pFile = fopen("contactslist.jwdata", "r");
	if(pFile != NULL){
		while(!feof(pFile)){
            struct contactData* tmp_ = (struct contactData*)malloc(sizeof(struct contactData));
            tmp_-> name = (char*)malloc(sizeof(char)*21);
            tmp_-> phoneNumber = (char*)malloc(sizeof(char)*16);
            tmp_-> birth = (char*)malloc(sizeof(char)*9);

            static int cnt_ = 0;
            int chk = fscanf( pFile, "%s %s %s\n", tmp_->name, tmp_->phoneNumber, tmp_->birth );
            if(chk == -1) break;
            cnt_++;

            struct contactData* curr = data;

            if(cnt == 0){
                curr->next = tmp_;
                tmp_->next = NULL; //빈 노드를 연결합니다.
            } else {
                int chk = 0;
                while(curr->next != NULL){
                    if(strcmp(tmp_->name, curr->next->name)<0){ //입력한 이름이 현재 있는 이름보다 클경우 뒤로 감.
                        struct contactData* save = curr->next;
                        curr->next = tmp_;
                        tmp_->next = save;
                        chk = 1;
                        break;
                    }   
                    curr = curr->next;
                }
                if (chk == 0) curr->next = tmp_;
            }
            cnt++;
        }
		fclose(pFile);
	} else {
        printf("No contacts data\nCheck file direction.\n");
    }
}

void WriteFile(){
    FILE *fp = fopen("contactslist.jwdata", "w");    // hello.txt 파일을 쓰기 모드(w)로 열기.
                                           // 파일 포인터를 반환

    struct contactData* curr = data->next;
    while(curr != NULL){
        fputs(curr->name, fp);   // 파일에 문자열 저장
        fputs(" ",fp);
        fputs(curr->phoneNumber, fp);   // 파일에 문자열 저장
        fputs(" ",fp);
        fputs(curr->birth, fp);   // 파일에 문자열 저장
        fputs("\n",fp);
        curr = curr->next;
    }

    fclose(fp);    // 파일 포인터 닫기
}
