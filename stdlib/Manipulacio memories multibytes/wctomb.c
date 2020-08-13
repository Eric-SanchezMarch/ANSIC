/*

	wctomb: Determina el número de bytes necesitado para representar un carácter multibyte correspondiendo al código
			cuyo valor es wchar (incluyendo cualquier cambio en el estado de traslado). Guard la representación del
			carácter multibyte en el array apuntado por cad (si cad no es un puntero nulo). Al menos MB_CUR_MAX
			caracteres son guardados. Si el valor de wchar es cero, la función wctomb es dejado en el estado inical de
			traslado.

			Si cad es un puntero nulo, la función wctomb retorna un valor distinto a cero o cero, si los códigos del
			carácter multibyte, respectivamente, tienen o no tienen códigos dependiendo del estado. Si cad no es un
			puntero nulo, la función wctomb retorna -1 si el valor de wchar no corresponde a un carácter multibyte
			válido, o retorna el número de bytes que están contenidos en el carácter multibyte correspondiendo al valor
			de wchar. En ningún caso, el valor retornado será mayor que n o el valor de la macro MB_CUR_MAX.	

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
 printf( "Convertir un carácter ancho a un carácter multibyte:\n" );
 x = wctomb( mbchar, wchar);
 printf( "\tCaracteres convertidos: %u\n", x );
 printf( "\tCarácter multibyte: %x\n\n", mbchar );
 printf( "Tamaño del carácter multibyte (según mblen): %u\n", mblen(mbchar,
MB_CUR_MAX) );
 printf( "Convertir carácter multibyte de nuevo a un carácter ancho:\n" );
 x = mbtowc( pwchar, mbchar, MB_CUR_MAX );
 printf( "\tBytes convertidos: %u\n", x );
 printf( "\tCarácter ancho: %x\n\n", pwchar );
 printf( "Intentar convertir cuando el destinatario es nulo (NULL)\n" );
 printf( " retorna la longitud del carácter multibyte: " );
 x = mbtowc( pwcnull, mbchar, MB_CUR_MAX );
  printf( "%u\n\n", x );
 printf( "Intenta convertir un puntero nulo (NULL) a un" );
 printf( " carácter ancho:\n" );
 mbchar = NULL;
 x = mbtowc( pwchar, mbchar, MB_CUR_MAX );
 printf( "\tBytes convertidos: %u\n", x );
 return 0;
}
