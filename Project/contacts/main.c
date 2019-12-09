#include "data.h"
void menu();
int main(){
    data = (struct contactData*)malloc(sizeof(struct contactData));
    ReadFile();
    while (1){
        menu();
    }
    
    return 0;
}

void menu() {
    int cmd;
    puts("*****Menu*****");
    puts("1. Registration, 2. ShowAll, 3. Delete, 4. FindByBirth, 5. Exit");
    printf("Enter_the_menu_number:");
    scanf("%d",&cmd);
    switch (cmd)
    {
    case 1:
        Registration();
        WriteFile();
        break;
    
    case 2:
        ShowAll();
        break;
    
    case 3:
        if(data->next == NULL) printf("No record founded.\n");
        else {
          Delete();
          WriteFile();
        }
        break;
    
    case 4:
        FindByBirth();
        break;

    case 5:
        WriteFile();
        exit(0);
    }
}
