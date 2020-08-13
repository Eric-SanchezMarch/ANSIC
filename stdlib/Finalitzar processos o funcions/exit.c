#include <stdio.h>
#include <stdlib.h>
/*
	exit(0);
	Ocasiona una terminación normal del programa. 
	Si se ejecuta más de una llamada de la función exit, el comportamiento no está definido. 
	Primeramente, todas las funciones registradas por la función atexit son llamadas, 
	en el orden inverso de sus registros. Cada función es llamada tantas veces como fue resgistrada. 
	Acto seguido, todos los streams abiertos con datos almacenados aún sin escribir son despejados, 
	todos los streams abiertos son cerrados, y todos los ficheros creados por la función tmpfile son borrados.
	
	Finalmente, el control es regresado al entorno local. Si el valor de estado es cero o
	EXIT_SUCCESS, una forma definida según la implementación del estado "terminación
	con éxito" es retornada. Si el valor de estado es EXIT_FAILURE, una forma definida
	según la implementación del estado "terminación sin éxito" es retornada. De lo contrario
	el estado retornado está definida según la implementación. La función exit no puede
	regresar a su invocador.

	La función exit no retorna ningún valor.


*/
int main( void )
{
 puts( "Introduzca un caracter. Para salir, escriba \'q\':" );
 while( 1 ) if( toupper(getchar()) == 'Q' ) exit(0);
 return 0;
}
