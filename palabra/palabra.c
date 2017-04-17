
//Alejandro Hernandez Gomez

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "palabra.h" //llama al archivo creado en la misma carpeta

palabra crea_palabra(char *f){
	palabra x;
	x = (palabra)malloc(sizeof(PALABRA));
	if(x == NULL){
		printf("No hay memoria...");
		exit(1);
	}
	x -> pal = f;
	return x;
}

palabra sustPrimLetra(palabra f, char letra){
	f -> pal[0] = letra;
	return f;
}

int longitud(palabra f){
	return strlen(f -> pal) ;
}

char damePrimLetra(palabra f){
	char h = f -> pal[0];
	return h;
}

palabra inversa(palabra f){
	palabra h;
	int len = longitud(f);
	int i, o;
	for(i=0, o=len;i < len; i++, o--){
		h -> pal[i] = f -> pal[o];
	}
	return h;
}

void destruir_palabra(palabra f){
	free(f);
}
