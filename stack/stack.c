#include "stack.h"

// implement functions behind
void initialize(stack *stk){
    stk -> cnt = 0;
    stk -> top = NULL;
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
    elem *tmp;
    tmp = stk -> top;
    return tmp -> d;
}
boolean empty(const stack *stk){
    if (stk -> top == EMPTY) return true;
    else return false;
}
boolean full(const stack *stk){
    if (stk -> cnt == FULL) return true;
    else return false;
}