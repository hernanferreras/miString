#include "funciones.h"

#define esMayuscula(C) (((C) >= 'A') && ((C) <= 'Z'))

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
    char* puntACad1 = cad1;
    char* puntACad2 = cad2;
    bool flag = false;

    while((*puntACad1) != '\0' || (*puntACad2) != '\0')
    {
        if(esMayuscula())

    }

}
char* miStrcpy(char* cadDest, const char* cadOrig);
char* miStrncpy(char* cadDest, const char* cadOrig, size_t n);
char* miStrstr(const char* cad, const char* subCad);
char* miStrchr(const char* cad, char c);
char* miStrcat(char* cad1, const char* cad2);
char* miStrncat(char* cad1, const char* cad2, size_t n);
