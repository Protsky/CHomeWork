#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


double bisezione(double a, double b, double eps){
    // 2x-cos(x)
    double c;
    while(fabs(b-a) >= eps){

        c = (a+b)/2;

        printf("%f\n",b-a);

        if((2*(a)-cos(a))*(2*(c)-cos(c)) > 0.0){
            a = c;
        }

        else{
            b = c;
        }
        
    }

    return c;
    
}

int main(int argc, char *argv[]){
    double a;
    double b;
    printf("Inserisci valore a e b in questo ordine\n"); 
    scanf("%lf%lf",&a,&b);

    while(a*b >= 0){
       printf("Inserisci valore a e b in questo ordine\n"); 
       scanf("%lf%lf",&a,&b); 
    }


    printf("%f",bisezione(a,b,0.0001));




    return 0;
}
