//Alejandro Hernandez Gomez
#include <stdio.h>
#include <stdlib.h>
#include "complejo.h"

complejo pedirComplejo(int cont){
	int inReal, inImaginario;
	complejo complex;
	printf("Ingresa el complejo numero %d \n(Real + Imaginarioi): ", cont);
	scanf("%d+%di",&inReal, &inImaginario);
	complex = creaComplejo(inReal, inImaginario);
	printf("Tu numero complejo es: %d + %di\n\n",complex->real, complex->imaginario);
	return complex;
}//Pide al usuario que ingrese el valor de un numero complejo y lo regresa

complejo operarComplejo(complejo cu, complejo cd, int op){
	complejo result;
	switch(op){
		case 1: result = sumaComplejo(cu, cd); break;
		case 2: result = restaComplejo(cu, cd); break;
		case 3: result = multiplicaComplejo(cu, cd); break;
		case 4: result = divideComplejo(cu, cd); break;
		case 5: result = conjugaComplejo(cu); break;
		default: printf("Error: Esta opcion no es valida.");
	}	
	return result;
}//menu de operaciones

complejo sumaComplejo(complejo cu, complejo cd){
	complejo result;
	result = creaComplejo(0,0);
	int realCu, realCd, imaginarioCu, imaginarioCd;
	realCu = valorReal(cu);imaginarioCu = valorImaginario(cu);
	realCd = valorReal(cd);imaginarioCd = valorImaginario(cd);
	result->real = realCu + realCd;
	result->imaginario = imaginarioCu + imaginarioCd;
	return result;
} //suma dos complejo y regresa el resultado

complejo restaComplejo(complejo cu, complejo cd){
	complejo result;
	result = creaComplejo(0,0);
	int realCu, realCd, imaginarioCu, imaginarioCd;
	realCu = valorReal(cu);imaginarioCu = valorImaginario(cu);
	realCd = valorReal(cd);imaginarioCd = valorImaginario(cd);
	result->real = realCu - realCd;
	result->imaginario = imaginarioCu - imaginarioCd;
	return result;
}//Resta 2 complejos y regresa el resultado

complejo multiplicaComplejo(complejo cu, complejo cd){
	complejo result;
	result = creaComplejo(0,0);
	int realCu, realCd, imaginarioCu, imaginarioCd;
	realCu = valorReal(cu);imaginarioCu = valorImaginario(cu);
	realCd = valorReal(cd);imaginarioCd = valorImaginario(cd);
	result->real = realCu*realCd - imaginarioCu*imaginarioCd;
	result->imaginario = realCu*imaginarioCd + realCd*imaginarioCu;
	return result;
}//multiplica dos complejos y regresa el resultado

complejo divideComplejo(complejo cu, complejo cd){
	complejo result;
	result = creaComplejo(0,0);
	int realCu, realCd, imaginarioCu, imaginarioCd;
	realCu = valorReal(cu);imaginarioCu = valorImaginario(cu);
	realCd = valorReal(cd);imaginarioCd = valorImaginario(cd);
	result->real = realCu/realCd - imaginarioCu/imaginarioCd;
	result->imaginario = realCu/imaginarioCd + realCd/imaginarioCu;
	return result;
}//divide dos complejos y regresa el resultado

complejo conjugaComplejo(complejo cu){
	complejo result;
	result = creaComplejo(0,0);
	int imaginarioCu;
	imaginarioCu = valorImaginario(cu);
	result->imaginario = imaginarioCu*(-1);
	result->real = cu->real;
	return result;
}//conjuga 2 complejos y regresa el resultado

complejo creaComplejo(int real, int imaginario){
	complejo complex =(complejo) malloc(sizeof(COMPLEJO));
	if(complex==NULL)
	{
		printf("No hay memoria disponible");
		exit(0);
	}	
	complex->real = real;
	complex->imaginario = imaginario;
	return complex;
}//Crea un numero complejo y lo retorna

int valorReal(complejo complex){
	return complex->real;
} //Regresa el valor entero del numero complejo

int valorImaginario(complejo complex){
	return complex->imaginario;
} //Regresa el valor imaginario del numero complejo
