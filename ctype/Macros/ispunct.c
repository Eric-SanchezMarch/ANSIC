#include <stdio.h>
#include <ctype.h>
/*
	ispunct
	Comprueba sin un car�cter es correspondiente a un signo de puntuaci�n.
	
	ispunct es una macro que verifica el entero c pertenece al rango de caracteres de los
	signos de puntuaci�n, que por defecto son todos menos los alfanum�ricos y 
	el blanco ' '. El comportamiento depende de la categor�a local de LC_CTYPE.

	El valor de retorno ser� no nulo si c es un signo e puntuaci�n.

*/
int main()
{
 char cadena[] = "aAb.Bc/Cd(D3:1&,75%$/";
 int i;

 for(i = 0; cadena[i]; i++)
 printf("%c, %d\n", cadena[i], ispunct(cadena[i]));
 return 0;
}
