#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>

double drand ( double low, double high )
{
    return ( (double)rand() * ( high - low ) ) / (double)RAND_MAX + low;
}

int main(int argc, char *argv[]){
    

    srand(time(NULL));

    double circlePoints = 0;
    double squarePoints = 0;
    int nTime = 0;

    if(argc == 1 || atoi(argv[1]) < 0 ){
        printf("Enter number of generation\n");
        scanf("%d",&nTime);
    }
    
    nTime = atoi(argv[1]);

    double valueX;
    double valueY;
    double pi = 0;

    for(int i = 0; i<nTime; i++){
        valueX = drand(-1.0,1.0);
        valueY = drand(-1.0,1.0);

        if(pow(valueX,2)+pow(valueY,2)<=1){
            circlePoints++;
            squarePoints++;
        }
        else{
            squarePoints++;
        }
    }
    printf("%f\n",circlePoints);
    printf("%f\n",squarePoints);

    printf("%f\n",(circlePoints / squarePoints)*4);

    return 0;
}
