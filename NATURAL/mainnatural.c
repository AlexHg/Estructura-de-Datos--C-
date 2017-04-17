//Alejandro Hernandez Gomez
//Lidia Valeria Gomez Sánchez

#include "natural.h"
#include "natural.c"
#include <stdio.h>

main (){

	int x,y;
	natural n,m,f,g,h,s,a;
	printf("Dame un numero entre 0 y 9\n");
	scanf("\n%d",&x);
	printf("Dame un numero entre 0 y 9\n");
	scanf("\n%d",&y);
	n=crear_natural(x);
	m=crear_natural(y);

	es_impar(n);
	es_menor(n, m);
	h=predecesor(n);
	a=producto(n, m);
    
    printf("\nEL producto de los numeros ingresados es: %d \n", a->nat, a->nat);
	
	
	
destruir_natural(n);
destruir_natural(m);
}
