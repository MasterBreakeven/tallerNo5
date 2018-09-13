/*
devuelve la cantidad de vocales que tiene una palabra
creador juan david hoyos ramirez
fecha 08/09/2018
*/
#include <iostream> 
#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 
//declaracion de variables
char frase[40]; 
int a,b; 
//funcion principal
main(){ 
	
	
	printf("ingrese una frase: "); 
	gets(frase);
	
	//determina la cantidad de veces que esta la vocal en la frase
	for(a=0;a<40;a++){ 
		switch (frase[a]){ 
		case 'a': b=b+1; 
		break; 
		case 'e': b=b+1; 
		break; 
		case 'i': b=b+1; 
		break; 
		case 'o': b=b+1; 
		break; 
		case 'u': b=b+1; 
		break; 
		} } 
	
	printf("la cantidad de vocales es %d\n",b); 
	
	getch(); 
	 
	return 0; 
}
