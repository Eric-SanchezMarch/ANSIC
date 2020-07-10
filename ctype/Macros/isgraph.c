#include <stdio.h>
#include <ctype.h>
/*
	isgraph();
	Comprueba sin un car�cter es imprimible.
	
	isgraph es una macro que verifica el entero c pertenece al rango de caracteres con
	representaci�n gr�fica, que por defecto son todos menos el espacio ' '. El
	comportamiento depende de la categor�a local de LC_CTYPE.

	El valor de retorno ser� no nulo si c es un car�cter gr�fico.




*/
int main()
{
 char cadena[] = ";0 �s�R(h &~?R� 1/";
 int i;

 for(i = 0; cadena[i]; i++)
 printf("%c, %d\n", cadena[i], isgraph(cadena[i]));
 return 0;
}
