#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct frazione{
    long num, den;
};

typedef struct frazione Frazione;


Frazione creaFrazione(long num, long den){

    Frazione newFraction = {num,den};   
    
    return newFraction;
}

/*ALGORITMO RICORSIVO*/
int gcd(long m, long n) {
  if(n == 0)
     return(m);
  else
     return gcd(n, m%n);
}



Frazione semplifica(Frazione f){

    long value = gcd(f.den,f.num);
    Frazione newFraction = {f.den/value,f.num/value};
    
    return newFraction;
}

void stampaFrazione(Frazione f){
    printf("%ld\n",f.num);
    printf("%ld",f.den);
    printf("\n");
}
int minimoComuneMultiplo(int n1, int n2)
{
  return n1 * n2 / gcd(n1, n2);
}

Frazione somma(Frazione f1, Frazione f2){
    long value = minimoComuneMultiplo(f1.den,f2.den); 
    Frazione result = {value,((value/f1.den)*f1.num)+((value/f2.den)*f2.num)};
    return semplifica(result);
}

Frazione sottrazione(Frazione f1, Frazione f2){
   long value = minimoComuneMultiplo(f1.den,f2.den); 
    Frazione result = {value,((value/f1.num)*f1.den)-((value/f2.num)*f2.den)};
    return semplifica(result);
}

Frazione mult(Frazione f1, Frazione f2){
   Frazione result = {f1.den*f2.den,f1.num*f2.num}; 
   return semplifica(result);
}

Frazione divi(Frazione f1, Frazione f2){
    Frazione inverse = {f1.den,f1.num};
    return  semplifica(mult(f2,inverse));
}



int main(int argc, char *argv[]){
    
    Frazione myFraction = creaFrazione(10,1);
    Frazione semplifyFraction = semplifica(myFraction);
    stampaFrazione(semplifyFraction);
    Frazione secondFraction = creaFrazione(2,1);
    Frazione sum = somma(myFraction,secondFraction);
    stampaFrazione(sum);
    Frazione multi = mult(myFraction,secondFraction);
    stampaFrazione(multi);
    Frazione divisione = divi(myFraction,secondFraction);
    stampaFrazione(divisione);
    
    
    return 0;
}


