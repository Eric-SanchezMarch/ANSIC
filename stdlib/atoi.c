#include <stdio.h>
#include <stdlib.h>
/*
	atoi();
	Convierte la porci�n inicial de la cadena apuntada por numPtr a una representaci�n de int.
	
	La funci�n atoi retorna el valor convertido




*/
int main()
{
 char numPtr[5] = "1234";
 printf( "Convirtiendo la cadena \"%s\" en un numero: %d\n", numPtr, atoi(numPtr)
);
 return 0;
}
