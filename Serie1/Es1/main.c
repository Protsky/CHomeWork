#include <stdlib.h>
#include <stdio.h>


int main(){

    int input;
    
    printf("Inserisci numero: ");
    scanf("%d",&input);


    while(input < 999){
        printf("Errore numero minore di 0 oppure di tre cifre, riprova\n");
        printf("Inserisci numero: ");
        scanf("%d",&input);
    }

    printf("Yes\n");

    while(input > 0){
        int mod = input % 10; 
        printf("%2d",mod);
        input = input / 10;
    }


    
        



    return 0 ;
}