#include<stdlib.h>
#include<stdio.h>
#include"Relogio.h"

void MostraRelogio(EstruturaRelogio p)
{
printf("%2.d:%2.d:%2.d" , p.horas , p.minutos , p.segundos);

}

void IncrementaSegundos(EstruturaRelogio *p)
{
    if(p->segundos < 60){
        p-> segundos += 1;
        
    }else{
        p ->segundos = 0;
        p-> minutos += 1;
    }

    if(p -> minutos  > 59){
        p -> minutos = 0;
        p -> horas += 1;

    }

    if(p -> horas > 24){
        p -> horas = 0;
    }

}
