/*
	funcio:
		mbtowc:		Si cad no es un puntero nulo, la función mbtowc determina el número de bytes contenidos en el carácter
					multibyte apuntado por cad. Entonces determina el código para el valor del tipo wchar_t que corresponde a
					un carácter multibyte. (El valor del código correspondiendo al carácter nulo es cero). Si el car0cter
					multibyte es válido y wcharPtr no es un puntero nulo, la función mbtowc guarda el código en el objeto
					apuntado por wcharPtr. Al menos n bytes del array apuntado por cad serán examinados.

					Valor de retorn
					
					Si cad es un puntero nulo, la función mblen retorna un valor distinto a cero o cero, si los códigos del
					carácter multibyte, respectivamente, pueden ser o no ser codificados. Si cad no es un puntero nulo, la
					función mblen retorna o bien 0 (si cad apunta a un carácter nulo), o el número de bytes que son contenidos
					en el carácter multibyte (si los siguientes n o menores bytes forman un carácter multibyte válido), o -1 (si no
					forman un carácter multibyte válido). En ningún caso, el valor retornado será mayor que n o el valor de la
					macro MB_CUR_MAX.
					
	macro: 
		MB_CUR_MAX:	Una expresión entera positiva cuyo valor es el número máximo de bytes en un carácter
					multibyte para el conjunto de caracteres extendidos especificado por la localización
					actual (categoría LC_CTYPE), y cuyo valor no es nunca mayor que MB_LEN_MAX.
					
					
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
