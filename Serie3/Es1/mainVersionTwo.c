#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int generatore(int n){
    return rand() % (n + 1);
}
void istogramma(int n){
    for(int i = 0; i<n; i++){
        printf("*");
    }
}

int main(int argc, char *argv[]){
    
    srand(time(NULL));
    int runFor;
    int count = 0;
    int randMax;
    
    printf("Inserisci input: ");
    scanf("%d", &runFor);
    printf("Inserisci valoreMax: ");
    scanf("%d",&randMax);
    int times[randMax];
    for(int i = 0; i<randMax;i++){
        times[i] = 0;
    }

    for(int i = 0; i<runFor;i++){
        times[generatore(randMax)]++;
    }

    for(int i = 0; i<sizeof(times)/sizeof(times[0]);i++){
        printf("Quantità di %d:%5d\n",i,times[i]);
        count = count + times[i];
    }
    printf("\n");
    printf("Total of run is: %2d\n",count);
    count = 0;
    printf("\n");
    printf("-----------Version2-----------\n");
    printf("\n");
    for(int i = 0; i<sizeof(times)/sizeof(times[0]);i++){
        printf("Quantità di %d:%5c",i,' ');
        istogramma(times[i]);
        printf("\n");
        count = count + times[i];
    }
    printf("\n");
    printf("Total of run is: %2d\n",count);



    return 0;
}
