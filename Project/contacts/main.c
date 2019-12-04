#include "data.h"

void menu();

int main(){
    while (1){
        menu();
    }
    
    return 0;
}

void menu() {
    int cmd;
    puts("*****Menu*****");
    puts("1. Registration, 2. ShowAll, 3. Delete, 4. FindByBirth, 5. Exit");
    printf("Enter_the_menu_number: ");
    scanf("%d",&cmd);
    if (cmd == 1){
        Registration();
    } else if (cmd == 2){
        ShowAll();
    } else if (cmd == 3){
        Delete();
    } else if (cmd == 4){
        FindByBirth();
    } else if (cmd == 5){
        exit(0);
    } else{
        printf("Please Try again.");
    }
}