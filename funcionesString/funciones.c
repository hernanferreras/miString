#include <stdio.h>
#include "funciones.h"


#define esMayuscula(C) (((C) >= 'A') && ((C) <= 'Z'))
#define TAM 100

void cadenaAMinuscula(char* puntero, const char* cadOrig, char* cadMinuscula);
/*void secuenciaPalabraCrear(secuenciaPalabra* sec, const char* c)
{
    sec->cursor = c;
    sec->finSec = false;

}*/


int miStrlen(const char* cad)
{
    int cont = 0;
    const char* punteroACad = cad;

    while(*punteroACad != '\0')
    {
        cont++;
        punteroACad++;
    }

    return cont;
}

int miStrcmp(const char* cad1, const char* cad2)
{
    const char* puntACad1 = cad1;
    const char* puntACad2 = cad2;

    while((*puntACad1 == *puntACad2) && (*puntACad1!='\0' && *puntACad2 != '\0'))
    {
        puntACad1++;
        puntACad2++;

        if(*puntACad1 == '\0' && *puntACad2 == '\0')
        {
            return 0;
        }
    }
    if(*puntACad1 > *puntACad2)
    {
        return 1;
    } else
    {
        return -1;
    }
}

int miStrcmpi(const char* cad1, const char* cad2)
{
    char* puntACad1 = (char*) cad1;
    char* puntACad2 = (char*) cad2;
    char cadena1[TAM];
    char cadena2[TAM];
    
    cadenaAMinuscula(puntACad1, cad1, cadena1);
    cadenaAMinuscula(puntACad2, cad2, cadena2);

    printf("%s\n", cadena1);
    printf("%s\n", cadena2);
    return miStrcmp(cadena1, cadena2);
    
}

void cadenaAMinuscula(char* puntero, const char* cadOrig, char* cadMinuscula)
{
    int i;
    while(*puntero != '\0')
    {
        for(i = 0; i < miStrlen(cadOrig); i++)
        {
            if(esMayuscula(*puntero))
            {
                *cadMinuscula = *puntero + 32;
            } else
            {
                *cadMinuscula = *puntero;
            }

            puntero++;
            cadMinuscula++;
        }
    }
}
