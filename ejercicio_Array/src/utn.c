#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "utn.h"

#define LIMIT_TEXT 4096
#define LIMIT_INTEGER 50
#define LIMIT_FLOAT 64
#define OK 0
#define noOK -1
#define TRUE 1

/* FUNCIONES PRIVADAS */


/**
 * @brief ->	getInt -> Recorre una cadena y verifica si se encuentra un numero entero.
 * @param ->	number -> puntero donde se va a guardar el numero entero
 * @return ->	int Return (-1) if Error [Invalid or NULL params] - (0) if Ok
**/
static int getInt(int* number);

/**
 * @brief ->	isNumber -> Recorre una cadena y verifica que sea numerica
 * @param ->	string -> puntero donde se va a guardar el texto
 * @return ->	int Return (-1) if Error [Invalid or NULL params] - (0) if Ok - (1) if TRUE
**/
static int isNumber(char* string);


/**
 * @brief ->	myGets -> Lee stdin hasta que encuentra un '\n' o hasta que se haya copiado la cadena
 * @param ->	string -> puntero donde se va a guardar el texto
 * @param ->	len	-> longitud de la cadena
 * @return ->	int Return (-1) if Error [Invalid or NULL params] - (0) if Ok
**/
static int myGets(char* string, int len);

/**
 * @brief ->	getFloat -> Recorre una cadena buscando un numero con decimal
 * @param ->	number -> puntero donde se va a guardar el numero float
 * @return ->	int Return (-1) if Error [Invalid or NULL params] - (0) if Ok
**/
static int getFloat(float* number);

/**
 * @brief ->	isFloat -> Recorre una cadena y verifica si es un numero float
 * @param ->	string -> puntero donde se va a guardar el texto
 * @return ->	int Return (-1) if Error [Invalid or NULL params] - (0) if Ok - (1) if TRUE
**/
static int isFloat(char* string);


static int getInt(int* number)
{
	int result;
	char buffer[LIMIT_INTEGER];

	if(number!=NULL){
		if(myGets(buffer, sizeof(buffer))==OK && isNumber(buffer)){
			*number = atoi(buffer);
			result = OK;
		}
	} else {result = noOK;}

	return result;
}

static int isNumber(char* string)
{
	int i, result;

	if(string!=NULL && strlen(string)>0){
		result = TRUE; //isNUmber true

		for(i=0; i<strlen(string) && string[i]!='\0'; i++){

			if(string[i]<'0' || string[i]>'9'){
				result = OK; //ok but isNUmber false
			}
		}
	} else {result = noOK;}
	return result;
}

static int myGets(char* string, int len)
{
	int result;

	if(string!=NULL && len>0 && fgets(string, len, stdin)==string){
		__fpurge(stdin);
		if(string[strlen(string)-1]=='\n'){
			string[strlen(string)-1] = '\0';
		}
		result = OK;
	} else { result = noOK;}

	return result;
}

static int getFloat(float* number)
{
	int result;
	char buffer[LIMIT_FLOAT];

	if(number!=NULL){
		if(myGets(buffer,sizeof(buffer))==OK && isFloat(buffer)){
			*number = atof(buffer);
			result = OK;
		}
	} else {result = noOK;}

	return result;
}

static int isFloat(char* string)
{
	int i, result;

	if(string!=NULL && strlen(string)>0){

		for(i=0; i<strlen(string) && string[i]!='\0'; i++){

			if(string[i]<'0' && string[i]>'9'){

				if(string[i] == '.'){
					result = TRUE; // isFloat TRUE

				} else {result = OK;} // ok but isFloat false
			}
		}
	} else {result = noOK;}

	return result;
}



/* FUNCIONES PRIVADAS - fin */


/* FUNCIONES PUBLICAS */

int utn_getNumeroEntero(
							int* number,
							char* message,
							char* errorMessage,
							int min,
							int max,
							int retries
						)
{
	int result;
	int buffer;

	if(number!=NULL && message!=NULL && errorMessage!=NULL && min<=max && retries>=0)
	{
		result = -2; //otro error

		while(retries>0){


			printf("%s",message);
			__fpurge(stdin);

			if(getInt(&buffer)==OK && buffer<=max && buffer>=min){
				*number = buffer;
				result = OK;
				break;
			}
			retries--;
			printf("%s", errorMessage);
		}

		if(retries==0){
			result = noOK;
		}
	}

	return result;

}


int utn_getNumeroDecimal(
							float* number,
							char* message,
							char* errorMessage,
							int min,
							int max,
							int retries
						)
{
	int result;
	float buffer;

	if(number!=NULL && message!=NULL && errorMessage!=NULL && min<=max && retries>=0)
	{
		while(retries>0){

			printf("%s",message);
			__fpurge(stdin);

			if(getFloat(&buffer)==OK && buffer<=max && buffer>=min){
				*number = buffer;
				result = OK;
				break;
			}
			retries--;
			printf("%s", errorMessage);
		}

		if(retries==0){
			result = noOK;
		}
	}

	return result;

}




/* FUNCIONES PUBLICAS - fin */



