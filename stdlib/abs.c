#include <stdlib.h>
#include <stdio.h>
/*

abs();     --> <stdlib.h>

	la funcio abs retorna un numero enter a balor absolut. Antenem com absolut un numero enter positiu.
	La funcio abs llegira el balor de la variable i mostrara el valor de la variable, en cas de ser un valor negatiu mostrara el seu valor amb positiu.
	ambsolut no edita el valor de la variable, nomes la llegeix i transforma a positiu.



*/





int main()
{
 int num;
 puts( "Escriba un numero entero:" );
 scanf( "%d", &num );
 printf( "abs( %d ) = %d\n", num, abs(num) );
 printf("%d",num);
 return 0;
}
