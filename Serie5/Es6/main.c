#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct fraction
    {
        int num;
        int den;
    }fraction;

void saveRegisterToFile(fraction a, fraction b){
    FILE *file;
    file = fopen("file","wb");
    
    
    fwrite (&a,sizeof(int),sizeof(fraction),file);
    fwrite (&b,sizeof(int),sizeof(fraction),file);
    
    fclose(file);

}
int main(int argc, char *argv[]){
    
    fraction myFraction = {1,2};
    fraction mySecondFraction = {2,2};
    saveRegisterToFile(myFraction,mySecondFraction);


    fraction *myCopyFraction = malloc(sizeof(fraction));
    fraction *myCopyFractionTwo = malloc(sizeof(fraction));
    FILE * file2= fopen("file", "rb");
    if (file2 != NULL) {
        fread(myCopyFraction, sizeof(fraction), sizeof(int), file2);
        fread(myCopyFractionTwo, sizeof(fraction), sizeof(int), file2);
        fclose(file2);
    }

    printf("%d\n",myCopyFraction->num);
    printf("%d\n",myCopyFraction->den);
    printf("\n");
    printf("%d\n",myCopyFractionTwo->num);
    printf("%d\n",myCopyFractionTwo->den);
   


    return 0;
}
