//Alejandro Hernandez Gomez
#include <stdio.h>
#include <stdlib.h>

//<summary>Función que asigna un espacio de memoria para un Vector Entero</summary>
//<param>size: Tamaño en Bytes del arreglo</param>
//<returns>Vector Entero</return>
int * solicitarMemoria(int size){
	int *p;
	p=(int *) malloc(size);
	if(p== NULL){
		printf("No hay memoria suficiente \n");
		exit(1);
	}
	return p;
}
//<summary>Función que pide datos en pantalla para llenar un apuntador</summary>
//<param>p: el apuntador</param>
//<param>elemento: el numero de elemento a imprimir en pantalla</param>
//<returns>Nada</return>
void leerDatos(int * p, int elemento){
		printf("Dato[%d]:",elemento);
		scanf("%d",p);
}

//<summary>Función que imprime el contenido de un Apuntador entero</summary>
//<param>p: El apuntador</param>
//<returns>Nada</return>
void imprimirDatos(int * p){
	printf("%d \n",*p);
}
//Se libera la memoria solicitada
void libera(int * p){
	free(p);
}

main(){
	int i, *p;

	p=solicitarMemoria(5*sizeof(int));
	
	for(i=0;i<5;i++){
		leerDatos(&p[i],i+1);
	}

	printf("\n La salida es:\n");

	for(i=0;i<5;i++){
		imprimirDatos(&p[i]);
	}
	libera(p);
}
