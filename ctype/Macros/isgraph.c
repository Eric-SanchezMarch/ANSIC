#include <stdio.h>
#include <ctype.h>
/*
	isgraph();
	Comprueba sin un carácter es imprimible.
	
	isgraph es una macro que verifica el entero c pertenece al rango de caracteres con
	representación gráfica, que por defecto son todos menos el espacio ' '. El
	comportamiento depende de la categoría local de LC_CTYPE.

	El valor de retorno será no nulo si c es un carácter gráfico.




*/
int main()
{
 char cadena[] = ";0 ñsáR(h &~?RÛ 1/";
 int i;

 for(i = 0; cadena[i]; i++)
 printf("%c, %d\n", cadena[i], isgraph(cadena[i]));
 return 0;
}
