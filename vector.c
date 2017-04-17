//Alejandro Hernandez Gomez
#include <stdio.h>
#include <stdlib.h>

//Ingresa tamaño vector
int vectorLenght(){
	int lenght;
	printf("Ingrese el tamaño del vector: ");
	scanf("%d",&lenght);
	printf("\n");
	return lenght;
}

//Declara el tamaño en memoria que ocupara el vector de tipo flotante(como puntero) utilizando de base la longitud del vector adquirida en la funcion vectorLenght()
float *stateMemory(int lenght){
	float *memoryUsed;
	//Ingresa dentro del puntero *memoryUsed el tamaño de memoria a utilizar de un numero flotante multiplicado por la longitud del vector.
	memoryUsed = (float*)malloc(sizeof(float)*lenght);
	return memoryUsed;
}

//Se llena el vector con valores ingresados por el usuario.
int vectorFilling(int i, char *nombre, int lenght, float *vector){
	i = i+1;
	printf("Vector %s - Ingrese el valor %d (de %d en total): ",nombre,i,lenght);
	scanf("%f",vector);
}

//se suman los vectores en el espacion especifico "i" y se repite hasta que "i" sea igual a el tamaño del vector (lenght)
float *vectorSum(float *vectorX, float *vectorY, int lenght){
	int i = 0;
	float *result;
	result = stateMemory(lenght);
	for(i;i<lenght;i++){
		result[i] = vectorX[i] + vectorY[i];
	}
	return result;
}

//Imprime el resultado de la suma de los vectores en la pantalla.
int vectorPrint(float *result, int lenght){
	int i = 0;
	printf("El resultado de la suma de los vectores es:\n");
	for(i;i<lenght;i++){
		printf("%f -",result[i]);
	}
	printf("\n");
}

//Funcion principal: llamada de metodos
int main(){
	int lenght, i;
	float *vectorX, *vectorY, *result;
	
	lenght = vectorLenght();
	vectorX = stateMemory(lenght);
	vectorY = stateMemory(lenght);
	
	for(i = 0;i<lenght;i++){
		vectorFilling(i,"x",lenght,&vectorX[i]);
	}
	printf("\n");
	for(i = 0;i<lenght;i++){
		vectorFilling(i,"y",lenght,&vectorY[i]);
	}
	printf("\n");
	
	result = vectorSum(vectorX, vectorY, lenght);
	vectorPrint(result, lenght);
	free(vectorX); free(vectorY); free(result);
	system("PAUSE");
	return 0;
}
