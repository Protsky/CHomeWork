#include "stack.h"
#include <stdio.h>


int main(int argc, char *argv[]){

    
    printf("Stack lenght = %d\n", getLenght());
    push(5);
    push(4);
    push(2);
    push(4);
    push(2);
    push(4);
    printStack();
    printf("Element in the stack = %d\n", getNumberElement()); 

    return 0;
}
