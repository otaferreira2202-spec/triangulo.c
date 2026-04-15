#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
   {
    int base = atoi(argv[1]);
    if(argc == 2){
        for(int i = 1; i <= base; i++)
           {
            for (int j = 1; j <= i; j++) 
   {  
                printf("*");
            }
            printf("\n");
        } 
    } else
           {
        printf("digite a base do triangulo");
    }
    
    printf("\nFeito por Otavio Augusto (https://github.com/otaferreira2202-spec) ");
    return 0;
}
