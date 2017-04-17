//Alejandro Hernandez Gomez
#include <stdio.h>
#include <stdlib.h>
#include "complejo.h"
#include "complejo.c"

int main(){
	complejo complexOne, complexTwo, complexResult;
	complexOne = pedirComplejo(1);
	complexTwo = pedirComplejo(2);
	
	int opcion;
	printf("Ingrese la operacion a realizar. \n1) Suma \n2) Resta \n3) Multiplicacion \n4) Division \n5) Conjugacion \n");
	scanf("%d", &opcion);
	
	complexResult = operarComplejo(complexOne, complexTwo, opcion);
	printf("Tu complejo resultante es: %d + %di", complexResult->real, complexResult->imaginario);
	
	return 0;
}
