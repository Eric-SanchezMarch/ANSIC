#include <stdio.h>
#include <ctype.h>
/*
	islower();
	Comprueba sin un car�cter es de tipo min�scula.
	
	islower es una macro que verifica el entero c pertenece al rango de caracteres de letras
	min�sculas, que por defecto son los que est�n en el rango a a z. El comportamiento
	depende de la categor�a local de LC_CTYPE.

	El valor de retorno ser� no nulo si c es un car�cter en min�scula


*/


int main()
{
 char cadena[] = "aAbBcCdD31&75$/";
 int i;

 for(i = 0; cadena[i]; i++)
 printf("%c, %d\n", cadena[i], islower(cadena[i]));
 return 0;
}

