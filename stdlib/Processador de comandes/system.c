/*
	system:		Pasa la cadena apuntada por cadena al entorno local para ser ejecutada por el "procesador de comandos" - tambi�n
				denominado "int�rprete de comandos" - de una forma definida seg�n la implementaci�n.Un puntero nulo puede ser usado
				para cadena para comprobar si existe un procesador de comandos.

				Si el argumento es un puntero nulo, la funci�n system retorna un valor distinto a cero s�lo si el procesador de comandos
				est� disponible. Si el argumento no es un puntero nulo, la funci�n system retorna un valor definido seg�n la
				implementaci�n. 
				
				int system(const char *cadena);
				
			
*/

#include <stdio.h>
#include <stdlib.h>
/* S�lo funcionar� si "dir" es aceptable por el sistema: MS-DOS, por ejemplo */
int main( void )
{
 puts( "La lista de ficheros en el directorio actual, segun el comando \"dir\":" );
 system( "dir" );
 return 0;
}
