#include <stdio.h>
#include <stdlib.h>
/*
	atexit();
	Registra la funci�n apuntada por func, para ser llamada sin argumentos al momento de terminaci�n
	normal del programa. La implementaci�n deber� aceptar el registro de al menos 32 funciones.

	La funci�n atexit retorna cero si el registro tiene �xito, un valor distinto a cero si falla.



	int atexit(void (*func)(void)); 



*/


void antes_de_salir();


int main(){
 atexit( antes_de_salir );	// Cuan introduixigue el valor de getchar, avans de return 0 anirem a la funcio...
 puts( "Esto es una prueba. Introduzca cualquier letra para terminar." );
 getchar();
 return 0;
}

void antes_de_salir(){
 puts( "Nos vamos..." );
}




