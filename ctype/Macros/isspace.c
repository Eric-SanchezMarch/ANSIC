#include <stdio.h>
#include <ctype.h>
/*
	isspace();
	Comprueba sin un car�cter es de tipo espacio.
	
	isspace es una macro que verifica el entero c pertenece grupo de caracteres de 
	espacio,'', tab, retorno de carro, nueva l�nea, tabulador vertical o salto de p�gina. 
	El comportamiento depende de la categor�a local de LC_CTYPE.

	El valor de retorno ser� no nulo si c es un car�cter de tipo espacio.


*/

int main()
{
 char cadena[] = ";0 �s�R\n(h &~?\177R\t� 1/";
 int i;

 for(i = 0; cadena[i]; i++)
 printf("%c, %d\n", cadena[i], isspace(cadena[i]));
 return 0;
}
