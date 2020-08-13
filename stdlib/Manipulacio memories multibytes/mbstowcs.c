/*
	defincions: 
	
		funcio mbstowcs:	La funci�n mbstowcs convierte una secuenca de caracteres multibyte que empiezan en el estado
							inicial de traslado del array apuntado por cad en una secuencia c�digos correspondientes y guarda
							no m�s de n c�digos en un array apuntado por wcharsPtr. Ninguno de los caracteres multibyte que
							siguen despu�s de un car�cter nulo (el cual es convertido en un c�digo con valor cero) ser�
							examinado o convertido. Cada car�cter multibyte es convertido como si hubiese llamado a la
							funci�n mbtowc, excepto que el estado de traslado de la funci�n mbtowc no es afectado.

							No m�s de n elementos ser�n modificados en el array apuntado por wcharsPtr. El comportamiento
							de copiado entre objetos que se superimponen no est� definido.

							size_t mbstowcs(wchar_t *wcharsPtr, const char *cad, size_t n);
							
							valor de retorn:
							Si un car�cter multibyte es encotrado, la funci�n mbstowcs retorna (size_t)-1. De lo contrario, la
							funci�n mbstowcs retorna el n�mero de elementos modificados del array, sin incluir un c�digo para
							el car�cter nulo, si existe.



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
 printf( " car�cter multibyte: %#.4x\n\n", mbst );
 printf( "Convertir de nuevo a una cadena de caracteres anchas:\n" );
 x = mbstowcs( pwc, mbst, MB_CUR_MAX );
 printf( "\tCaracteres convertidos: %u\n",x );
 printf( "\tValor hexadecimal del primer" );
 printf( " car�cter ancho: %#.4x\n\n", pwc );
 return 0;
}
