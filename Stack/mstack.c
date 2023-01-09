#include "mstack.h"
#include <stdio.h>
#include <stdlib.h>

bool isFull(Stack *stack){
    if(stack-> position == MAX){
        return true;
    }
    else{
        return false;
    }
}

void push(Stack *stack, int value)
{
    if(!isFull(stack)){
        stack->memory[stack->position++] = value;
    }
}

void printStack(Stack *stack)
{   
    for(int i = 0; i<MAX;i++){
        if(stack->memory[i] != 0){
            printf("%d ",stack->memory[i]);
        }
        
    }
    printf("\n");
}

void initStack(Stack * stack)
{
    stack -> position = 0;
    for(int i = 0; i<MAX;i++){
        stack->memory[i] = 0;
    }
}

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

int getLenght(Stack * stack){
    return sizeof(stack->memory) / sizeof(stack->memory[0]);
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