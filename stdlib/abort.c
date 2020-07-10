#include <stdio.h>
#include <stdlib.h>
/*
	abort();
	
	
	La función abort no retorna ningún valor

	Ocasiona una terminación abnormal del programa, al menos que la señal SIGABRT está
	siendo capturado y un controlador de señales no regresa. Si streams abiertos de salida son
	despejados o streams abiertos son cerrados o ficheros temporales son borrados es cosa de
	la definición de la implementación. Una forma definida de la implementación del estado
	"terminación sin éxito" es retornado al entorno local por medio de la llamada a la función
	raise(SIGABRT). La función abort no puede regresar a su invocador.




*/

/*
	puts("");
	
	Esta función escribe la cadena apuntado por cadena en el stream apuntado por stdout, y añade un carácter de línea
	nueva a la salida. El carácter nulo final no es escrito


*/

/*


	ch debe estar en el rango 0 a 255, y si está entre a y z lo convierte a su equivalente en
	el rango A a Z, el resto de los valores no son modificados. El valor de retorno es el
	valor convertido si ch era una minúscula, o el valor original en caso contrario.
	Nota: los caracteres en acentuados, o con diéresis, en minúscula y la ñ no sufren
	modificaciones.


*/







int main( void )
{
 puts( "Introduzca un caracter. Para salir, escriba \'q\':" );
 while( 1 ) if( toupper(getchar()) == 'Q' ) abort();				//tota tecla que pulse toupper la traduira a Majuscula
 return 0;
}
