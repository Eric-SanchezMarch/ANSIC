#include <stdlib.h>
#include <stdio.h>
/*
	labs(num);
	La función labs retorna el valor absoluto (de tipo long int).

*/
int main(){
 long int num;
 puts( "Escriba un numero entero:" );
 scanf( "%d", &num );
 printf( "labs( %d ) = %d\n", num, labs(num) );
 return 0;
}
