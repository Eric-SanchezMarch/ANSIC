#include <stdio.h>
#include <ctype.h>
/*
	isprint();
	Comprueba sin un carácter es imprimible.
		
	isgraph es una macro que verifica el entero c pertenece al rango de caracteres
	imprimibles, que por defecto son todos los caracteres imprimibles, incluido el 
	espacio ' '. El comportamiento depende de la categoría local de LC_CTYPE.

	El valor de retorno será no nulo si c es un carácter imprimible.








*/


int main()
{
 char cadena[] = ";0 ñ\003sáR(h &~?\177RÛ 1/";
 int i;

 for(i = 0; cadena[i]; i++)
 printf("%c, %d\n", cadena[i], isprint(cadena[i]));
 return 0;
}
