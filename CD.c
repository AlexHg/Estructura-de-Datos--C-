// Alejandro Hernandez Gomez & Jorge Martínez Buenrostro
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	char artista[30];
	char nom_can[30];
	int no_cans;
	int precio;
} CD;

CD *leer(CD *ptrCd){
	printf("Ingrese el nombre del artista: ");
	gets(ptrCd -> artista);
	printf("\nIngrese el nombre del album: ");
	gets(ptrCd -> nom_can);
	printf("\nIngrese el numero de canciones: ");
	scanf("%d",&ptrCd -> no_cans);
	printf("\nIngrese el precio del cd: ");
	scanf("%d",&ptrCd -> precio);
	return ptrCd;
}
CD *mostrar(CD *ptrCd){
	printf("\n\nA continuacion la informacion de tu CD:\nArtista: %s\nAlbum: %s\nNumero de canciones: %d\nPrecio: %d", ptrCd -> artista, ptrCd -> nom_can, ptrCd -> no_cans, ptrCd -> precio);

}

int main(){
	CD *ptrCd, disco;
	ptrCd = &disco;

	ptrCd = leer(ptrCd);
	ptrCd = mostrar(ptrCd);	
	return 0;
}
