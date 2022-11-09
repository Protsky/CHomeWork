#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

int *smallest(int vect[], int len) {

    int *ptr = vect;

    for(int i = 0; i<len;i++){
        if(vect[i] < *ptr){
            ptr = &vect[i];
        } 
    }

    return ptr;
}

int main(int argc, char *argv[]){
    
    int vector[5] = {5,6,3,5,6};
    int *ptr = smallest(vector,5);

    printf("%d",*ptr);

    return 0;
}
