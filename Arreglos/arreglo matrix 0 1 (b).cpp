/*
programa: matrix
creador juan david hoyos ramirez
fecha 11/09/2018
*/
#include <iostream>
#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 
using namespace std;
//funcion del arreglo donde almacena los dos numeros
void arreglo (int v1,int v2)
{
	
	int matrix [100][100];//arreglo
	for (int i=0;i<v1;i++)
	{
		for(int j=0;j<v2;j++)
		{
			matrix [i][j]=0+rand()%(2-0);
			printf ("en la posicion [%d] [%d] esta : %d\n",i,j,matrix[i][j]);
		}
	}
	printf ("\n matrix: \n");
	for (int i=0;i<v1;i++)
	{
		for(int j=0;j<v2;j++)
		{
			matrix [i][j]=0+rand()%(2-0);
			printf ("%d\n",matrix[i][j]);
		}
		printf("\n");
	}
}
//funcion principal
int main(int argc, char *argv[]) {
	int v1,v2;//declaracion de variable
	printf("ingrese el primer valor: ");
	scanf ("%d",&v1);
	printf("ingrese el segundo valor: ");
	scanf ("%d",&v2);
	arreglo(v1,v2);//llamado de la funcion
	getch();
	return 0;
}

