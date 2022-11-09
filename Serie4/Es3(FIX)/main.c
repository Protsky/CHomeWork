#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>


void analfabetismo(int array[][3], int col, int righe){
    int *tempMin;
    int row = 0;

    int counter = 0;

    for(int i = 0; i<righe; i++){
        int *temp = &array[i][0];
        
        for(int k = 0; k<col;k++){
            if(array[i][k] < *temp){
                temp = &array[i][k];        
            }  
        }

        if(counter == 0){
            tempMin = temp;
            counter++;
        }
        
        if(*tempMin < *temp){
            tempMin = temp;
            row = i;
        }
    }
    printf("Riga: %d\n",row);
    printf("Valore MAX: %d\n",*tempMin);

}

int main(int argc, char *argv[]){

    int array[3][3]= {{9,4343,8},{34,434,20}};
    analfabetismo(array,3,3);
    

    return 0;
}
