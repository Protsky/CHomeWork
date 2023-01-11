#include <stdlib.h>
#include <stdio.h>
#include <string.h>



typedef struct Byte
{
    unsigned char bit0:1;
    unsigned char bit1:1;
    unsigned char bit2:1;
    unsigned char bit3:1;
    unsigned char bit4:1;
    unsigned char bit5:1;
    unsigned char bit6:1;
    unsigned char bit7:1;
}Byte;

typedef union Register
{
    unsigned char val;

    struct{
        unsigned char bit0:1;
        unsigned char bit1:1;
        unsigned char bit2:1;
        unsigned char bit3:1;
        unsigned char bit4:1;
        unsigned char bit5:1;
        unsigned char bit6:1;
        unsigned char bit7:1;

    };

}Register;


Byte createByte(unsigned char value)
{
Byte byte;
byte.bit0 = value >> 0;
byte.bit1 = value >> 1;
byte.bit2 = value >> 2;
byte.bit3 = value >> 3;
byte.bit4 = value >> 4;
byte.bit5 = value >> 5;
byte.bit6 = value >> 6;
byte.bit7 = value >> 7;
printf("Byte creato: %d%d%d%d%d%d%d%d sizeof: %ld\n",
 byte.bit7, byte.bit6, byte.bit5, byte.bit4, byte.bit3,
 byte.bit2, byte.bit1, byte.bit0, sizeof(byte));
return byte;
}



Register createRegister(Byte a){
    Register b;
    b.bit0 = a.bit0;
    b.bit1 = a.bit1;
    b.bit2 = a.bit2;
    b.bit3 = a.bit3;
    b.bit4 = a.bit4;
    b.bit5 = a.bit5;
    b.bit6 = a.bit6;
    b.bit7 = a.bit7;

    return b;

}

void printBits(unsigned char value){
    Byte a = createByte(value);
    printf("My bits:\n");
    printf("%d\n",a.bit0);
    printf("%d\n",a.bit1);
    printf("%d\n",a.bit2);
    printf("%d\n",a.bit3);
    printf("%d\n",a.bit4);
    printf("%d\n",a.bit5);
    printf("%d\n",a.bit6);
    printf("%d\n",a.bit7);
}


void saveRegisterToFile(Register a){
    FILE *file;
    file = fopen("file","wb");
    
    
    fwrite (&a,sizeof(Register),1,file);
    fclose(file);


}

void printbitFromBinaryFile(char nameFile[]){
    Byte *myCopyByte = malloc(sizeof(Register));
    FILE * file2= fopen(nameFile, "rb");
    if (file2 != NULL) {
        fread(myCopyByte, sizeof(Byte), 1, file2);
        fclose(file2);
    }

    printf("\n");
    printf("%d", myCopyByte->bit1);
    printf("%d", myCopyByte->bit2);
    printf("%d", myCopyByte->bit3);
    printf("%d", myCopyByte->bit4);
    printf("%d", myCopyByte->bit5);
    printf("%d", myCopyByte->bit6);
    printf("%d", myCopyByte->bit7);

}

void printDeciaml(Byte a){
    Register b = createRegister(a);
    printf("The value after conversion of the 8 bit unsigned char is : %d", b.val);
}



int main(int argc, char *argv[]){
    printBits(22);
    Byte a = createByte(13);
    printDeciaml(a);

    char name[] = "file";
    printbitFromBinaryFile(name);




    return 0;
}
