#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct point {
    
    int coordinataX;
    int coordinateY;
        
}point;

typedef struct vector {

    int primaComponente;
    int secondaComponente;

}vector;


void newPoint(struct point *punto,vector vettore){

    //When you pass a struct to a function, 
    //all its values are copied (on the stack) 
    //as arguments to the function. 
    //Changes made to the struct are only visible inside the function. 
    //To change the struct outside of the function, use a pointer.
    
    int newXCoordinate = (vettore.primaComponente)-(punto->coordinataX);
    int newYCoordinate =  (vettore.secondaComponente)-(punto->coordinateY);

   
    punto->coordinataX = newXCoordinate;
    punto->coordinateY = newYCoordinate;

}

int main(int argc, char *argv[]){

    point firstPoint = {1,1};
    vector firstVector = {-2,-1};

    newPoint(&firstPoint,firstVector);

    printf("%d",firstPoint.coordinataX);
    printf("\n");
    printf("%d",firstPoint.coordinateY); 

    
}







