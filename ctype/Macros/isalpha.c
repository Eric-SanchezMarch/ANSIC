#include <stdio.h>
#include <ctype.h>

/*
	isalpha();
	Comprueba sin un carácter es alfabético.
	
	isalpha es una macro que verifica el entero c pertenece al rango de letras (A a Z o a a
	z), por defecto. La verificación se hace mediante una tabla, y su comportamiento
	depende le la categoría LC_CTYPE actual. 

	El valor de retorno será no nulo si c es una letra y cero en caso contrario.


*/



int main()
{
 char cadena[] = ";0sR(h&R1/";
 int i;

 for(i = 0; cadena[i]; i++)
 printf("%c, %d\n", cadena[i], isalpha(cadena[i]));
 return 0;
}
