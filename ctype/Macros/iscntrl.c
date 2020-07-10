#include <stdio.h>
#include <ctype.h>
/*
	iscntrl();
	Comprueba sin un carácter es de control.
	
	iscntrl es una macro que verifica el entero c pertenece al rango caracteres de control,
	que depende de la categoría local LC_CTYPE, por defecto, el rango es de (0x00 a
	0x1F y 0x7F). 

	El valor de retorno será no nulo si c es un carácter "delete" o un carácter de control.





*/
int main()
{
 char cadena[] = ";0ñs\003áR(h\177&~?\037RÛ1/";
 int i;

 for(i = 0; cadena[i]; i++)
 if(isprint(cadena[i]))
 printf("%c, %d\n", cadena[i], iscntrl(cadena[i]));
 else
 printf("%d, %d\n", cadena[i], iscntrl(cadena[i]));
 return 0;
}
