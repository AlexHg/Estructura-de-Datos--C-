//mainfraccion.c
//Alejandro Hernandez Gomez
//Lidia Valeria Gomez Sánchez

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "palabra.h"
#include "palabra.c"

int main(){
	palabra palabrita;
	int longi;
	char primLetra;
	
	palabrita = crea_palabra("pajaro");
	printf("elegiste la palabra: %s\n", palabrita -> pal);
	
	char letra = 'r';
	palabrita = sustPrimLetra(palabrita,letra);
	printf("ahora tu palabra es: %s\n", palabrita -> pal);
	
	longi = longitud(palabrita);
	printf("La logitud de tu palabra es: %d\n", &longi);
	
	primLetra = damePrimLetra(palabrita);
	printf("La primera letra de tu palabra es: %c\n",&primLetra);
	
	palabrita = inversa(palabrita);
	printf("La palabra invertida es: %s\n", palabrita -> pal);
	
	return 0;
}
