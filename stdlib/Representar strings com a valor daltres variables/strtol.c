/*
	
	strtol:		
	
	Convierte la porci�n inicial de la cadena apuntada por numPtr a una representaci�n de long int. Primero descompone
	la cadena de entrada en tres partes: una secuencia inicial, posiblemente vac�a, de caracteres de espacio blanco (tal como
	es especificado por la funci�n isspace), una secuencia fuente asemej�ndose a un entero representado en alguna base
	determinado por el valor de base, y una cadena final de uno o m�s caracteres irreconocidos, incluyendo el car�cter nulo
	final de la cadena entrada. Entonces, intenta convertir la secuencia fuente a un entero, y retorna el resultado.
	
	Si el valor de base es cero, la forma esperada de la secuencia fuente es aqu�lla de una constante entera, opcionalmente
	precedida por un signo m�s o menos, pero sin incluir un sufijo entero. Si el valor de base est� entre 2 y 36, la forma
	esperada de la secuencia fuente es una secuencia de letras y d�gitos representando un entero con una base especificado
	por base, opcionalmente precedida por un signo positivo o negativo, pero sin incluir un sufijo entero. Las letras de a (�
	A) hasta z (� Z) son atribuidos los valores de 10 a 35; s�lo letras cuyos valores atribuidos son menores que aqu�llos de
	la base est�n permitidos. Si el valor de base es 16, los caracteres 0x � 0X puedes opcionalmente preceder la secuencia
	de letras y d�gitos, a continuaci�n del signo, si �ste est� presente.
	
	La secuencia fuente est� definida como la secuencia inicial m�s larga de la cadena de entrada, comenzando por el
	primer car�cter que no es un espacio blanco, que es de la forma esperada. La secuencia fuente no contiene caracteres si
	la cadena de entrada est� vac�a o consiste completamente de espacio en blanco, o si el primer car�cter que no es un
	espacio blanco es distinto a un signo o letra o d�gito permitido.
	
	Si la secuencia fuente tiene la forma esperada y el valor de base es cero, la secuencia de caracteres comenzando por el
	primer d�gito es interpretada como una constante entera. Si la secuencia fuente tiene la forma esperada y el valor de
	base est� entre 2 y 36, es usada como la base para la conversi�n, atribuyendo a cada letra su valor dado tal como
	descrito anteriormente. Si la secuencia fuente comienza con un signo negativo, el valor resultante de la conversi�n es
	negativo. Un puntero a la cadena final es guardado en el objeto apuntado por finalPtr, con tal de que finalPtr no es
	nulo.
	
	Si la secuencia fuente est� vac�a o no tiene la forma esperada, ninguna conversi�n es realizada; el valor numPtr es
	guardado en el objeto apuntado por finalPtr, con tal de que finalPtr no es nulo.


	A continuaci�n, se muestra el formato usado por esta funci�n:
	[eb] [sn] [0] [x] [ddd],

	donde:
	
	[eb] 		Espacio Blanco opcional
	[sn] Signo opcional (+ � -)
	[0] Cero opcional (0)
	[x] 'x' � 'X' opcional
	[ddd] D�gitos opcionales

	Si base es cero, los primeros caracteres de numPtr determinan la base:

	Primer car�cter 		Segundo car�cter 			Cadena interpretada como...

	0 						1 a 7 							Octal
	0 						x � X 							Hexadecimal
	1 a 9 					- (0 a 9) 						Decimal


	La funci�n strtol retorna el valor convertido, si acaso existe. Si no se pudo realizar ninguna conversi�n, cero es
	retornado. Si el valor correcto no pertenece al intervalo de valores representables, LONG_MAX o LONG_MIN es
	retornado (seg�n el signo del valor), y el valor de la macro ERANGE es guardado en errno. 




*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
 char numPtr[9] = "12345678", *finalPtr;
 int base;
 for( base=2; base<=17; base++ )
 printf( "Convirtiendo la cadena \"%s\" en un numero en base %d: %u\n", numPtr,
base, strtol(numPtr, &finalPtr, base) );
 return 0;
}
