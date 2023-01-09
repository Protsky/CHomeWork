#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "mstack.h"


int main(int argc, char *argv[]){
    
    Stack stackOne;
    

    initStack(&stackOne);

    push(&stackOne,11);
    push(&stackOne,12); 
    push(&stackOne,13);
    push(&stackOne,11);
    push(&stackOne,12); 
    push(&stackOne,13);
    push(&stackOne,11);
    push(&stackOne,12); 
    push(&stackOne,13);
    push(&stackOne,11);
    push(&stackOne,12); 
    push(&stackOne,13);
    push(&stackOne,11);
    push(&stackOne,12); 
    push(&stackOne,13);
    push(&stackOne,11);
    push(&stackOne,12); 
    push(&stackOne,13);
    push(&stackOne,11);
    push(&stackOne,12); 
    push(&stackOne,13);

    printf("Number of element: %d\n", getNumberElement(&stackOne));
    printf("Size stack: %d\n", getLenght(&stackOne));

    printStack(&stackOne);

    pop(&stackOne);
    pop(&stackOne);
    
    
    

    printStack(&stackOne);
}
