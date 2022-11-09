#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    
    if(argc < 2){
        printf("Error! Insert a new namefile as argument");
        EXIT_FAILURE;
    }
    else{
        FILE * fPtr = NULL;
        fPtr = fopen(strcat(argv[1],".c"), "w");

        if(fPtr == NULL)
        {
        /* File not created hence exit */
            printf("Unable to create file.\n");
            exit(EXIT_FAILURE);
        }

        fputs("#include <stdlib.h>\n", fPtr);
        fputs("#include <stdio.h>\n", fPtr); 
        fputs("#include <string.h>\n", fPtr);  
        fputs("\n", fPtr);   
        fputs("int main(int argc, char *argv[]){\n", fPtr);
        fputs("    //insert your code here\n", fPtr); 
        fputs("    //\n", fPtr); 
        fputs("    return 0;\n", fPtr);
        fputs("}\n", fPtr);

        fclose(fPtr);
        printf("File created and saved successfully. :) \n");
    }
    
    
    return 0;
}
