#include <stdbool.h>

#ifndef __MSTACK__
#define __MSTACK__

#define MAX 20

typedef struct stack Stack;


void push(Stack *, int);
void pop(Stack *);
int top(Stack *);
void printStack(Stack *);
Stack *createStack();
bool isEmpty(Stack *);
int getNumberElement(Stack *);



#endif