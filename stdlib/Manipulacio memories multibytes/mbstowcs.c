/*
	defincions: 
	
		funcio mbstowcs:	La función mbstowcs convierte una secuenca de caracteres multibyte que empiezan en el estado
							inicial de traslado del array apuntado por cad en una secuencia códigos correspondientes y guarda
							no más de n códigos en un array apuntado por wcharsPtr. Ninguno de los caracteres multibyte que
							siguen después de un carácter nulo (el cual es convertido en un código con valor cero) será
							examinado o convertido. Cada carácter multibyte es convertido como si hubiese llamado a la
							función mbtowc, excepto que el estado de traslado de la función mbtowc no es afectado.

							No más de n elementos serán modificados en el array apuntado por wcharsPtr. El comportamiento
							de copiado entre objetos que se superimponen no está definido.

							size_t mbstowcs(wchar_t *wcharsPtr, const char *cad, size_t n);
							
							valor de retorn:
							Si un carácter multibyte es encotrado, la función mbstowcs retorna (size_t)-1. De lo contrario, la
							función mbstowcs retorna el número de elementos modificados del array, sin incluir un código para
							el carácter nulo, si existe.



*/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int x;
 char *mbst = (char *)malloc(MB_CUR_MAX);
 wchar_t *pwst = L"Hi";
 wchar_t *pwc = (wchar_t *)malloc(sizeof( wchar_t));
 printf( "MB_CUR_MAX = %d\n\n", MB_CUR_MAX );
 printf( "Convertir a una cadena multibyte:\n" );
 x = wcstombs( mbst, pwst, MB_CUR_MAX );
 printf( "\tCaracteres convertidos %u\n", x );
 printf( "\tValor hexadecimal del primer" );
 printf( " carácter multibyte: %#.4x\n\n", mbst );
 printf( "Convertir de nuevo a una cadena de caracteres anchas:\n" );
 x = mbstowcs( pwc, mbst, MB_CUR_MAX );
 printf( "\tCaracteres convertidos: %u\n",x );
 printf( "\tValor hexadecimal del primer" );
 printf( " carácter ancho: %#.4x\n\n", pwc );
 return 0;
}
