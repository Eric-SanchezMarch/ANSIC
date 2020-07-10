#include <stdio.h>
#include <ctype.h>
/*
	isdigit();
	Comprueba sin un car�cter es un d�gito decimal.
	
	isdigit es una macro que verifica el entero c pertenece al rango caracteres de digitos
	decimales, que depende de la categor�a local LC_CTYPE, por defecto, el rango es de
	('0' a '9'). 
	
	El valor de retorno ser� no nulo si c es un d�gito decimal.

*/



int main()
{
 char cadena[] = ";0�f�R(4h&~?R�1/";
 int i;

 for(i = 0; cadena[i]; i++)
 printf("%c, %d\n", cadena[i], isdigit(cadena[i]));
 return 0;
}
