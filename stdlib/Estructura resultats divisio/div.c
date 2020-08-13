#include <stdlib.h>
#include <stdio.h>
/*
	div();
	Calcula el cociente y resto de la divisi�n del numerador num entre el denominador denom.
	 
	Si la divisi�n es inexacta, el cociente resultante es el entero de menor magnitud que es el m�s 
	pr�ximo al cociente algebraico. Si el resultado no puede ser representado,
	el comportamiento no est� definido; de lo contrario, quot * denom + rem igualar� num.

	La funci�n div retorna la estructura de tipo div_t, conteniendo el cociente y el resto. 
	La estructura contiene los siguientes miembros, en cualquier orden:
	
				int quot; // cociente //
				int rem; // resto //

*/
int main(){
 div_t d;
 int num, denom;
 puts( "Escriba el numerador y el denominador (separados por un espacio):" );
 scanf( "%d %d", &num, &denom );
 d = div( num, denom );
 printf( "ldiv( %d, %d ) : cociente = %d, resto = %d\n", num, denom, d.quot, d.rem
);
 return 0;
}
