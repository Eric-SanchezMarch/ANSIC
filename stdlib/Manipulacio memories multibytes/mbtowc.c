/*
	funcio:
		mbtowc:		Si cad no es un puntero nulo, la funci�n mbtowc determina el n�mero de bytes contenidos en el car�cter
					multibyte apuntado por cad. Entonces determina el c�digo para el valor del tipo wchar_t que corresponde a
					un car�cter multibyte. (El valor del c�digo correspondiendo al car�cter nulo es cero). Si el car0cter
					multibyte es v�lido y wcharPtr no es un puntero nulo, la funci�n mbtowc guarda el c�digo en el objeto
					apuntado por wcharPtr. Al menos n bytes del array apuntado por cad ser�n examinados.

					Valor de retorn
					
					Si cad es un puntero nulo, la funci�n mblen retorna un valor distinto a cero o cero, si los c�digos del
					car�cter multibyte, respectivamente, pueden ser o no ser codificados. Si cad no es un puntero nulo, la
					funci�n mblen retorna o bien 0 (si cad apunta a un car�cter nulo), o el n�mero de bytes que son contenidos
					en el car�cter multibyte (si los siguientes n o menores bytes forman un car�cter multibyte v�lido), o -1 (si no
					forman un car�cter multibyte v�lido). En ning�n caso, el valor retornado ser� mayor que n o el valor de la
					macro MB_CUR_MAX.
					
	macro: 
		MB_CUR_MAX:	Una expresi�n entera positiva cuyo valor es el n�mero m�ximo de bytes en un car�cter
					multibyte para el conjunto de caracteres extendidos especificado por la localizaci�n
					actual (categor�a LC_CTYPE), y cuyo valor no es nunca mayor que MB_LEN_MAX.
					
					
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
