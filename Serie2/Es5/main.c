#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <time.h>


int main(int argc, char *argv[]){
    
    srand(time(NULL)); 

    int min = INT_MAX; 
    int max = INT_MIN;

    for(int i = 0; i < 1000; i++){
        int a = 0 + rand() % (10000+1 - 0);
        int b = 0 + rand() % (10000+1 - 0);

        if((abs(a-b)>max)){
            max = abs(a-b);
        }
        if(abs(a-b)<min){
            min = abs(a-b);
        }
    }

    printf("%d\n",min);
    printf("%d\n",max);

    return 0;
}
