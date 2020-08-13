
/*
	qsort(vector, elements, es el tamany de llista i comparar.);
		per lo que el numero despais a llista seran 100



*/



/* EJEMPLO */
/* Implementación del algoritmo quick-sort para la ordenación de vectores
** y bsearch para buscar ciertos elementos
*/
#include <stdlib.h>
#include <stdio.h>
#define ELEMENTOS 100
/* Prototipo de la función de comparar */
int comparar(const void *arg1, const void *arg2);
int main(){

 int i, num;
 int lista[ELEMENTOS]; 
 int *elementoPtr;
 
 
 /* Contenido aleatorio */
 for(i = 0; i < ELEMENTOS; i++){ // elementos vale 100
 lista[i] = rand() % 100 + 1;
 }  
 /* Quick-Sort */
 qsort(lista, ELEMENTOS, sizeof(lista[0]), comparar);			//sizeof ve a significar tamany de...
 																// Javors podem ellgir 
 
 /* Mostramos la lista ordenada */
 for(i = 0; i < ELEMENTOS; i++) printf("%d ", lista[i]);
 printf("\n");
 
 /* Ahora busquemos algunos elementos en la lista */
 puts( "Especifique un numero a encontrar dentro de la lista ordenada\n(un numero negativo para salir):" );
 scanf( "%d", &num );
 
 while( num >= 0 ){
 	if( (elementoPtr = bsearch( num, lista, ELEMENTOS, sizeof(lista[0]), comparar)) != NULL ){
 		printf( "Encontrado: %d\n", *elementoPtr );
	} 
 	else{
		printf( "No encontrado: %d\n", num );
 		scanf( "%d", &num );
	} 				
}

 return 0;
}

int comparar(const void *arg1, const void *arg2){
	if(*(int *)arg1 < *(int *)arg2){
		 return -1;
 	}else if(*(int *)arg1 > *(int *)arg2){
		  return 1;
 	}else{
		return 0;
	 }	 
}
/* FIN DE EJEMPLO */ 
