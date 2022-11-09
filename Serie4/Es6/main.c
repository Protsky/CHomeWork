#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

double integrale(double min, double max, double step){

    //x^2

    double area;

    double fxOne = min;
    double fxTwo = max;

    for(int i =fxOne; i<max;i+=0.001){
        area = area + (pow(fxOne,2)*0.0001);
    }  

    return area;
    


}

int main(int argc, char *argv[]){

    
    printf("%f",integrale(1,2.0,3)); 
    return 0;

}
