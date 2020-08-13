/*
	funcio:
	
			realloc: 	Cambia el tamaño del objeto apuntado por ptr al tamaño especificado por tamanyo. El
						contenido del objeto no cambiará hasta el menor de los tamaños nuevo y viejo. Si el
						tamaño nuevo es mayor, el valor de la porción nuevamente adjudicada del objesto es
						indeterminado. Si ptr es un puntero nulo, la función realloc se comporta a igual que la
						función malloc para el tamaño especificado. De lo contrario, si ptr no es igual a un
						puntero previamente retornado por la función calloc, malloc, o realloc, o si el espacio
						ha sido desadjudicado por una llamada a la función free, o realloc, el comportamiento
						no está definido. Si el espacio no puede ser desadjudicado, el objeto apuntado por ptr
						no varía. Si tamanyo es cero y ptr no es nulo, el objeto al que apunta es liberado.	

						La funcio realloc retorna o be un punter nul o be un punter posiblement
						al espai adjudicat mudat
						
						void *realloc(void *ptr, size_t tamanyo);


*/

#include <stdio.h>
#include <stdlib.h>
int main( void )
{
 int *numPtr, i;
 size_t tamanyo=0;
 printf( "Introduzca el tamaño de la lista: " );
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
