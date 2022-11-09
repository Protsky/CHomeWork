#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>




int isThreeDigit(int number){
    if(number > 999 || number < 100 ){
        return 0;
    }
    else {
        return 1;
    }
}
int main(int argc, char *argv[]){

    srand(time(NULL));

    for(int i = 0; i<10000000; i++){


        int input = 100 + rand() % (9999+1 - 100);

        int partialResult = 0;
        int copyInput = input;

        while(input > 0){
            int mod = input % 10; 
            partialResult = partialResult + pow(mod,3);
            input = input / 10;
        }

        if(partialResult == copyInput ){
            printf("%d\n",partialResult);
        }
        else{
            //printf("NO!%d\n",partialResult);
        }
    }

    
    


    return 0;
}
