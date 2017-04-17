//fraccion.h 
//Alejandro Hernandez Gomez

#include <stdio.h>

/*ifndef _nombre_
sentencia del preprocesador de c. Sirve para comprobar que no hay otro tipo 
"fraccion", en cuyo caso no se puede definir nuestro TAD*/
#ifndef _palabra_ //principio ifdef
	#define _palabra_

	//Definimos la estructura
	typedef struct{
		char pal[30];
	}PALABRA;

	/*Definimos a fraccion como un apuntador al tipo de estructura Fraccion */
	typedef PALABRA *palabra;
	//Definimos las funciones a usar
	palabra crea_palabra(char *f);
	palabra sustPrimLetra(palabra f, char letra);
	int longitud(palabra f);
	char damePrimLetra(palabra f);
	palabra inversa(palabra f);
#endif //final ifdef
