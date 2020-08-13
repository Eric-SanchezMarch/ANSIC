#include <stdio.h>
#include <stdlib.h>
/*
	atof();
	Convierte la porción inicial de la cadena apuntada por numPtr a una representación de double.
	
	La función atof retorna el valor convertido.

	atof converteig strings en floats


*/
int main()
{

 char numPtr[11] = "23124.6656";
 float numero;
 
 numero = atof(numPtr);
 printf( "Convirtiendo la cadena \"%s\" en un numero: %f\n", numPtr, numero);
 return 0;
}
