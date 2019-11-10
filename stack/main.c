#include "stack.c"
int main(void){
	char str[] = "My name is Hasoo Eun!";
	int i;
	stack s;

	initialize(&s);	// initialize the stack
	printf("In the string: %s\n", str);
	for(int i=0; str[i] != '\0'; i++){
		if(!full(&s)) push(str[i], &s);
	}
	printf("From the stack: ");
	while(!empty(&s))
		putchar(pop(&s));
	putchar('\n');
	return 0;	
}