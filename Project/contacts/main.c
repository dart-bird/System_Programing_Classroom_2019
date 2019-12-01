#include <stdio.h>
#include <stdlib.h>

int menu();
void Registration();
void ShowAll();
void Delete();
void FindByBirth();

int main(){
    
    while (menu()){ //0을 받으면 종료되는 형태 exit_code 값
        menu();

    }
    
    return 0;
}

int menu() {
    static int exit_code = 1;
    static int menu_num;
    puts("*****Menu*****");
        puts("1. Registration, 2. ShowAll, 3. Delete, 4. FindByBirth, 5. Exit");
        printf("Enter_the_menu_number: ");
        fflush(stdin); //remove enter buffer
        scanf("%d",&menu_num);
        //fflush(stdin); //remove enter buffer
        switch (menu_num){
            case 1: //1. Registration
                printf("this menu %d\n",menu_num);
                Registration();
                break;
            case 2: //2. ShowAll
                printf("this menu %d\n",menu_num);
                break;
            case 3: //3. Delete
                printf("this menu %d\n",menu_num);
                break;
            case 4: //4. FindByBirth
                printf("this menu %d\n",menu_num);
                break;
            case 5: //5. Exit
                exit_code = 0; // 종료 조건 변수에 1
                printf("this menu %d\n",menu_num);
                puts("Bye");
                break;
    }
    return exit_code;
}

void Registration() {
    char *nameStr = (char*)malloc(sizeof(char) * 21); //1bytes for'/0'
    char *phoneStr = (char*)malloc(sizeof(char) * 18); //3bytes for '-'
    char *birthStr = (char*)malloc(sizeof(char) * 8);
    int a;
    scanf("%d", &a); //정수 입력은 되는데 string 입력은 안됨. ??
    scanf("Name:%s ",nameStr);
    scanf("Phone_number:%s",phoneStr);
    scanf("Birth:%s",birthStr);
    printf("Name: %s", nameStr);
    printf("Phone_number: %s", phoneStr);
    printf("Birth: %s\n", birthStr);
}

void ShowAll() {

}

void Delete() {

}

void FindByBirth() {

}