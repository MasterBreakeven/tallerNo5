//Multiplicar 2 numeros ingresados por el usuario
//creador juan david hoyos ramirez
//fecha 08/09/2018

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
//funcion que multiplica los numeros
void mult(float n1,float n2,float x)
{
	x = (n1*n2);
	printf("el resultado de la multiplicacion es: %.1f",x);
	
}

//funcion principal
int main()
{
	//declaracion de variables
}
float n1,n2,x;
printf ("ingrese el primer numero a multiplicar: ");	
scanf("%f",&n1);
printf ("ingrese el segundo numero a multiplicar: ");
scanf("%f",&n2);
//llamado de la funcion
mult(n1,n2,x);

	return 0;
}

