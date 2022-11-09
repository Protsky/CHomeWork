#include <stdlib.h>
#include <stdio.h>


void pallottoliere(int number){
    int maxValue = 16;
    printf("|");
    for(int i=0; i<number; i++){
        printf("x");
        maxValue--;
    }
    for(int i = 0; i<6;i++){
        printf("-");
        maxValue--;
    }
    for(int i = 0; i<maxValue;i++){
        printf("x");
        
    }
    printf("|\n");
}

int main(){

    int input;
    
    printf("Inserisci numero: ");
    scanf("%d",&input);


    while(input > 999){
        printf("Errore numero minore di 0 oppure di tre cifre, riprova\n");
        printf("Inserisci numero: ");
        scanf("%d",&input);
    }

    printf("Yes\n");
    while(input > 0){
        int mod = input % 10; 
        printf("%d",mod);
        pallottoliere(mod);
        input = input / 10;
    }

    return 0 ;
}