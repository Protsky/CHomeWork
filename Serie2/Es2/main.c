#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Scrivere un programma in grado di contare caratteri, 
//parole e linee contenuti in un file
//(attraverso la chiamata con ridirezione)


int main(int argc, char *argv[]){
    
    int caratteri = 0;
    int parole = 0;
    int linee = 0;

    int c;
    while(1){
        c = getchar();
        if (c == EOF) { break; }
        caratteri++;
        

        if(c == ' ' || c =='\n'){
            parole++;
        }
        if(c == '\n'){
            linee++;
        }
    }

    printf("Caratteri: %d\n",caratteri);
    printf("Parole: %d\n",parole);
    printf("Linee: %d\n",linee);
    

    return 0;
}
