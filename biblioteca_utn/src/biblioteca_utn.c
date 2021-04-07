/*
 ============================================================================
 Name        : biblioteca_utn.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {


	int integer;
	float decimal;
	char* nombre[25];


	utn_getNumeroEntero(&integer, "\nIngresar numero entero -> ", "\nERROR", 1, 10, 3);
	printf("Numero entero -> %d", integer);

	utn_getNumeroDecimal(&decimal, "\nIngrese numero decimal -> ", "\nERROR", 1, 10, 3);
	printf("Numero decimal -> %d", decimal);

	utn_getTexto(nombre, 25, "\nIngrese nombre -> ", "\nERROR", 3);
	printf("Texto -> %s", nombre);

	return EXIT_SUCCESS;
}
