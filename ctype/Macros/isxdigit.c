#include <stdio.h>
#include <ctype.h>
/*
	isxdigit();
	Comprueba sin un car�cter es un d�gito hexadecimal.
	
	isxdigit es una macro que verifica el entero c pertenece al rango caracteres de digitos
	decimales, que depende de la categor�a local LC_CTYPE, por defecto, el rango es de
	('0' a '9', 'a' a 'f' y 'A' a 'F'). 

	El valor de retorno ser� no nulo si c es un d�gito hexadecimal.

*/
int main()
{
 char cadena[] = ";0�f�R(4h&5d~?ER�1/";
 int i;

 for(i = 0; cadena[i]; i++)
 printf("%c, %d\n", cadena[i], isxdigit(cadena[i]));
 return 0;
}
