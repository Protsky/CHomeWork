
#include <stdlib.h>
#include <stdio.h>

int main()
{

    double base;
    double altezza;
    double perimetro;
    double area;
    double rapporto;

    printf("Inserisci base\n");
    scanf("%lf", &base);

    printf("Inserisci altezza\n");
    scanf("%lf", &altezza);

    printf("%s%10s%12s%7s%11s", "base", "Altezza", "Perimetro", "Area", "Rapporto\n");

    for (int i = 0; i < 10; i++)
    {
        perimetro = (2 * altezza + 2 * base);
        area = base * altezza;
        rapporto = perimetro / area;
        printf("%.1lf%7.1lf%11.1lf%11.1lf%11lf\n", base, altezza, perimetro, area, rapporto);
        base = base + 0.1;
        altezza = altezza + 0.1;
        
    }

    return 0;
}