#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>



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



int main(void)
{
    Register r;
    r.val = 255;

    printf("Valore byte completo %d\n", r.val);
    printf("Valori singoli bit:\n");
    printf("b7: %d, b6: %d, b5: %d, b4: %d, b3: %d, b2: %d, b1: %d, b0: %d\n",r.bit7, r.bit6, r.bit5, r.bit4, r.bit3, r.bit2, r.bit1, r.bit0);

    return 0;
}