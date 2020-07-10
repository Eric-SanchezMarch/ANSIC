#include <stdio.h>
#include <ctype.h>
/*
	isascii();
	Comprueba sin un car·cter pertenece al ASCII de 7 bits.
	isascii es una macro que verifica el entero c pertenece al rango de (0 a 127). Esta macro
	est· definida para todos lo valores enteros.

	El valor de retorno ser· no nulo si c est· en el rango entre 0 y 127, en hezadecimal
	entre 0x00 y 0x7f.



*/
int main()
{
 char cadena[] = ";0Òs·R(h&~?R€1/";		//€ es mostra com un bloc de ciment.
 int i;

 for(i = 0; cadena[i]; i++)
 printf("%c, %d\n", cadena[i], isascii(cadena[i]));
 return 0;
}
