/*
	srand:		Usa el argumento como una semilla para una secuencia nueva de n�meros pseudo-aleatorios para ser retornados por
				llamadas posteriores a rand. Si srand es entonces llamada con el mismo valor semilla, la secuencia de n�meros pseudoaleatorios ser� repetida. Si rand es llamada antes de que se hayan hecho cualquier llamada a srand, la misma secuencia
				ser� generada como cuando srand fue llamada la primera vez con un valor semilla de 1.

				Las siguientes funciones definen una implementaci�n portable de rand y srand.

					static unsigned long int siguiente = 1;
						int rand( void ){
 						siguiente *= 1103515245 + 12345;
 						return (unsigned int) (siguiente/65536) % (RAND_MAX-1);
					}
					
					void srand( unsigned int semilla ){
 						siguiente = semilla;
					}
					
				La funcio srand no retorna ningun valor
					
*/

#include <stdio.h>
#include <stdlib.h>
/* Sintaxis del programa: srand <semilla> */
int main( int argc, char *argv[] )
{
 unsigned int i=1;
 srand( atoi(argv[1]) ); /* Cada vez que se ejecute el programa, una semilla del
usuario ser� usada */
 printf( "30 numeros generados aleatoriamente: \n\n" );
 for( i=1; i<30; i++ )
 {
 printf( "%d, ", rand() );
 srand( rand() ); /* Cada n�mero generado vendr� de una secuencia distinta:
"m�s aleatorio" */
 }
 printf( "%d\n", rand() );
 return 0;
}
