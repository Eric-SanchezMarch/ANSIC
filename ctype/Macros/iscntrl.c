#include <stdio.h>
#include <ctype.h>
/*
	iscntrl();
	Comprueba sin un car�cter es de control.
	
	iscntrl es una macro que verifica el entero c pertenece al rango caracteres de control,
	que depende de la categor�a local LC_CTYPE, por defecto, el rango es de (0x00 a
	0x1F y 0x7F). 

	El valor de retorno ser� no nulo si c es un car�cter "delete" o un car�cter de control.





*/
int main()
{
 char cadena[] = ";0�s\003�R(h\177&~?\037R�1/";
 int i;

 for(i = 0; cadena[i]; i++)
 if(isprint(cadena[i]))
 printf("%c, %d\n", cadena[i], iscntrl(cadena[i]));
 else
 printf("%d, %d\n", cadena[i], iscntrl(cadena[i]));
 return 0;
}
