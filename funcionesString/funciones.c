#include "funciones.h"


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

