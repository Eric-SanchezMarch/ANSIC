#include <stdio.h>
#include <stdlib.h>
/*
	atoi();
	Convierte la porción inicial de la cadena apuntada por numPtr a una representación de int.
	
	La función atoi retorna el valor convertido




*/
int main()
{
 char numPtr[5] = "1234";
 printf( "Convirtiendo la cadena \"%s\" en un numero: %d\n", numPtr, atoi(numPtr)
);
 return 0;
}
