#include <stdbool.h>

#ifndef __MSTACK__
#define __MSTACK__

#define MAX 20
typedef struct stack {
   int memory[MAX];
   int position;
} Stack;

void pop(Stack *);
void push(Stack *, int);
int getLenght(Stack *);
int getNumberElement(Stack *);
void printStack(Stack *);
void initStack(Stack *);
bool isEmpty();
bool isFull();


#endif