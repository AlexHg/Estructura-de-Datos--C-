//Alejandro Hernandez
#include <stdio.h>

/*ifndef _nombre_
sentencia del preprocesador de c. Sirve para comprobar que no hay otro tipo 
"fraccion", en cuyo caso no se puede definir nuestro TAD*/
#ifndef _complejo_ //principio ifdef
	#define _complejo_
	
	//Definimos la estructura
	typedef struct{
		int real, imaginario;
	}COMPLEJO;

	/*Definimos a fraccion como un apuntador al tipo de estructura Fraccion */
	typedef COMPLEJO *complejo;
	//Definimos las funciones a usar}
	
	//Funciones principales
	complejo pedirComplejo(int cont);
	complejo operarComplejo(complejo cu, complejo cd, int op);
	
	//Funciones de operaciones
	complejo sumaComplejo(complejo cu, complejo cd);
	complejo restaComplejo(complejo cu, complejo cd);
	complejo multiplicaComplejo(complejo cu, complejo cd);
	complejo divideComplejo(complejo cu, complejo cd);
	complejo conjugaComplejo(complejo cu);
	
	//Funciones de operacion de cracion y consulta
	complejo creaComplejo(int real, int imaginario); //Crea un numero complejo y lo retorna
	int valorReal(complejo complex); //Regresa el valor entero del numero complejo
	int valorImaginario(complejo complex); //Regresa el valor imaginario del numero complejo
#endif 
//final ifdef

