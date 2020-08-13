/*
	Definicions 
	
	variables:	
		wchar_t: 	Un tipo entero cuyo intervalo de valores puede representar c�digos �nicos para todos
					los miembros del conjunto m�s grande de caracteres extendidos especificado de entre
					las localidades soportadas; el car�cter nulo tendr� el n�mero de c�digo, cero, y cada
					miembro del conjunto b�sico de caracteres el n�mero de c�digo igual a su valor cuando
					usado como el car�cter �nico en una constante de caracteres enteros.
	
	
	
	funcions:
		calloc:		Adjudica espacio para un array de nmemb objetos, cada cual tiene como tama�o tamanyo. 
					El espacio es inicializado a cero todos los bits.
					La funci�n calloc retorna o bien un puntero nulo o bien un puntero al espacio adjudicado
		
					void *calloc(size_t nmemb, size_t tamanyo);
					
		
		wctomb: 	Determina el n�mero de bytes necesitado para representar un car�cter multibyte correspondiendo al c�digo
					cuyo valor es wchar (incluyendo cualquier cambio en el estado de traslado). Guard la representaci�n del
					car�cter multibyte en el array apuntado por cad (si cad no es un puntero nulo). Al menos MB_CUR_MAX
					caracteres son guardados. Si el valor de wchar es cero, la funci�n wctomb es dejado en el estado inical de
					traslado.
					
					int wctomb(char *cad, wchar_t wchar);
					
					
		mbtowc:		Si cad no es un puntero nulo, la funci�n mbtowc determina el n�mero de bytes contenidos en el car�cter
					multibyte apuntado por cad. Entonces determina el c�digo para el valor del tipo wchar_t que corresponde a
					un car�cter multibyte. (El valor del c�digo correspondiendo al car�cter nulo es cero). Si el car0cter
					multibyte es v�lido y wcharPtr no es un puntero nulo, la funci�n mbtowc guarda el c�digo en el objeto
					apuntado por wcharPtr. Al menos n bytes del array apuntado por cad ser�n examinados.

					Si cad es un puntero nulo, la funci�n mblen retorna un valor distinto a cero o cero, si los c�digos del
					car�cter multibyte, respectivamente, pueden ser o no ser codificados. Si cad no es un puntero nulo, la
					funci�n mblen retorna o bien 0 (si cad apunta a un car�cter nulo), o el n�mero de bytes que son contenidos
					en el car�cter multibyte (si los siguientes n o menores bytes forman un car�cter multibyte v�lido), o -1 (si no
					forman un car�cter multibyte v�lido). En ning�n caso, el valor retornado ser� mayor que n o el valor de la
					macro MB_CUR_MAX.
					
					int mbtowc(wchar_t *wcharPtr, const char *cad, size_t n);
					
					
		mblen: 		Si cad no es un puntero nulo, la funci�n mblen determina el n�mero de bytes contenidos en el car�cter
					multibyte apuntado por cad. Si cad es un puntero nulo, la funci�n mblen retorna un valor distinto a cero o
					cero, si los c�digos del car�cter multibyte, respectivamente, pueden ser o no ser codificados
	
					Si cad no es un puntero nulo, la funci�n mblen retorna o bien 0 (si cad apunta a un car�cter nulo), o el
					n�mero de bytes que son contenidos en el car�cter multibyte (si los siguientes n o menores bytes forman un
					car�cter multibyte v�lido), o -1 (si no forman un car�cter multibyte v�lido).
					
					int mblen(const char *cad, size_t n);
					
					
					
	Macro
	
		MB_CUR_MAX: Una expresi�n entera positiva cuyo valor es el n�mero m�ximo de bytes en un car�cter
					multibyte para el conjunto de caracteres extendidos especificado por la localizaci�n
					actual.
					
					 


*/



#include <stdlib.h>
#include <stdio.h>
int main()
{
 int x;
 printf(" x = %i ",x);
 
 char *mbchar = (char *)calloc(1, sizeof( char));
 wchar_t wchar = L'P'; // Long p
 printf( "\tWchar: %x  mbchar: %x \n\n", wchar,mbchar );
  printf("////////////////////////////////////////////////////////////////////\n\n");
 
 wchar_t *pwcnull = NULL;
 wchar_t *pwchar = (wchar_t *)calloc(1, sizeof( wchar_t ));
 printf( "Convertir un caracter ancho a un caracter multibyte:\n" );
 x = wctomb( mbchar, wchar); 															// wctomb determina el numero de bytes necesaris para representar un caracter multibyte correspost al valor de wchar.		
 printf( "\tCaracteres convertidos: %u\n", x );											//%u: Enter sense signe.
 printf( "\tCaracter multibyte: %x\n\n", mbchar );
 printf( "\tWchar: %x\n\n", wchar );
 printf( "Tamany del caracter multibyte (segun mblen): %u\n", mblen(mbchar,MB_CUR_MAX) );
 
 
  printf("////////////////////////////////////////////////////////////////////\n\n");
 
 printf( "Convertir caracter multibyte de nuevo a un caracter ancho:\n" );
 
 
 x = mbtowc( pwchar, mbchar, MB_CUR_MAX );
 printf( "\tBytes convertidos: %u\n", x );
 printf( "\tCaracter ancho: %x\n\n", pwchar );
 
 
  printf("////////////////////////////////////////////////////////////////////\n\n");
 printf( "Intentar convertir cuando el destinatario es nulo (NULL)\n" );
 x = mbtowc( pwcnull, mbchar, MB_CUR_MAX );
 printf( " retorna la longitud del car�cter multibyte: %u\n\n", x );
 printf( "Intenta convertir un puntero nulo (NULL) a un" );
 printf( " caracter ancho:\n" );
 mbchar = NULL;
 x = mbtowc( pwchar, mbchar, MB_CUR_MAX );
 printf( "\tBytes convertidos: %u\n", x );
 return 0;
}
