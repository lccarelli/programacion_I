/*
 ============================================================================
 Name        : ordenamientoPorBurbujeo.c
 Author      : robot
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define QTY_EMPLEADOS 9


int printArrayInt(int* pArray, int limite);
int ordenamientoArrayInt(int* pArray, int limite);
int ordenamientoArrayIntMediocre(int* pArray, int limite);

int main(void) {

	int arrayEdades[QTY_EMPLEADOS] = {54,26,93,17,77,31,44,55,27};

	//printArrayInt(arrayEdades, QTY_EMPLEADOS);
	//ordenamientoArrayInt(arrayEdades, QTY_EMPLEADOS);
	//printArrayInt(arrayEdades, QTY_EMPLEADOS);

	printf("-----------------------------------------------");

	ordenamientoArrayIntMediocre(arrayEdades, QTY_EMPLEADOS);
	printArrayInt(arrayEdades, QTY_EMPLEADOS);

	return EXIT_SUCCESS;
}


int printArrayInt(int* pArray, int limite){

	int retorno=-1;
	if(pArray!=NULL && limite >0){
		retorno=0;
		for(int i=0; i<limite;i++){
			printf("\n[DEBBUG]-> Indice: %d - Valor: %d", i, pArray[i]);
		}
	}

	return retorno;
}


int ordenamientoArrayInt(int* pArray, int limite){

	int flagSwap;
	int contador=0;
	int retorno = -1;
	int buffer;
	int nuevoLimite;

	if(pArray!=NULL && limite>0){

		nuevoLimite=limite-1;

		do{
			flagSwap=0;

			for(int i=0; i<nuevoLimite;i++){

				if(pArray[i]<pArray[i+1]){

					flagSwap=1;

					buffer = pArray[i];
					pArray[i] = pArray[i+1];
					pArray[i+1] = buffer;
				}
				nuevoLimite--;
				contador++;
			}


		}while(flagSwap);

		printf("\ndentro de la funcion -> contador %d\n",contador);

		retorno=0;
	}

	return retorno;

}

int ordenamientoArrayIntMediocre(int* pArray, int limite){

	int contador=0;
	int retorno = -1;
	int buffer;

	if(pArray!=NULL && limite>0){


		for(int i=0; i<limite-1;i++){

			for(int j=i+1; j<limite; j++){

				contador++;
				buffer = pArray[i];
				pArray[i] = pArray[j];
				pArray[j] = buffer;
			}
		}



		printf("\ndentro de la funcion -> contador %d\n",contador);

		retorno=0;
	}

	return retorno;

}
