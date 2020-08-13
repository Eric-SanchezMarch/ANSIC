/*
	strtoul:		Convierte la porci�n inicial de la cadena apuntada por numPtr a una representaci�n de unsigned long int. La funci�n
					strtoul funciona identicamente a la funci�n strtol.
					
					La funci�n strtoul retorna el valor convertido, si acaso existe. Si no se pudo realizar ninguna conversi�n, cero es
					retornado. Si el valor correcto no pertenece al intervalo de valores representables, UONG_MAX es retornado, y el valor
					de la macro ERANGE es guardado errno.	
					
					unsigned long int strtoul(const char *numPtr, char **finalPtr, int base);
					
		

*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
 char numPtr[9] = "12345678", *finalPtr;
 int base;
 for( base=2; base<=17; base++ )
 printf( "Convirtiendo la cadena \"%s\" en un numero en base %d: %u\n", numPtr,
base, strtoul(numPtr, &finalPtr, base) );
 return 0;
}
