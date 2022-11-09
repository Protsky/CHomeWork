#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

void minMax(int vect[], int len, int *min, int *max){
    int minimo = INT_MAX;
    int massimo = INT_MIN;

    for(int i = 0; i<len; i++){
        if(vect[i] > massimo ){
            massimo = vect[i];
        }

        if(vect[i] < minimo){
             minimo = vect[i];
        }

    }

    *min = minimo;
    *max = massimo;
    
}

int main(int argc, char *argv[]){
    int min = 0;
    int max = 0;
    int vector[5] = {4,5,6,23,34};

    int *ptrMin = &min;
    int *ptrMax = &max;

    minMax(vector,5,ptrMin,ptrMax);

    printf("Max value:%d and min value: %d", min,max);

    return 0;
}
