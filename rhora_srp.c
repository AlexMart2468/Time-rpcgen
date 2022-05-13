/*Hora.c*/
#include<stdio.h>
#include <time.h>
#include <stdlib.h>
//se definen las variables globales del tiempo 
struct fecha_t {int anio, mes, dia, hora, minutos;}; 
struct fecha_t * fechactual;
//Declaramos la variable para los segundos transcurridos desde 1970 
time_t segundos;
int result;

int obten_segundos_1_svc(time_t *s)
{
//Obtención de los segundos desde el sistema operativo
	time(s);
	if(s == NULL)
		return -1;
	else
		return 0;
}

