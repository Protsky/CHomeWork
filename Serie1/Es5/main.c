#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


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
        
    }
    return result;
}

int main(int argc, char *argv[]){
    
    int n;
    int k;

    printf("Inserisci prima n poi k\n");
    scanf("%d%d",&n,&k);
    

    while(n<0 || k<0 || k>n){
        printf("Errore valori negativi oppure non interi\n");
        printf("Inserisci prima n poi k\n");
        scanf("%d%d",&n,&k);
    }

    int result = factorial(n)/factorial(k);
    printf("%d",result);

    

    



    return 0;
}
