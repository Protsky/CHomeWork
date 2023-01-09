#include "mstack.h"
#include <stdlib.h>
#include <stdio.h>

struct stack {
   int memory[MAX];
   int sp;
};

bool isEmpty(Stack * stack)
{   
    if(getNumberElement(stack) == 0){
        printf("Stack is empty, you can not pop an element.");
        return true;
    }
    return false;
}

int getNumberElement(Stack * stack){
    int counter = 0;
    for(int i = 0; i<MAX;i++){
        if(stack->memory[i] != 0){
            counter++;
        }
    }

    return counter;
}

void pop(Stack * stack){
    if(isEmpty(stack)){
        exit(1);
    }

    bool isZeroPresent = false;
    int tempPos;
    for(int i = 0; i<MAX;i++){
        if(stack->memory[i] == 0){
            isZeroPresent = true;
        } 
    }


    if(isZeroPresent == true){
        for(int i = 0; i<MAX;i++){
        
            if(stack->memory[i] == 0){
                break;
            } 
            tempPos++;
        }
        stack->memory[tempPos-1] = 0;
        
    }
    else{
        stack->memory[MAX-1] = 0;
        printf("");
    }
    tempPos = 0;
}



static int full(Stack *stack)
{
   return (stack->sp == MAX);
}

void push(Stack *stack, int elt)
{
   if (!full(stack)) {
      stack->memory[stack->sp++] = elt;
   } 
}

void printStack(Stack *stack)
{
    for(int i = 0; i<MAX; i++){
        printf("%d ",stack->memory[i]);
    }
    printf("\n");
}

Stack *createStack()
{
   Stack *stack = (Stack *)malloc(sizeof(Stack));
   stack->sp = 0;
   for(int i = 0; i<MAX;i++){
       stack->memory[i] = 0; 
   }

   return stack;
}

