#include <stdio.h>
#include <ctype.h>
/*
	isprint();
	Comprueba sin un car�cter es imprimible.
		
	isgraph es una macro que verifica el entero c pertenece al rango de caracteres
	imprimibles, que por defecto son todos los caracteres imprimibles, incluido el 
	espacio ' '. El comportamiento depende de la categor�a local de LC_CTYPE.

	El valor de retorno ser� no nulo si c es un car�cter imprimible.








*/


int main()
{
 char cadena[] = ";0 �\003s�R(h &~?\177R� 1/";
 int i;

 for(i = 0; cadena[i]; i++)
 printf("%c, %d\n", cadena[i], isprint(cadena[i]));
 return 0;
}
