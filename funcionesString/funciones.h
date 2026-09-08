#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdbool.h>

typedef struct
{
    char* cursor;
    bool finSec;

}secuenciaPalabra;

int miStrlen(const char* cad);
int miStrcmp(const char* cad1, const char* cad2);


#endif // FUNCIONES_H_INCLUDED
