#include <stdio.h>
#include <stdlib.h>
/*
	atol();
	Convierte la porción inicial de la cadena apuntada por numPtr a una representación de long.

	La función atol retorna el valor convertido.


*/
int main()
{
 char numPtr[11] = "1234567890";
 printf( "Convirtiendo la cadena \"%s\" en un numero: %u\n", numPtr, atol(numPtr)
);
 return 0;
}
