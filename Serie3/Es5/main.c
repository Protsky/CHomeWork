#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int check(long double n){
   if(ceil(n) == floor(n))
        return 1;
   else
        return 0;
}

int main(int argc, char *argv[]){
    //O(N^2)
    double result;
    for(int i = 1; i<=100;i++){
        for(int k = 1; k<=100;k++){
            result = sqrt(pow(i,2)+pow(k,2));
            if(check(result) == 1){
                printf("Value a = %d Value b = %d Value c = %0.f\n",i,k,result);
            }
        }

    }
    return 0;
}
