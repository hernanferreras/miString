#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdbool.h>
#include <stddef.h>


typedef struct
{
    char* cursor;
    bool finSec;

}secuenciaPalabra;

int miStrlen(const char* cad);
int miStrcmp(const char* cad1, const char* cad2);
int miStrcmpi(const char* cad1, const char* cad2);
char* miStrcpy(char* cadDest, const char* cadOrig);
char* miStrncpy(char* cadDest, const char* cadOrig, size_t n);
char* miStrstr(const char* cad, const char* subCad);
char* miStrchr(const char* cad, char c);
char* miStrcat(char* cad1, const char* cad2);
char* miStrncat(char* cad1, const char* cad2, size_t n);

#endif // FUNCIONES_H_INCLUDED
