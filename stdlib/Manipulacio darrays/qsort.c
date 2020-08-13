/*

	qsort: 	Ordena un array de nmemb objetos. El elemento inicial es apuntado por base. El tama�o de cada elemento del array
			est� especificado por tamanyo. El contenido del array es ordenado en el orden de ascienso seg�n una funci�n de
			comparaci�n apuntada por comparar, la cual es llamada con dos argumentos que apuntan a los objetos a ser
			comparados. La funci�n retornar� un entero menor, igual, o mayor que cero si el primer objeto es considerado,
			respectivamente a ser menor, igual, o mayor que el segundo. Si los dos elementos son iguales, su orden en el array
			ordenado no est� definido 

			La funcio qsort no retorna cap valor.


*/

/* Implementaci�n del algoritmo quick-sort para la ordenaci�n de vectores
** y bsearch para buscar ciertos elementos
*/
#include <stdlib.h>
#include <stdio.h>
#define ELEMENTOS 100
/* Prototipo de la funci�n de comparar */
int comparar(const void *arg1, const void *arg2)
{
 if(*(int *)arg1 < *(int *)arg2) return -1;
 else if(*(int *)arg1 > *(int *)arg2) return 1;
 else return 0;
}
int main()
{
 int i, num;
 int lista[ELEMENTOS];
 int *elementoPtr;
 /* Contenido aleatorio */
 for(i = 0; i < ELEMENTOS; i++) lista[i] = rand() % 100 + 1;
 /* Quick-Sort */
 qsort(lista, ELEMENTOS, sizeof(lista[0]), comparar);
 /* Mostramos la lista ordenada */
 for(i = 0; i < ELEMENTOS; i++) printf("%d ", lista[i]);
 printf("\n");
 /* Ahora busquemos algunos elementos en la lista */
 puts( "Especifique un numero a encontrar dentro de la lista ordenada\n(un numero negativo para salir):" );
 scanf( "%d", &num );
 while( num >= 0 )
  {
 if( (elementoPtr = bsearch( num, lista, ELEMENTOS, sizeof(lista[0]), comparar)) != NULL )
 printf( "Encontrado: %d\n", *elementoPtr );
 else
 printf( "No encontrado: %d\n", num );
 scanf( "%d", &num );
 }
 return 0;
}
 
