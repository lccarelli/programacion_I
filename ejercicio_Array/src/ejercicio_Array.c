/*
 ============================================================================
 Name        : ejercicio_Array.c
 Author      : lau
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "array.h"
#include "utn.h"

#define CANTIDAD_EDADES 5


int main(void) {

	//pedir una cantidad de edades
	//funcion que calcule maximo y minimo
	//promedio

	int arrayEdad[CANTIDAD_EDADES];
	int maximo, minimo;
	float promedio, suma;

	for(int i=0; i<CANTIDAD_EDADES; i++){
		printf("entre");
		utn_getNumeroEntero(&arrayEdad[i], "Ingrese edad -> ", "error", 0, 100, 3);
	}

	if(arr_calcularMaximoInt(arrayEdad, CANTIDAD_EDADES, &maximo)==0){
		 printf("el máximo es -> %d \n ", maximo);
	 };
	if(arr_calcularMinimoInt(arrayEdad, CANTIDAD_EDADES, &minimo)==0){
		printf("el minimo es -> %d \n", minimo);
	};
	if(arr_calcularSumaInt(arrayEdad, CANTIDAD_EDADES, &suma)==0){
		printf("la suma es -> %f\n", suma);
	};
	if(arr_calcularPromedioInt(arrayEdad, CANTIDAD_EDADES, &promedio)==0){
		printf("el promdio es -> %.2f \n",promedio);
	};



	return EXIT_SUCCESS;
}


