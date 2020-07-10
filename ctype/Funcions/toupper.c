#include <stdio.h>
#include <ctype.h>

/*
	toupper();
	Convierte un carácter, en un parámetro entero ch, a mayúscula.
	
	ch debe estar en el rango 0 a 255, y si está entre a y z lo convierte a su equivalente en
	el rango A a Z, el resto de los valores no son modificados. El valor de retorno es el
	valor convertido si ch era una minúscula, o el valor original en caso contrario.
	Nota: los caracteres en acentuados, o con diéresis, en minúscula y la ñ no sufren
	modificaciones.	

*/
int main()
{
 char cadena[] = "esto es una cadena de prueba";
 int i;
 printf("%s\n", cadena);
 for(i = 0; cadena[i]; i++)
 cadena[i] = toupper(cadena[i]);
 printf("%s\n", cadena);
 return 0;
}
