#include <stdio.h>
#include <ctype.h>
/*
	isdigit();
	Comprueba sin un carácter es un dígito decimal.
	
	isdigit es una macro que verifica el entero c pertenece al rango caracteres de digitos
	decimales, que depende de la categoría local LC_CTYPE, por defecto, el rango es de
	('0' a '9'). 
	
	El valor de retorno será no nulo si c es un dígito decimal.

*/



int main()
{
 char cadena[] = ";0ñfáR(4h&~?RÛ1/";
 int i;

 for(i = 0; cadena[i]; i++)
 printf("%c, %d\n", cadena[i], isdigit(cadena[i]));
 return 0;
}
