/*
Determinar el mayor de los 3 numeros ingresados por el usuario
creador juan david hoyos ramirez
fecha 08/09/2018
*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
//funcion identifica el mayor de los 3 numeros
void mayor_3_numeros(int n1=0, int n2=0, int n3=0)
{
	//decisiones
	if(n1>n2 && n1>n3)
	{
		printf("el mayor es: %d",n1);
	}
		if(n2>n1 && n2>n3)
		{
			printf("el mayor es: %d",n2);
		}
		if(n3>n1 && n3>n2)
		{
		printf("el mayor es: %d",n3);
		}
}
	
	//funcion principal
int main() {
	//declaracion de variables
	int resultado=0,n1=0,n2=0,n3=0;
	printf("ingrese un valor: ");
	scanf("%d",&n1);
	printf("ingrese un valor: ");
	scanf("%d",&n2);
	printf("ingrese un valor: ");
	scanf("%d",&n3);
	mayor_3_numeros(n1,n2,n3);
	return 0;
}

