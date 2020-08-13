/*
	system:		Pasa la cadena apuntada por cadena al entorno local para ser ejecutada por el "procesador de comandos" - también
				denominado "intérprete de comandos" - de una forma definida según la implementación.Un puntero nulo puede ser usado
				para cadena para comprobar si existe un procesador de comandos.

				Si el argumento es un puntero nulo, la función system retorna un valor distinto a cero sólo si el procesador de comandos
				está disponible. Si el argumento no es un puntero nulo, la función system retorna un valor definido según la
				implementación. 
				
				int system(const char *cadena);
				
			
*/

#include <stdio.h>
#include <stdlib.h>
/* Sólo funcionará si "dir" es aceptable por el sistema: MS-DOS, por ejemplo */
int main( void )
{
 puts( "La lista de ficheros en el directorio actual, segun el comando \"dir\":" );
 system( "dir" );
 return 0;
}
