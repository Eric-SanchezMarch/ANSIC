#include <stdio.h>
#include <stdlib.h>
/*
	abort();
	
	
	La funci�n abort no retorna ning�n valor

	Ocasiona una terminaci�n abnormal del programa, al menos que la se�al SIGABRT est�
	siendo capturado y un controlador de se�ales no regresa. Si streams abiertos de salida son
	despejados o streams abiertos son cerrados o ficheros temporales son borrados es cosa de
	la definici�n de la implementaci�n. Una forma definida de la implementaci�n del estado
	"terminaci�n sin �xito" es retornado al entorno local por medio de la llamada a la funci�n
	raise(SIGABRT). La funci�n abort no puede regresar a su invocador.




*/

/*
	puts("");
	
	Esta funci�n escribe la cadena apuntado por cadena en el stream apuntado por stdout, y a�ade un car�cter de l�nea
	nueva a la salida. El car�cter nulo final no es escrito


*/

/*


	ch debe estar en el rango 0 a 255, y si est� entre a y z lo convierte a su equivalente en
	el rango A a Z, el resto de los valores no son modificados. El valor de retorno es el
	valor convertido si ch era una min�scula, o el valor original en caso contrario.
	Nota: los caracteres en acentuados, o con di�resis, en min�scula y la � no sufren
	modificaciones.


*/







int main( void )
{
 puts( "Introduzca un caracter. Para salir, escriba \'q\':" );
 while( 1 ) if( toupper(getchar()) == 'Q' ) abort();				//tota tecla que pulse toupper la traduira a Majuscula
 return 0;
}
