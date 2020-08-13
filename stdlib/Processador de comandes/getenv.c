#include <stdio.h>
#include <stdlib.h>
/*
	getenv
	Busca una "lista de entorno", proporcionado por el entorno local, para una cadena que
	empareje la cadena apuntada por nombre. 
	El conjunto de nombres del entorno y el m�todo para alterar la lista de entorno est�n definidos 
	seg�n la implementaci�n.

	La funci�n getenv retorna un puntero a la cadena asociado con el miembro emparejado de
	la lista. La cadena que apunta a ello no ser� modificado por el programa, pero puede ser
	sobreescrito por una llamada posterior a la funci�n getenv. Si el nombre especificado no
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
