#include <stdio.h>
#include <stdlib.h>
/*
	getenv
	Busca una "lista de entorno", proporcionado por el entorno local, para una cadena que
	empareje la cadena apuntada por nombre. 
	El conjunto de nombres del entorno y el método para alterar la lista de entorno están definidos 
	según la implementación.

	La función getenv retorna un puntero a la cadena asociado con el miembro emparejado de
	la lista. La cadena que apunta a ello no será modificado por el programa, pero puede ser
	sobreescrito por una llamada posterior a la función getenv. Si el nombre especificado no
	puede ser encontrado, un puntero nulo es retornado





*/
int main( void )
{
 char *directorioPtr, *pathPtr;
 pathPtr = getenv( "PATH" );
 puts( "La lista de directorios en el PATH es la siguiente:" );
 directorioPtr = strtok(pathPtr, ";\n" );
 puts( directorioPtr );
 while( (directorioPtr = strtok(NULL, ";\n")) != NULL )
 puts( directorioPtr );
 return 0;
}
