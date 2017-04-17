//Alejandro Hernandez Gomez
//Leonardo Jarillo Michel

#include <stdio.h>

/*ifndef _nombre_
sentencia del preprocesador de c. Sirve para comprobar que no hay otro tipo 
"fraccion", en cuyo caso no se puede definir nuestro TAD*/
#ifndef _helado_ //principio ifdef
	#define _helado_
	
	//Definimos la estructura
	typedef struct{
		int chocolate, vainilla, fresa, limon, pistacho, menta;
	}HELADO;

	/*Definimos a fraccion como un apuntador al tipo de estructura Fraccion */
	typedef HELADO *helado;
	//Definimos las funciones a usar
	void desglosarHelados();
	helado creaHelado(int chocolate, int vainilla, int fresa, int limon, int pistacho, int menta);
	helado incrementaHelado(helado disponibilidad); //Añade una cantidad de helado a un sabor
	void esPosibleCucurucho(helado disponibilidad); //Determina si es posible el cucurucho por medio de la disponibilidad de los sabores elegidos
	void heladoDisponible(helado disponibilidadGlobal); 
	void cucuruchoDisponible(helado dG);// Imprime por pantalla que tipos de cucuruchos pueden confeccionarse con los helados disponibles
#endif 
//final ifdef
