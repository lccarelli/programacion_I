/*
 ============================================================================
 Name        : ordenamientoEjercicio_1.c
 Author      : lau
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define QTY 6

void printArrayInt(int* pArray, int limite);
int ordenamientoLudmila(int* array, int limite);
int ordenamientoBurbujeoMejorado(int* pArray, int limite);

int main(void) {


	int miArray[QTY] = {3,2,5,4,8,8};

	printf("antes de ordenar->");
	printArrayInt(miArray, QTY);

	if(ordenamientoLudmila(miArray, QTY) == 0) {
		printf("\ndespues de ordenar ->");
		printArrayInt(miArray, QTY);
	}
	return EXIT_SUCCESS;
}

int ordenamientoBurbujeoMejorado(int* pArray, int limite){

	int retorno = -1;
	int aux;
	int desordenado;
	int contador = 0;

	if(pArray!=NULL && limite>0){

		do {

			desordenado=0;

			limite--;
			for(int i=0; i<limite;i++){

				aux = pArray[i];
				contador++;

				if(pArray[i]>pArray[i+1]){

					pArray[i] = pArray[i+1];
					pArray[i+1] = aux;
					desordenado = 1;
				}
			}

		} while (desordenado);

		printf("\ncantidad de ciclos while -> %d", contador);
		retorno=0;
	}

	return retorno;
}


void printArrayInt(int* pArray, int limite){

	if(pArray!=NULL && limite >0){

		for(int i=0; i<limite;i++){
			printf("\nIndice: %d - Valor: %d", i, pArray[i]);
		}
	}
}


//"FOR i=0 i<limite-1 i++
//    1- BUSCO EL MENOR DESDE INDICE i
//    IF i != indiceMinimo
//         2 - EN UN AUXILIAR GUARDO EL VALOR DEL INDICE [i]
//         3- COLOCO EL MENOR EN EL INDICE [i]
//         4- COLOCO AUX EN EL INDICE [indiceMinimo]


int ordenamientoLudmila(int* array, int limite){

	int indiceMinimo;
	int aux;
	int retorno = -1;

	printf("\nentre al for");

	if(array!=NULL && limite>0){
		printf("\nentre al for");

			for(int i=0; i<limite-1; i++){
				printf("\nentre al for");

				if(array[i]<array[i+1]){
					indiceMinimo = i;
					printf("\nentre al if");
				}

				printf("\nindiceMinimo-> %d - valor %d", indiceMinimo, array[indiceMinimo]);
				printf("\n[i] -> %d ", i);

				if(i!=indiceMinimo){
					printf("\nindice[i]-> %d - valor %d", i, array[i]);
					printf("\nindice[minimo]-> %d - valor %d", indiceMinimo, array[indiceMinimo]);
					aux = array[i];
					array[i] = array[indiceMinimo];
					array[indiceMinimo] = aux;
				}
			}

		retorno = 0;
	}

	return retorno;

}
