#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <time.h>


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
    srand(time(NULL));
    
    int row = 0;
    int col = 0;
    printf("Inserisci il numero di righe e colonne della matrice\n");
    scanf("%d%d",&row,&col);
    int array[row][col];

    for(int i = 0; i<row;i++){
        for(int k = 0; k<col;k++){
            array[i][k] = rand() % (101);
        }
    }

    analfabetismo(array,3,3);
    printf("\n");
    printf("----------this is the matrix-----------\n");
    printf("\n");


    for(int i = 0; i<row;i++){
        for(int k = 0; k<col;k++){
            printf("%4d",array[i][k]);
        }
        printf("\n");
    } 
    

    return 0;
}
