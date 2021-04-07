/*
 ============================================================================
 Name        : Ejercicio_1.c
 Author      : robot
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int numero1;
	int numero2;
	int suma;

	printf("Ingrese dato para numero1: \n");
	scanf("%d", &numero1);

	printf("Ingrese dato para numero2: \n");
	scanf("%d", &numero2);

	suma = numero1 + numero2;

	printf("El resultado es %d", suma); /* prints !!!Hello World!!! */

	return EXIT_SUCCESS;
}
