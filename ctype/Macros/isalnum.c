#include <stdio.h>
#include <ctype.h>
/*
	isalnum();
	Comprueba sin un car�cter es alfanum�rico.
	
	isalnum es una macro que verifica el entero c pertenece al rango de letras (A a Z o a a z) 
	o al de d�gitos (0 a 9), por defecto. La verificaci�n se hace mediante una tabla, y su
	comportamiento depende le la categor�a LC_CTYPE actual. 

	El valor de retorno ser� no nulo si c es una letra o un n�mero, y cero en caso contrario.

*/


int main(){
 char cadena[] = "a??'nE�pte'c!!";
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
