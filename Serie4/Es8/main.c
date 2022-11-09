#include <stdlib.h>
#include <stdio.h>
#include <string.h>




char *tokenizer(char *ptr, char delimitator){

    char *ptrOuter = ptr;
    char *ptrInter;
    if(strchr(ptrOuter, delimitator) == NULL){
        ptrInter = ptrOuter;
        while(*ptrInter){
            printf("%c",*ptrInter);
            ptrInter++;
            
        }
        return ptrOuter;
    }
    else {
        ptrInter = strchr(ptrOuter, delimitator);
        *ptrInter = '\0';
            while(ptrOuter != ptrInter){
            printf("%c",*ptrOuter);
            ptrOuter++;
        }
        printf("\n");
        ptrOuter++;
        return ptrOuter;
    }

    

    
}

int main(int argc, char *argv[]){
    
    int textTwo[][2] = {{1,2},{2,1}};
    int *(ptrA)[2] = textTwo;

    char text[] = "Ciao come stai";

    char *ptr = tokenizer(text,'o');
    ptr = tokenizer(ptr,' ');
    ptr = tokenizer(ptr,' '); 
    
    

    
    
    

    return 0;
}
