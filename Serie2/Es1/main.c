#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


int isThreeDigit(int number){
    if(number > 999 || number < 100 ){
        return 0;
    }
    else {
        return 1;
    }
}
int main(int argc, char *argv[]){


    int input;

    printf("Inserisci un valore di 3 cifre\n");
    scanf("%d",&input);

    while(isThreeDigit(input) == 0){
        printf("Error valore non di 3 cifre\n"); 
        printf("Inserisci un valore di 3 cifre\n");
        scanf("%d",&input); 
    }

    int partialResult = 0;
    int copyInput = input;

    while(input > 0){
        int mod = input % 10; 
        partialResult = partialResult + pow(mod,3);
        input = input / 10;
    }

    if(partialResult == copyInput ){
        printf("YES");
    }
    else{
        printf("NO");
    }


    


    return 0;
}
