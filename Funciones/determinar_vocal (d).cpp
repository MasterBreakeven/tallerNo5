//Determinar si es una vocal o no
//creador juan david hoyos ramirez
//fecha 08/09/2018

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;
//funcion que determina si es vocal o no
void vocal(char c)
{
	//decision de las vocales
	if (c=='a'||c=='A'||c=='E'||c=='e'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
	{
		printf ("es un vocal");
	}
	else{
		printf("no es una vocal");
	}
}
//funcion principal
int main() 
{
char c;//declaracion de variable
printf ("ingrese una letra: ");
scanf ("%c",&c);
vocal(c);//llamado de funcion
	
	return 0;
}

