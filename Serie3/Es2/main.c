#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAXROW 10
#define MAXCOL 10

void trasposta(int matrice[][10], int righe, int colonne){
    printf("Transport matrix\n");
    for(int i = 0; i<colonne;i++){
        for(int k = 0; k<righe;k++){
            printf("%2d",matrice[k][i]);
        }
        printf("\n");
    }
}

void init(int matrice[][MAXCOL], int righe, int colonne){
    for(int i = 0; i<righe;i++){
        for(int k = 0; k<colonne;k++){
            matrice[i][k] = rand() % (10);
        }
    }
}

void print(int matrice[][MAXCOL], int righe, int colonne){
    printf("Input matrix:\n");
    for(int i = 0; i<righe;i++){
        for(int k = 0; k<colonne;k++){
            printf("%2d",matrice[i][k]);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]){
    srand(time(NULL));

    int row;
    int col;

    printf("Inserisci dimensioni di utilizzo righe e colonne\n");
    scanf("%d%d",&row,&col);

    while(row>MAXROW || col>MAXCOL || row != col ){
        printf("Error, outbound dimension of matrix of %d ROW AND %d COL\n",MAXROW,MAXCOL);
        printf("Inserisci dimensioni di utilizzo righe e colonne\n");
        scanf("%d%d",&row,&col);
    }

    int matrice[row][col];
    init(matrice,row,col);

    int Trow;
    int Tcol;

    printf("Inserisci la sezione della matrice che vuoi trasporre\n");
    scanf("%d%d",&Trow,&Tcol);

    while(Trow>row || Tcol>col){
        printf("Error, outbound dimension of matrix of %d ROW AND %d COL\n",row,col);
        printf("Inserisci la sezione della matrice che vuoi trasporre\n");
        scanf("%d%d",&Trow,&Tcol);
    }

    print(matrice,row,col);
    trasposta(matrice,Trow,Tcol);


    return 0;
}
