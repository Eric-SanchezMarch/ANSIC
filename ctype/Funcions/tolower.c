#include <stdio.h>
#include <ctype.h>
/*
	tolower();
	Convierte un car�cter, en un par�metro entero ch, a min�scula.

	ch debe estar en el rango 0 a 255, y si est� entre A y Z lo convierte a su equivalente en
	el rango a a z, el resto de los valores no son modificados. El valor de retorno es el valor
	convertido si ch era una may�scula, o el valor original en caso contrario.
	Nota: los caracteres en acentuados, o con di�resis, en may�scula y la � no sufren
	modificaciones

*/
int main()
{
 char cadena[] = "ESTO ES UNA CADENA DE PRUEBA";
 int i;
 printf("%s\n", cadena);
 for(i = 0; cadena[i]; i++)
 cadena[i] = tolower(cadena[i]);
 printf("%s\n", cadena);
 return 0;
}
