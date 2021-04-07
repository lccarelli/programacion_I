/*
 * utils.c
 *
 *  Created on: 30 mar. 2021
 *      Author: lau
 */
#include <stdio.h>
#include <stdlib.h>

#include "array.h"
#include "utn.h"

int arr_calcularMaximoInt(int* array,int limite, int* resultado){
	int retorno = -1;

	if(array!=NULL && limite>0 && resultado!=NULL){

		for(int i=0; i<limite; i++){

			if(array[i]>array[i+1]){
				*resultado = array[i];
			}
		}
		retorno = 0;
	}

	return retorno;
}

int arr_calcularMinimoInt(int* array,int limite, int* resultado){
	int retorno = -1;

	if(array!=NULL && limite>0 && resultado!=NULL){

		for(int i=0; i<limite; i++){

			if(array[i]<array[i+1]){
				*resultado = array[i];
			}
		}
		retorno = 0;
	}

	return retorno;
}

int arr_calcularPromedioInt(int* array,int limite, float* resultado){
	int retorno = -1;
	float suma;

	if(array!=NULL && limite>0 && resultado!=NULL){

		if(arr_calcularSumaInt(&array, limite, &suma)==0){
			printf("%.2f", suma);
			*resultado = suma/limite;
		};



		retorno = 0;
	}

	return retorno;
}
int arr_calcularSumaInt(int* array,int limite, float* resultado){
	int retorno = -1;

	if(array!=NULL && limite>0 && resultado!=NULL){
		for(int i=0; i<limite; i++){

			*resultado = *resultado+array[i];
		}
		retorno = 0;
	}

	return retorno;
}
