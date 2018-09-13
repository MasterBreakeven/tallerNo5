/*
Determinar el tiempo desde los segundos ingresados
creador juan david hoyos ramirez
fecha 12/09/2018
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include<string.h>
//funcion calcula los segundos y horas
void tiempo(int segundototal)
	
{
	//declaracion de variable
	int hora=0, minuto=0, segundo=0, sgt = segundototal;
	//decisiones
    if(segundototal%3600==0)
{
	
	hora=segundototal/3600;
	
   }
	else
	{
		hora=segundototal/3600;
		segundototal=segtotal%3600;
		if(segundototal%60==0)
		{
			minuto=segundototal/60;
		}
		else
			{
				minuto=segundototal/60;
				segundototal=segundototal%60;
				segundo=segundototal;
			}
	}
	printf("\n%d segundos equivalen a  %dhoras - %dminutos - %dsegundos",sgt, hora, min, seg);
}
//funcion principal
int main() 
{
	//declaracion de variable
	int segundototal, horas, minutos, segundos;
    printf ("ingrese la cantidad de segundos que desea calcular: ");
    scanf ("%d", &segundototal);
    tiempo(segundototal);//llamado de la funcion
	getch();
	return 0;	
}
