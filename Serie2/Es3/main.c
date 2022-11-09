#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>


int factorial (int choose){
    int result;
    if(choose == 0){
        result = 1;
    } 

    for(int i = 0; i<=choose; i++){

        if(i == 0){
            result = 1;
            //printf("Risultato parziale(%d):%d\n",i+1,result);
        }
        else{
            result = result * i;
            //printf("Risultato parziale(%d):%d\n",i,result);
        }

        if(INTMAX_MAX - result < 1000){
            printf("Risk of overflow\n");
            exit(EXIT_FAILURE);

        }
        
    }
    return result;
}

int recursiveFactorial(int choose){
    
    if(choose >= 1){
       return choose*recursiveFactorial(choose-1);
    }
    else{
        return 1;
    }
}
int main(int argc, char *argv[]){
    
    int input;
    printf("Insert input\n");
    scanf("%d",&input);
    printf("%d",factorial(input));

    return 0;
}
