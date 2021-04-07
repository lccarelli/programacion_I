/*
 * Eercicio_3.c
 *
 *  Created on: 16 mar. 2021
 *      Author: lau
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a, mayor, menor;
	int cont = 0;
	float suma = 0;
	float promedio;


	do {
		printf("\nIngrese numero %d: ", cont);
		scanf("%d",&a);

		if (cont == 0){
			menor = a;
			mayor = a;
		};

		suma = suma + a;
		cont++;

		if(a < menor){
			menor = a;
		};

		if(a > mayor){
			mayor = a;
		};

	} while (cont < 5);

	promedio = suma/cont;

	printf("______________________________________\n");
	printf("\nNumero suma: %f \n",suma);
	printf("\nNumero promedio: %.2f \n",promedio);
	printf("\nNumero menor: %d \n",menor);
	printf("\nNumero mayor: %d \n",mayor);

	printf("______________________________________\n\n\n\n");


	return 0;
}

