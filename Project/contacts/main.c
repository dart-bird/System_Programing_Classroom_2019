#include <stdio.h>

int menu();

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
                printf("this menu %d\n",menu_num);
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