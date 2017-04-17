//Alejandro Hernandez Gomez & Leandro Vazquez Martinez
#include <stdio.h>
#include <stdlib.h>

typedef struct{int x, y;} PUNTO;
typedef struct{PUNTO p1, p2;} RECTANGULO;

PUNTO *stateMemoryPunt(){
	PUNTO *memoryUsed;
	memoryUsed = (PUNTO*)malloc(sizeof(PUNTO));
	return memoryUsed;
}

RECTANGULO *stateMemoryRect(){
	RECTANGULO *memoryUsed;
	memoryUsed = (RECTANGULO*)malloc(sizeof(RECTANGULO));
	return memoryUsed;
}

void pedirPunto(PUNTO *punt){
	printf("Ingrese coordenadas X:");
	scanf("%d",&punt -> x);
	printf("Ingrese coordenadas Y:");
	scanf("%d",&punt -> y);
}

void pedirRectangulo(RECTANGULO *rect){
	printf("Ingrese las coordenadas del punto superior izquierdo del rectangulo.\n");
	pedirPunto(&rect -> p1);
	printf("\n");
	printf("Ingrese las coordenadas del punto inferior derecho del rectangulo.\n");
	pedirPunto(&rect -> p2);
}

void resultado(PUNTO *punt, RECTANGULO *rect){
	if(punt -> x > rect -> p1.x && punt -> x < rect -> p2.x && punt -> y > rect -> p1.y && punt -> x < rect -> p2.y){
		printf("El punto que ingresaste esta dentro del rectangulo");
	}else printf ("El punto que ingresaste esta afuera del rectangulo");
}

int main(){
	PUNTO *punt;
	RECTANGULO *rect;
	punt = stateMemoryPunt();
	rect = stateMemoryRect();
	
	printf("Ingrese las coordenadas del punto deseado.\n");
	pedirPunto(punt);
	
	printf("\n\n");
	
	printf("Ingrese los datos del rectangulo deseado.\n");
	pedirRectangulo(rect);
	
	resultado(punt, rect);
	return 0;
}

