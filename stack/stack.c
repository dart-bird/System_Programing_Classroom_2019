#include "stack.h"

// implement functions behind
elem *head;
void initialize(stack *stk){
    head = malloc(sizeof(struct elem));
    head -> next = EMPTY;
}
void push(data d, stack *stk){
    elem *tmp = (elem *)malloc(sizeof(elem));
    tmp -> d = d;
    tmp -> next = stk -> top;
    stk -> top = tmp;
    stk -> cnt += 1;
}
data pop(stack *stk){
    char rrr;
    elem *tmp;
    tmp = stk -> top;
    stk -> top = tmp -> next;
    stk -> cnt -= 1;
    rrr = tmp -> d;
    free(tmp);
    return rrr;
}
data top(stack *stk){
    return stk -> top;
}
boolean empty(const stack *stk){
    if (stk -> top == EMPTY) return false;
    else return true;
}
boolean full(const stack *stk){
    if (stk -> cnt == FULL) return true;
    else return false;
}