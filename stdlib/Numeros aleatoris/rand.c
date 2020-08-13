/*
	funcio:
		rand: 		La funcio rand calcula una secuencia de numeros enters pseudo-aleatoris
		 			en el inverval de 0 a RAND_MAX

					La funcio rand retorna un enter pesudo-aleatori.
				
	macro:
		RAND_MAX:	Un Expresi�n constante de intervalo, el valor del cual es el valor m�ximo retorando por
					la funci�n rand. El valor de la macro RAND_MAX ser� de al menos 32767.	
		
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
 unsigned int i=1;
 printf( "30 numeros generados aleatoriamente: \n\n" );
 for( i=1; i<30; i++ )
 printf( "%d, ", rand() );
 printf( "%d\n", rand() );
 return 0;
}
