#include <stdio.h>
#include <ctype.h>
/*
	islower();
	Comprueba sin un carácter es de tipo minúscula.
	
	islower es una macro que verifica el entero c pertenece al rango de caracteres de letras
	minúsculas, que por defecto son los que están en el rango a a z. El comportamiento
	depende de la categoría local de LC_CTYPE.

	El valor de retorno será no nulo si c es un carácter en minúscula


*/


int main()
{
 char cadena[] = "aAbBcCdD31&75$/";
 int i;

 for(i = 0; cadena[i]; i++)
 printf("%c, %d\n", cadena[i], islower(cadena[i]));
 return 0;
}

