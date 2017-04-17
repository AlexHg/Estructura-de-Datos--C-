//Alejandro Hernandez Gomez
//Lidia Valeria Gomez Sánchez

#ifndef _natural_
#define _natural_

typedef struct{
	int nat;
	
}Natural;

typedef Natural *natural;

natural crear_natural(int nat);
int es_impar(natural n);
int es_menor(natural n, natural m);
natural predecesor(natural n);
natural producto(natural n, natural m);
void destruir_natural(natural n);

#endif
