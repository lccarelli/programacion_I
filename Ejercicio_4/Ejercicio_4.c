/*
 * Eercicio_3.c
 *
 *  Created on: 16 mar. 2021
 *      Author: lau
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int a;
	int contMayor = 0;
	int contMenor = 0;
	int contGral = 1;
	int resultado;


	do {
		printf("\nIngrese numero %d: ", contGral);
		scanf("%d",&a);

		if(a < 0){
			contMenor++;
		};

		if(a > 0){
			contMayor++;
		};

		if( a == 0 ){
			printf("El numero ingresado debe ser diferente a cero. \n");
		}

	} while (contGral <= 10 || a == 0);

	printf("______________________________________\n");
	printf("\nLa cantidad de numeros positivos es: %d \n",contMayor);
	printf("\nLa cantidad de numeros negativos es: %d \n",contMenor);

	printf("______________________________________\n\n\n\n");


	return 0;
}

