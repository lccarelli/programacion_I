/*
 * Eercicio_3.c
 *
 *  Created on: 16 mar. 2021
 *      Author: lau
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int a = 0;
	int b = 0;
	int resultado;

	do {
		printf("\nIngrese 1 numero: ");
		scanf("%d",&a);
		if(a == 0){
			printf("el numero ingresado debe ser distinto de cero");
		};
	} while (a == 0);

	do {
		printf("\nIngrese 2 numero: ");
		scanf("%d",&b);
		if(b == 0){
			printf("el numero ingresado debe ser distinto de cero");
		};
	} while (b == 0);


	resultado=a-b;

	printf("______________________________________\n");
	printf("\nEl resultado es: %d \n",resultado);
	if(resultado>0){
        printf("\nResultado positivo \n");
	}
	if(resultado==0){
        printf("\nResultado negativo \n");
	}
	printf("______________________________________\n\n\n\n");


	return 0;
}

