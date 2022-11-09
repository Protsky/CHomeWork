#include <stdlib.h>
#include <stdio.h>

int main(){

    int choose; 
    int result;

    printf("Inserisci un valore n >= 0\n");
    scanf("%d",&choose);

    while(choose < 0){
        printf("Error value < 0\n");
        printf("Inserisci un valore n >= 0\n");
        scanf("%d",&choose);
    }

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
            printf("Risultato parziale(%d):%d\n",i,result);
        }
        
    }

    printf("%d\n",result);


    return 0;

}