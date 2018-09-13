//Mostrar numeros del 1 hasta el numero ingresado por el usuario
//creador juan david hoyos ramirez
//fecha 08/09/2018

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;
//funcion que determina si un numero es positivo o negativo
void mostrar(int num)
{
	//decision
		if(num<0)
		{
			printf("Se produjo un error, por favor reinicie");
		}
			if(num>0)
			{
				for(int i=1;i<=num;i++)
				{
					printf ("%d \n",i);
				}
			}
}

//funcion principal
int main()
{
	int num,i;
	printf("ingrese un numero: ");
	scanf("%d",&num);
	mostrar(num);//llamado de la funcion
	return 0;
}

