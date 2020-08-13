#include <stdlib.h>
#include <stdio.h>
/*
	ldiv();		// es un tipo de estructura		typedef struct { long quot, rem; } ldiv_t;
	Similar a la función div, excepto que los argumentos son de tipo long int.

	La función ldiv retorna la estructura de tipo ldiv_t, conteniendo el cociente y el resto (de tipo long int).



*/
int main()
{
 ldiv_t ld;	// declarem una estructura ldiv_t amb nom ld
 long int num, denom;
 puts( "Escriba el numerador y el denominador (separados por un espacio):" );
 scanf( "%d %d", &num, &denom );
 ld = ldiv( num, denom );
 printf( "ldiv( %d, %d ) : cociente = %d, resto = %d\n", num, denom, ld.quot,
ld.rem );
 return 0;
}
