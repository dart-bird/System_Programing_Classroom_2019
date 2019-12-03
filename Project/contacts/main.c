#include <stdio.h>
#include <stdlib.h>

#include "func.h"
#include "data.h"

int menu();

contactData cad; //init C ont A ct D ata

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
        scanf("%d",&menu_num);
        switch (menu_num){
            case 1: //1. Registration
                Registration(&cad);
                break;
            case 2: //2. ShowAll
                ShowAll();
                break;
            case 3: //3. Delete
                Delete();
                break;
            case 4: //4. FindByBirth
                FindByBirth();
                break;
            case 5: //5. Exit
                exit_code = 0; // 종료 조건 변수에 1
                break;
    }
    return exit_code;
}