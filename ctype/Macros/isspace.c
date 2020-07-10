#include <stdio.h>
#include <ctype.h>
/*
	isspace();
	Comprueba sin un carácter es de tipo espacio.
	
	isspace es una macro que verifica el entero c pertenece grupo de caracteres de 
	espacio,'', tab, retorno de carro, nueva línea, tabulador vertical o salto de página. 
	El comportamiento depende de la categoría local de LC_CTYPE.

	El valor de retorno será no nulo si c es un carácter de tipo espacio.


*/

int main()
{
 char cadena[] = ";0 ñsáR\n(h &~?\177R\tÛ 1/";
 int i;

 for(i = 0; cadena[i]; i++)
 printf("%c, %d\n", cadena[i], isspace(cadena[i]));
 return 0;
}
