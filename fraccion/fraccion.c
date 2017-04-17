//fraccion.c
//Alejandro Hernandez Gomez

#include <stdio.h>
#include <stdlib.h>
#include "fraccion.h" //llama al archivo creado en la misma carpeta

fraccion crea_fraccion(int x, int y){
	fraccion f;
	f = (fraccion)malloc(sizeof(Fraccion));
	if(f == NULL){
		printf("No hay memoria...");
		exit(1);
	}
	f -> numerador = x;
	f -> denominador = y;
	return f;
}

int numerador(fraccion f){
	return(f -> numerador);
}

int denominador(fraccion f){
	return(f -> denominador);
}

fraccion producto(fraccion f, fraccion g){
	fraccion h;
	h = crea_fraccion(1,1);
	
	h -> numerador = f -> numerador * g -> numerador;
	h -> denominador = f -> denominador * g -> denominador;
	
	return h;
}

void destruir_fraccion(fraccion f){
	free(f);
}
