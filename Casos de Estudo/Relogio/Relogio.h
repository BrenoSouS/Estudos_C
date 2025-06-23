#ifndef RELOGIO_H
#define RELOGIO_H

#include<stdlib.h>

typedef struct 
{
    int horas;
    int minutos;
    int segundos;
    
}EstruturaRelogio;


void IncrementaSegundos(EstruturaRelogio *p);
void MostraRelogio(EstruturaRelogio p);

#endif