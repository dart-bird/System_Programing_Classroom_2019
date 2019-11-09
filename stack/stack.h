#include <stdio.h>
#include <stdlib.h>
#define EMPTY 0
#define FULL 10000

typedef char                data;
typedef enum {false, true}  boolean;

typedef struct elem{  // an element on the stack
  data  d;
  struct elem *next;
} elem;

typedef struct stack{
  int cnt;    // a count of the elements
  elem *top;  // ptr to the top element
} stack;

void    initialize(stack *stk);
void    push(data d, stack *stk);
data    pop(stack *stk);
data    top(stack *stk);
boolean empty(const stack *stk);
boolean full(const stack *stk);
