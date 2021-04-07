/*
 ============================================================================
 Name        : odenamientos.c
 Author      : lau
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int main(void) {


	void intercambiar (Dato * A, int i, int j){
		Dato tmp = A[i];
		A[i] = A[j];
		A[j] = tmp;
	}


	//tiempo de ejecucion O(n*n) para el mejor, promedio y peor caso
	void ordenacion_seleccion (Dato * A, int N){
		int i, j, k;
		for (i = 0; i < N - 1; i++){
			for (k = i, j = i + 1; j < N; j++)
				if (A[j] < A[k])k = j;
				if (k != i)intercambiar (A, i, k);
		}
	}

	void ordenacion_insercion (Dato * A, int N){
		int p, j;
		Dato tmp;

		for (p = 1; p < N; p++){

			tmp = A[p]; //3
			j = p - 1; //8

			while ((j >= 0) && (tmp < A[j])){
				A[j + 1] = A[j];
				j--;
			}
			A[j + 1] = tmp;
		}
	}

	void ordenacion_shell (Dato * A, int N){
		int incr = N / 2, p, j;
		Dato tmp;
		do{
			for (p = incr + 1; p < N; p++){
				tmp = A[p];
				j = p - incr;
				while ((j >= 0) && (tmp < A[j])){
					A[j + incr] = A[j];
					j -= incr;
				}

				A[j + incr] = tmp;
			}
			incr /= 2;
		}while (incr > 0);
	}

	return EXIT_SUCCESS;
}
