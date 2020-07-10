#include <stdio.h>
#include <ctype.h>
/*
	isupper();
	Comprueba sin un carácter es de tipo mayúscula.

	islower es una macro que verifica el entero c pertenece al rango de caracteres de letras
	mayúsculas, que por defecto son los que están en el rango A a Z. El comportamiento
	depende de la categoría local de LC_CTYPE.

	El valor de retorno será no nulo si c es un carácter en mayúscula





*/

int main()
{
 char cadena[] = "aAbBcCdD31&75$/";
 int i;

 for(i = 0; cadena[i]; i++)
 printf("%c, %d\n", cadena[i], isupper(cadena[i]));
 return 0;
}
