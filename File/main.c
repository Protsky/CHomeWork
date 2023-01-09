#include <stdio.h>

int main()
{
   char buf[BUFSIZ];
   int n;
   FILE *infile, *outfile;

   if (((infile=fopen("nomi","r"))!=NULL)&&((outfile=fopen("nomi3","w"))!=NULL)){
      do {
         n = fread(buf,sizeof(char),BUFSIZ,infile);
         fwrite(buf,sizeof(char),n,outfile);
      }while(n==BUFSIZ);
   }

   return 0;
}