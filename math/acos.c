#include <stdio.h>
#include <math.h>


/*
	acos();
	
		Calcula el valor principal del arco coseno de x. Puede producirse un error de dominio
		para los argumentos que no estén en el intervalo [-1, +1].


*/
int main()
{
 double x = 0.53693;
 printf( "acos( %f ) = %f\n", x, acos(x) );
 return 0;
}
