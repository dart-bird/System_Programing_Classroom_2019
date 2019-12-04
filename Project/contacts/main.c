#include "data.h"

void menu();

int main(){
    
    (*data) = (struct contactData*)malloc(sizeof(struct contactData));
    (*data)->next = NULL;

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
    switch (cmd)
    {
    case 1:
        Registration();
        break;
    
    case 2:
        ShowAll();
        break;
    
    case 3:
        Delete();
        break;
    
    case 4:
        FindByBirth();
        break;

    case 5:
        exit(0);
    }
}