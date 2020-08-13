/*
	
	strtol:		
	
	Convierte la porción inicial de la cadena apuntada por numPtr a una representación de long int. Primero descompone
	la cadena de entrada en tres partes: una secuencia inicial, posiblemente vacía, de caracteres de espacio blanco (tal como
	es especificado por la función isspace), una secuencia fuente asemejándose a un entero representado en alguna base
	determinado por el valor de base, y una cadena final de uno o más caracteres irreconocidos, incluyendo el carácter nulo
	final de la cadena entrada. Entonces, intenta convertir la secuencia fuente a un entero, y retorna el resultado.
	
	Si el valor de base es cero, la forma esperada de la secuencia fuente es aquélla de una constante entera, opcionalmente
	precedida por un signo más o menos, pero sin incluir un sufijo entero. Si el valor de base está entre 2 y 36, la forma
	esperada de la secuencia fuente es una secuencia de letras y dígitos representando un entero con una base especificado
	por base, opcionalmente precedida por un signo positivo o negativo, pero sin incluir un sufijo entero. Las letras de a (ó
	A) hasta z (ó Z) son atribuidos los valores de 10 a 35; sólo letras cuyos valores atribuidos son menores que aquéllos de
	la base están permitidos. Si el valor de base es 16, los caracteres 0x ó 0X puedes opcionalmente preceder la secuencia
	de letras y dígitos, a continuación del signo, si éste está presente.
	
	La secuencia fuente está definida como la secuencia inicial más larga de la cadena de entrada, comenzando por el
	primer carácter que no es un espacio blanco, que es de la forma esperada. La secuencia fuente no contiene caracteres si
	la cadena de entrada está vacía o consiste completamente de espacio en blanco, o si el primer carácter que no es un
	espacio blanco es distinto a un signo o letra o dígito permitido.
	
	Si la secuencia fuente tiene la forma esperada y el valor de base es cero, la secuencia de caracteres comenzando por el
	primer dígito es interpretada como una constante entera. Si la secuencia fuente tiene la forma esperada y el valor de
	base está entre 2 y 36, es usada como la base para la conversión, atribuyendo a cada letra su valor dado tal como
	descrito anteriormente. Si la secuencia fuente comienza con un signo negativo, el valor resultante de la conversión es
	negativo. Un puntero a la cadena final es guardado en el objeto apuntado por finalPtr, con tal de que finalPtr no es
	nulo.
	
	Si la secuencia fuente está vacía o no tiene la forma esperada, ninguna conversión es realizada; el valor numPtr es
	guardado en el objeto apuntado por finalPtr, con tal de que finalPtr no es nulo.


	A continuación, se muestra el formato usado por esta función:
	[eb] [sn] [0] [x] [ddd],

	donde:
	
	[eb] 		Espacio Blanco opcional
	[sn] Signo opcional (+ ó -)
	[0] Cero opcional (0)
	[x] 'x' ó 'X' opcional
	[ddd] Dígitos opcionales

	Si base es cero, los primeros caracteres de numPtr determinan la base:

	Primer carácter 		Segundo carácter 			Cadena interpretada como...

	0 						1 a 7 							Octal
	0 						x ó X 							Hexadecimal
	1 a 9 					- (0 a 9) 						Decimal


	La función strtol retorna el valor convertido, si acaso existe. Si no se pudo realizar ninguna conversión, cero es
	retornado. Si el valor correcto no pertenece al intervalo de valores representables, LONG_MAX o LONG_MIN es
	retornado (según el signo del valor), y el valor de la macro ERANGE es guardado en errno. 




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
