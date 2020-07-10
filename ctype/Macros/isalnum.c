#include <stdio.h>
#include <ctype.h>
/*
	isalnum();
	Comprueba sin un carácter es alfanumérico.
	
	isalnum es una macro que verifica el entero c pertenece al rango de letras (A a Z o a a z) 
	o al de dígitos (0 a 9), por defecto. La verificación se hace mediante una tabla, y su
	comportamiento depende le la categoría LC_CTYPE actual. 

	El valor de retorno será no nulo si c es una letra o un número, y cero en caso contrario.

*/


int main(){
 char cadena[] = "a??'nE€pte'c!!";
 int i;
 for(i = 0; cadena[i]; i++){ 
 	printf("%c",cadena[i]);
 }
 
 printf("\n");

 for(i = 0; cadena[i]; i++){
 printf("%d", isalnum(cadena[i])); 	
 }

 return 0;
}
