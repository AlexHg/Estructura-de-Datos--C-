//Alejandro Hernandez Gomez
//Lidia Valeria Gomez Sánchez

#include "natural.h"
#include<stdio.h>
#include<stdlib.h>

natural crear_natural(int x){

	natural n =(natural) malloc(sizeof(Natural));
	if(n==NULL)
	{
		printf("No hay memoria disponible");
		exit(0);
	}
		
	n->nat=x;
	return n;
}

int es_impar(natural n){
	
	if(n->nat%2 ==0){
		return 1; 
	}
	else {
		return 0; 
	}
}

int es_menor(natural n,natural m){
	
	
	int x;
	
	if(n->nat < m->nat){
		x=n->nat;
		return 1;
	}
	else{
		x=m->nat;
	    return 0;	
	}
}

natural predecesor(natural n){
	int r = n->nat;
	return (void *)r-1;
}

natural producto(natural n, natural m){

	natural a;
	
	a=crear_natural(1);
	
	a->nat=n->nat * m->nat;
	
	return a;
}

void destruir_natural(natural n){
	
	free(n);
}
