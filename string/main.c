#include <stdio.h>
#include <stdlib.h>

#include "../funcionesString/funciones.h"
#define TAM 200


int main()
{

    char cad1[TAM] = "Prueba de Candena";
    char cad2[TAM] = "prueba de CANDena";

    // PRUEBA DE STRLEN
    printf("STRLEN: La cantidad de caracteres de la cadena es de %d caracteres.\n", miStrlen(cad1));

    //PRUEBA DE STRCMP
    if(miStrcmp(cad1, cad2) == 0){
        printf("STRCMP: Las cadenas son iguales\n");
    } else
    {
        printf("STRCMP: Las cadenas son diferentes (%d)\n", miStrcmp(cad1, cad2));
    }

    //PRUEBA DE STRCMPI
    if(miStrcmpi(cad1, cad2) == 0){
        printf("STRCMP: Las cadenas son iguales\n");
    } else
    {
        printf("STRCMP: Las cadenas son diferentes (%d)\n", miStrcmpi(cad1, cad2));
    }

    return 0;
}
