#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "mstack.h"


int main(int argc, char *argv[]){
    
    Stack *stack1 = createStack();

    push(stack1,21);
    printStack(stack1);

    Stack *stack2 = createStack();
    push(stack2,22);
    push(stack2,23);
    push(stack2,22);
    push(stack2,22);
    printStack(stack2);
    pop(stack2);
    pop(stack2);
    pop(stack2);
    pop(stack2);
    pop(stack2);
    printStack(stack2);

    
   
}
