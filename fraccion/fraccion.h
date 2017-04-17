//fraccion.h 
//Alejandro Hernandez Gomez

#include <stdio.h>

/*ifndef _nombre_
sentencia del preprocesador de c. Sirve para comprobar que no hay otro tipo 
"fraccion", en cuyo caso no se puede definir nuestro TAD*/
#ifndef _fraccion_ //principio ifdef
	#define _fraccion_

	//Definimos la estructura
	typedef struct{
		int numerador;
		int denominador;
	}Fraccion;

	/*Definimos a fraccion como un apuntador al tipo de estructura Fraccion */
	typedef Fraccion *fraccion; 
	fraccion crea_fraccion(int x, int y);
	int numerador(fraccion f);
	int denominador(fraccion f);
	fraccion producto(fraccion f, fraccion g);
	void destruir_fraccion(fraccion f);
#endif //final ifdef
