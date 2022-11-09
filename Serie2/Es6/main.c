#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]){
    
    double inputA;
    double  inputB;

    printf("Inserisci due valori A e B\n");
    scanf("%lf%lf",&inputA,&inputB);

    printf("a^b = ");
    printf("%.0f\n",pow(inputA,inputB));

    printf("Ipotenusa = ");
    printf("%.2f\n", sqrt(pow(inputA,2)+pow(inputB,2)));

    printf("Tangente = ");
    printf("%.2f\n", sin(inputA)/cos(inputA));

    printf("Rounded = ");
    printf("%.3lf\n", inputA/inputB);


    return 0;
}
