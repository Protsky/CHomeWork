#include <stdlib.h>
#include <stdio.h>
#include <string.h>


struct point {
    
    int coordinataX;
    int coordinateY;
        
};

struct vector {

    int primaComponente;
    int secondaComponente;

};

struct point newPoint(struct point punto, struct vector vettore){
    
    int newXCoordinate = (vettore.primaComponente)-(punto.coordinataX);
    int newYCoordinate =  (vettore.secondaComponente)-(punto.coordinataX);

    struct point resultato;

    resultato.coordinataX = newXCoordinate;
    resultato.coordinateY = newYCoordinate;

    return resultato;
}


int main(int argc, char *argv[]){

    struct point firstPoint = {1,1};
    struct vector firstVector = {-2,-1};
    struct point result;
    result = newPoint(firstPoint,firstVector);
    printf("%d",result.coordinataX);
    printf("\n");
    printf("%d",result.coordinateY);
    
    
}


