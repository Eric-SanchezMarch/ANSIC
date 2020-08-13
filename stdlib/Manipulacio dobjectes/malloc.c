#include <stdio.h>
#include <stdlib.h>
/*
	malloc();
	Adjudica espacio para un objeto, cuyo tama�o es especificado por tamanyo y cuyo
	valor es indeterminado.
	
	La funci�n malloc retorna un puntero nulo o un puntero al espacio adjudicado.

*/
int main( void )
{
 int *numPtr, i;
 size_t tamanyo=0;
 printf( "Introduzca el tama�o de la lista: " );
 scanf( "%d", &tamanyo );
 puts( "Adjudicamos espacio a la lista." );
 numPtr = (int *)malloc( tamanyo*sizeof(int) );
 for( i=0; i<tamanyo-1; i++ )
 printf( "%d, ", numPtr[i] = rand() % 100 + 1 );
 printf( "%d\n", numPtr[i] = rand() % 100 + 1 );
 numPtr = (int *)realloc( numPtr, tamanyo/=2 );
 printf( "Recortamos la lista a la mitad: %d\n", tamanyo );
 for( i=0; i<tamanyo-1; i++ )
 printf( "%d, ", numPtr[i] );
 printf( "%d\n", numPtr[i] );
 puts( "Liberamos el espacio." );
 free( numPtr );
 return 0;
}
