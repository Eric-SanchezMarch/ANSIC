/*
	strtod:
	
	Convierte la porción inicial de la cadena apuntada por numPtr a una representación de long int. Primero descompone
	la cadena de entrada en tres partes: una secuencia inicial, posiblemente vacía, de caracteres de espacio blanco (tal como
	es especificado por la macro isspace), una secuencia fuente asemejándose a una constante de coma flotante; y una
	cadena final de uno o más caracteres irreconocidos, incluyendo el carácter nulo final de la cadena entrada. Entonces,
	intenta convertir la secuencia fuente a un número de coma flotante, y retorna el resultado.
	
	La forma expandida de la secuencia fuente es un signo, positivo o negativo, opcional, siguiendo una secuencia de
	dígitos opcionalmente conteniendo un carácter de la coma decimal (suele ser un punto), siguiendo un parte exponente
	opcional, pero sin incluir un sufijo de coma flotante. La secuencia fuente está definida como la subsecuencia inicial más
	larga de la cadena de entrada, comenzando por el primer carácter que no es un espacio blanco, que es de la forma
	esperada. La secuencia fuente no contiene caracteres si la cadena de entrada está vacía o consiste completamente de
	espacio en blanco, o si el primer carácter, que no es un espacio blanco, es distinto a un signo, un dígito, o un carácter de
	la coma decimal (o punto decimal).
	
	Si la secuencia fuente tiene la forma esperada, la secuencia de caracteres comenzando por el primer dígito o el carácter
	de la coma decimal (cualquiera que aparezca primero) es interpretada como una constante de coma flotante, excepto que
	el carácter de la coma decimal es usado en lugar de la coma, y si no aparece la parte exponente ni el carácter de la coma
	flotante, la coma decimal es asumido que sigue el último dígito de la cadena. Si la secuencia fuente comienza con un
	signo negativo, el valor resultante de la conversión es negativo. Un puntero a la cadena final es guardado en el objeto
	apuntado por finalPtr, con tal de que finalPtr no es nulo.
	
	Si la secuencia fuente está vacía o no tiene la forma esperada, ninguna conversión es realizada; el valor numPtr es
	guardado en el objeto apuntado por finalPtr, con tal de que finalPtr no es nulo.
	
	A continuación, se muestra el formato usado por esta función:
		
		[eb] [sn] [ddd] [.] [ddd] [e[sn]ddd]
		
		donde:
			[eb] 		Espacio Blanco opcional
			[sn] 		Signo opcional (+ ó -)
			e 			'e' ó 'E' opcional
			[.] 		Coma decimal opcional (punto decimal)
			[ddd]		 Dígitos opcionales.
			
	
	
	La función strtod retorna el valor convertido, si acaso existe. Si no se pudo realizar ninguna conversión, cero es
	retornado. Si el valor correcto no pertenece al intervalo de valores representables, HUGE_VAL positivo o negativo es
	retornado (según el signo del valor), y el valor de la macro ERANGE es guardado en errno. Si el valor correcto pudiera
	causar un "underflow", cero es retornado y el valor de la macro ERANGE es guardado en errno.



	Macros:
	 	isspace: 	de la llibreria ctype
	 				Comprueba sin un carácter es de tipo espacio.
					isspace es una macro que verifica el entero c pertenece grupo de caracteres de espacio, '
					', tab, retorno de carro, nueva línea, tabulador vertical o salto de página. El
					comportamiento depende de la categoría local de LC_CTYPE.



*/

#include <stdio.h>
#include <stdlib.h>
int main(){
 char *finalPtr;
 printf( "Convirtiendo la cadena \"%s\" en un numero: %e\n", "12.345678e-2",
strtod("12.345678e-2", &finalPtr) );
 printf( "Convirtiendo la cadena \"%s\" en un numero: %e\n", "-12.345678e+2",
strtod("-12.345678e+2", &finalPtr) );
 printf( "Convirtiendo la cadena \"%s\" en un numero: %e\n", "1.2345678",
strtod("1.2345678", &finalPtr) );
 printf( "Convirtiendo la cadena \"%s\" en un numero: %e\n", "1.2345678E-22",
strtod("1.2345678E-22", &finalPtr) );
 printf( "Convirtiendo la cadena \"%s\" en un numero: %e\n", "12345.678901234E14",
strtod("12345.678901234E14", &finalPtr) );
 return 0;
}
