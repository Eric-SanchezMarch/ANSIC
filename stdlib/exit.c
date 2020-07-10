#include <stdio.h>
#include <stdlib.h>
/*
	exit(0);
	Ocasiona una terminaci�n normal del programa. 
	Si se ejecuta m�s de una llamada de la funci�n exit, el comportamiento no est� definido. 
	Primeramente, todas las funciones registradas por la funci�n atexit son llamadas, 
	en el orden inverso de sus registros. Cada funci�n es llamada tantas veces como fue resgistrada. 
	Acto seguido, todos los streams abiertos con datos almacenados a�n sin escribir son despejados, 
	todos los streams abiertos son cerrados, y todos los ficheros creados por la funci�n tmpfile son borrados.
	
	Finalmente, el control es regresado al entorno local. Si el valor de estado es cero o
	EXIT_SUCCESS, una forma definida seg�n la implementaci�n del estado "terminaci�n
	con �xito" es retornada. Si el valor de estado es EXIT_FAILURE, una forma definida
	seg�n la implementaci�n del estado "terminaci�n sin �xito" es retornada. De lo contrario
	el estado retornado est� definida seg�n la implementaci�n. La funci�n exit no puede
	regresar a su invocador.

	La funci�n exit no retorna ning�n valor.


*/
int main( void )
{
 puts( "Introduzca un caracter. Para salir, escriba \'q\':" );
 while( 1 ) if( toupper(getchar()) == 'Q' ) exit(0);
 return 0;
}
