/*
	Definicions 
	
	variables:	
		wchar_t: 	Un tipo entero cuyo intervalo de valores puede representar códigos únicos para todos
					los miembros del conjunto más grande de caracteres extendidos especificado de entre
					las localidades soportadas; el carácter nulo tendrá el número de código, cero, y cada
					miembro del conjunto básico de caracteres el número de código igual a su valor cuando
					usado como el carácter único en una constante de caracteres enteros.
	
	
	
	funcions:
		calloc:		Adjudica espacio para un array de nmemb objetos, cada cual tiene como tamaño tamanyo. 
					El espacio es inicializado a cero todos los bits.
					La función calloc retorna o bien un puntero nulo o bien un puntero al espacio adjudicado
		
					void *calloc(size_t nmemb, size_t tamanyo);
					
		
		wctomb: 	Determina el número de bytes necesitado para representar un carácter multibyte correspondiendo al código
					cuyo valor es wchar (incluyendo cualquier cambio en el estado de traslado). Guard la representación del
					carácter multibyte en el array apuntado por cad (si cad no es un puntero nulo). Al menos MB_CUR_MAX
					caracteres son guardados. Si el valor de wchar es cero, la función wctomb es dejado en el estado inical de
					traslado.
					
					int wctomb(char *cad, wchar_t wchar);
					
					
		mbtowc:		Si cad no es un puntero nulo, la función mbtowc determina el número de bytes contenidos en el carácter
					multibyte apuntado por cad. Entonces determina el código para el valor del tipo wchar_t que corresponde a
					un carácter multibyte. (El valor del código correspondiendo al carácter nulo es cero). Si el car0cter
					multibyte es válido y wcharPtr no es un puntero nulo, la función mbtowc guarda el código en el objeto
					apuntado por wcharPtr. Al menos n bytes del array apuntado por cad serán examinados.

					Si cad es un puntero nulo, la función mblen retorna un valor distinto a cero o cero, si los códigos del
					carácter multibyte, respectivamente, pueden ser o no ser codificados. Si cad no es un puntero nulo, la
					función mblen retorna o bien 0 (si cad apunta a un carácter nulo), o el número de bytes que son contenidos
					en el carácter multibyte (si los siguientes n o menores bytes forman un carácter multibyte válido), o -1 (si no
					forman un carácter multibyte válido). En ningún caso, el valor retornado será mayor que n o el valor de la
					macro MB_CUR_MAX.
					
					int mbtowc(wchar_t *wcharPtr, const char *cad, size_t n);
					
					
		mblen: 		Si cad no es un puntero nulo, la función mblen determina el número de bytes contenidos en el carácter
					multibyte apuntado por cad. Si cad es un puntero nulo, la función mblen retorna un valor distinto a cero o
					cero, si los códigos del carácter multibyte, respectivamente, pueden ser o no ser codificados
	
					Si cad no es un puntero nulo, la función mblen retorna o bien 0 (si cad apunta a un carácter nulo), o el
					número de bytes que son contenidos en el carácter multibyte (si los siguientes n o menores bytes forman un
					carácter multibyte válido), o -1 (si no forman un carácter multibyte válido).
					
					int mblen(const char *cad, size_t n);
					
					
					
	Macro
	
		MB_CUR_MAX: Una expresión entera positiva cuyo valor es el número máximo de bytes en un carácter
					multibyte para el conjunto de caracteres extendidos especificado por la localización
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
 printf( " retorna la longitud del carácter multibyte: %u\n\n", x );
 printf( "Intenta convertir un puntero nulo (NULL) a un" );
 printf( " caracter ancho:\n" );
 mbchar = NULL;
 x = mbtowc( pwchar, mbchar, MB_CUR_MAX );
 printf( "\tBytes convertidos: %u\n", x );
 return 0;
}
