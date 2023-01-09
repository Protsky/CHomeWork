#include "stack.h"
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

//TODO: DINAMIC STACK RESIZE
#define MAXSTACK 500

int position = 0;
int stack[MAXSTACK] = {};


void pop()
{   
    printf("This is a pop function\n");
}

void push(int value)
{   

    if(!isFull()){
        printf("Stack is full\n");
    }
    else{
        stack[position] = value;
        position++;
        printf("Value %d added. \n", value);
    }
    
}

int getLenght(){
    return sizeof(stack) / sizeof(stack[0]);
}

int getNumberElement(){
    int counter = 0;
    for(int i = 0; i<getLenght();i++){
        if(stack[i] != 0){
            counter++;
        }
    }

    return counter;
}

void printStack(){
    for(int i = 0; i<getLenght();i++){
        if(stack[i] != 0){
            printf("%d ", stack[i]); 
        }
        
    }
    printf("\n");

}

bool isFull(){
    if(getNumberElement() == getLenght()){
        return false;
    }
    
    else{
        return true;
    }
}
