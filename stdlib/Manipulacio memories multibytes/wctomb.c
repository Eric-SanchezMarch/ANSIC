/*

	wctomb: Determina el n�mero de bytes necesitado para representar un car�cter multibyte correspondiendo al c�digo
			cuyo valor es wchar (incluyendo cualquier cambio en el estado de traslado). Guard la representaci�n del
			car�cter multibyte en el array apuntado por cad (si cad no es un puntero nulo). Al menos MB_CUR_MAX
			caracteres son guardados. Si el valor de wchar es cero, la funci�n wctomb es dejado en el estado inical de
			traslado.

			Si cad es un puntero nulo, la funci�n wctomb retorna un valor distinto a cero o cero, si los c�digos del
			car�cter multibyte, respectivamente, tienen o no tienen c�digos dependiendo del estado. Si cad no es un
			puntero nulo, la funci�n wctomb retorna -1 si el valor de wchar no corresponde a un car�cter multibyte
			v�lido, o retorna el n�mero de bytes que est�n contenidos en el car�cter multibyte correspondiendo al valor
			de wchar. En ning�n caso, el valor retornado ser� mayor que n o el valor de la macro MB_CUR_MAX.	

			int wctomb(char *cad, wchar_t wchar);

*/


#include <stdlib.h>
#include <stdio.h>
int main()
{
 int x;
 char *mbchar = (char *)calloc(1, sizeof( char));
 wchar_t wchar = L'a';
 wchar_t *pwcnull = NULL;
 wchar_t *pwchar = (wchar_t *)calloc(1, sizeof( wchar_t ));
 printf( "Convertir un car�cter ancho a un car�cter multibyte:\n" );
 x = wctomb( mbchar, wchar);
 printf( "\tCaracteres convertidos: %u\n", x );
 printf( "\tCar�cter multibyte: %x\n\n", mbchar );
 printf( "Tama�o del car�cter multibyte (seg�n mblen): %u\n", mblen(mbchar,
MB_CUR_MAX) );
 printf( "Convertir car�cter multibyte de nuevo a un car�cter ancho:\n" );
 x = mbtowc( pwchar, mbchar, MB_CUR_MAX );
 printf( "\tBytes convertidos: %u\n", x );
 printf( "\tCar�cter ancho: %x\n\n", pwchar );
 printf( "Intentar convertir cuando el destinatario es nulo (NULL)\n" );
 printf( " retorna la longitud del car�cter multibyte: " );
 x = mbtowc( pwcnull, mbchar, MB_CUR_MAX );
  printf( "%u\n\n", x );
 printf( "Intenta convertir un puntero nulo (NULL) a un" );
 printf( " car�cter ancho:\n" );
 mbchar = NULL;
 x = mbtowc( pwchar, mbchar, MB_CUR_MAX );
 printf( "\tBytes convertidos: %u\n", x );
 return 0;
}
