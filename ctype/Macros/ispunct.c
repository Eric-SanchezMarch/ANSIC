#include <stdio.h>
#include <ctype.h>
/*
	ispunct
	Comprueba sin un carácter es correspondiente a un signo de puntuación.
	
	ispunct es una macro que verifica el entero c pertenece al rango de caracteres de los
	signos de puntuación, que por defecto son todos menos los alfanuméricos y 
	el blanco ' '. El comportamiento depende de la categoría local de LC_CTYPE.

	El valor de retorno será no nulo si c es un signo e puntuación.

*/
int main()
{
 char cadena[] = "aAb.Bc/Cd(D3:1&,75%$/";
 int i;

 for(i = 0; cadena[i]; i++)
 printf("%c, %d\n", cadena[i], ispunct(cadena[i]));
 return 0;
}
