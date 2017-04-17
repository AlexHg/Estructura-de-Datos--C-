// Sánchez Morales Liliana Aida
// Hernández Gómez Alejandro

#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char nombre[30];
	int boleta;
	float nota;
} ficha;
//pide tamaño
int *dimencion(int *n){
	printf("Ingrese el numero de fichas: ");
	scanf("%d",n);
	return n; 
}
//reserva memoria
ficha *memoria(int *n){
	ficha *fichaMemoria;
	fichaMemoria = (ficha*)malloc(sizeof(ficha)**n);
	return fichaMemoria;
}
//llena el array de estructuras
void llenar(int *n,ficha*fichaMemoria){
	int i;
	for(i=0;i<*n;i++){
		printf("Alumno %d\n ", i+1);
		getchar();
		printf("Ingrese el nombre del alumno: ");
		gets(fichaMemoria[i].nombre);
		printf("\nIngrese el numero de boleta: ");
		scanf("%d",&fichaMemoria[i].boleta);
		printf("\nIngrese la calificacion: ");
		scanf("%f",&fichaMemoria[i].nota);
		printf("\n");
	}
}
//imprime en pantalla cada estructura en el array
void imprimir(int *n,ficha*fichaMemoria){
	int i;
	for(i=0;i<*n;i++){
		printf("Alumno: %d\nNombre: %s\nBoleta: %d\n Calificacion: %f\n\n",i+1, fichaMemoria[i].nombre, fichaMemoria[i].boleta, fichaMemoria[i].nota); 
	}	
}
//llama todas las funciones.
int main(){
	int n;
	ficha *m;
	dimencion(&n);
	m = memoria(&n);
	llenar(&n,m);
	imprimir(&n,m);
	system("pause");
}
