//Alejandro Hernandez Gomez
#include <stdio.h>
#include <stdlib.h>

//<summary>Función que asigna un espacio de memoria para un Vector Entero inicializado</summary>
//<param>size: Numero de elementos del arreglo</param>
//<returns>Vector Entero</return>
int * solicitarMemoria(int size){
	int *p;
	p=(int *) calloc(sizeof(int),size);
	if(p== NULL){
		printf("No hay memoria suficiente \n");
		exit(1);
	}
	return p;
}
//<summary>Función que reasigna un espacio de memoria para un Vector Entero inicializado con 2 elementos minimos</summary>
//<param>p: El vector</param>
//<param>elem: Numero de elementos extras</param>
//<returns>Nada</return>}
void reasignarMemoria(int *p, int elem){	
	p= (int *) realloc(p,2+elem);

	if(p== NULL){
		printf("No hay memoria suficiente \n");
		exit(1);
	}
}
//Obtiene el tamaño nuevo a agregar
int leeTamanoNuevo(){
	int elem;
	printf("Cuantos Elementos quiere agregar\n");
	scanf("%d", &elem);
	return elem;
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
	int i, *p, elem;
	p=solicitarMemoria(2);
	
	for(i=0;i<2;i++){
		leerDatos(&p[i],i+1);;
	}
	elem = leeTamanoNuevo();
	reasignarMemoria(p,elem);
	printf("\n");
	for(i=0;i<2+elem;i++){
		imprimirDatos(&p[i]);		
	}
	libera(p);
}