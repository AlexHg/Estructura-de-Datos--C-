//Alejandro Hernandez Gomez
//Leonardo Jarillo Michel

#include <stdio.h>
#include <stdlib.h>
#include "heladeria.h"

helado creaHelado(int chocolate, int vainilla, int fresa, int limon, int pistacho, int menta){
	helado n =(helado) malloc(sizeof(HELADO));
	if(n==NULL)
	{
		printf("No hay memoria disponible");
		exit(0);
	}	
	n->chocolate=chocolate;
	n->vainilla=vainilla;
	n->fresa=fresa;
	n->limon=limon;
	n->pistacho=pistacho;
	n->menta=menta;
	return n;
}

void desglosarHelados(){
	printf("1) Chocolate \n2) Vainilla \n3) Fresa \n4) Limon \n5) Pistacho \n6) Menta\n");
}


helado incrementaHelado(helado disponibilidad){
	int helado;
	printf("Elija el helado a aumentar una existencia.\n");
	desglosarHelados();
	scanf("%d",&helado);
	switch(helado){
		case 1: disponibilidad->chocolate++;break;
		case 2: disponibilidad->vainilla++;break;
		case 3: disponibilidad->fresa++;break;
		case 4: disponibilidad->limon++;break;
		case 5: disponibilidad->pistacho++;break;
		case 6: disponibilidad->menta++;break;
	}
	return disponibilidad; 
} //Añade una cantidad de helado a un sabor

void esPosibleCucurucho(helado disponibilidad){
	int saborUno = 0, saborDos = 0, saborTres = 0, i=0;
	while(i < 3){
		int opcion, saborDis;
		printf("Elija el sabor numero (%d/3) de helado para preparar el cucurucho\n",i+1);
		desglosarHelados();
		scanf("%d",&opcion);
		switch(opcion){
			case 1: 
				saborDis = disponibilidad->chocolate;
				disponibilidad->chocolate--;
				break;
			case 2: 
				saborDis = disponibilidad->vainilla;
				disponibilidad->vainilla--;
				break;
			case 3: 
				saborDis = disponibilidad->fresa;
				disponibilidad->fresa--;
				break;
			case 4: 
				saborDis = disponibilidad->limon;
				disponibilidad->limon--;
				break;
			case 5: 
				saborDis = disponibilidad->pistacho;
				disponibilidad->pistacho--;
				break;
			case 6: 
				saborDis = disponibilidad->menta;
				disponibilidad->menta--;
				break;
			default: break;
		}
		if(i==0){saborUno = saborDis;}
		if(i==1){saborDos = saborDis;}
		if(i==2){saborTres = saborDis;}
		printf("Disponibilidad: %d\n\n%d , %d, %d", saborDis, saborUno, saborDos, saborTres);
		i++;
	}
	if(saborUno != 0 && saborDos != 0 && saborTres != 0) printf("El cucurucho se puede preparar.");
	else printf("El cucurucho no se puede preparar.");
} //Determina si es posible el cucurucho por medio de la disponibilidad de los sabores elegidos
void heladoDisponible(helado disponibilidadGlobal){
	printf("Disponibilidad de helado: \nChocolate: %d \nVainilla: %d \nFresa: %d \nLimon: %d \nPistacho: %d \nMenta: %d \n\n",disponibilidadGlobal -> chocolate, disponibilidadGlobal -> vainilla, disponibilidadGlobal -> fresa, disponibilidadGlobal -> limon, disponibilidadGlobal -> pistacho, disponibilidadGlobal -> menta);
} 
void cucuruchoDisponible(helado dG){
	if(dG->chocolate != 0 && (dG->chocolate-1) != 0 && (dG->chocolate-2) != 0) printf("chocolate - chocolate - chocolate\n");
	if(dG->vainilla != 0 && (dG->vainilla-1) != 0 && (dG->vainilla-2) != 0) printf("vainilla - vainilla - vainilla\n");
	if(dG->fresa != 0 && (dG->fresa-1) != 0 && (dG->fresa-2) != 0) printf("fresa - fresa - fresa\n");
	if(dG->limon != 0 && (dG->limon-1) != 0 && (dG->limon-2) != 0) printf("limon - limon - limon\n");
	if(dG->pistacho != 0 && (dG->pistacho-1) != 0 && (dG->pistacho-2) != 0) printf("pistacho - pistacho - pistacho\n");
	if(dG->menta != 0 && (dG->menta-1) != 0 && (dG->menta-2) != 0) printf("menta - menta - menta\n");
	
	if(dG->chocolate != 0 && (dG->chocolate-1) != 0 && dG->vainilla != 0) printf("chocolate - chocolate - vainilla\n");
	if(dG->chocolate != 0 && (dG->chocolate-1) != 0 && dG->fresa != 0) printf("chocolate - chocolate - fresa\n");
	if(dG->chocolate != 0 && (dG->chocolate-1) != 0 && dG->limon != 0) printf("chocolate - chocolate - limon\n");
	if(dG->chocolate != 0 && (dG->chocolate-1) != 0 && dG->pistacho != 0) printf("chocolate - chocolate - pistacho\n");
	if(dG->chocolate != 0 && (dG->chocolate-1) != 0 && dG->menta != 0) printf("chocolate - chocolate - menta\n");

	if(dG->vainilla != 0 && (dG->vainilla-1) != 0 && dG->chocolate != 0) printf("vainilla - vainilla - chocolate\n");
	if(dG->vainilla != 0 && (dG->vainilla-1) != 0 && (dG->fresa) != 0) printf("vainilla - vainilla - fresa\n");	
	if(dG->vainilla != 0 && (dG->vainilla-1) != 0 && (dG->limon) != 0) printf("vainilla - vainilla - limon\n");
	if(dG->vainilla != 0 && (dG->vainilla-1) != 0 && (dG->pistacho) != 0) printf("vainilla - vainilla - pistacho\n");
	if(dG->vainilla != 0 && (dG->vainilla-1) != 0 && (dG->menta) != 0) printf("vainilla - vainilla - menta\n");
	
	if(dG->fresa != 0 && (dG->fresa-1) != 0 && (dG->chocolate) != 0) printf("fresa - fresa - chocolate\n");
	if(dG->fresa != 0 && (dG->fresa-1) != 0 && (dG->vainilla) != 0) printf("fresa - fresa - vainilla\n");
	if(dG->fresa != 0 && (dG->fresa-1) != 0 && (dG->limon) != 0) printf("fresa - fresa - limon\n");
	if(dG->fresa != 0 && (dG->fresa-1) != 0 && (dG->pistacho) != 0) printf("fresa - fresa - pistacho\n");
	if(dG->fresa != 0 && (dG->fresa-1) != 0 && (dG->menta) != 0) printf("fresa - fresa - menta\n");
	
	if(dG->limon != 0 && (dG->limon-1) != 0 && (dG->chocolate) != 0) printf("limon - limon - chocolate\n");
	if(dG->limon != 0 && (dG->limon-1) != 0 && (dG->vainilla) != 0) printf("limon - limon - vainilla\n");
	if(dG->limon != 0 && (dG->limon-1) != 0 && (dG->fresa) != 0) printf("limon - limon - fresa\n");
	if(dG->limon != 0 && (dG->limon-1) != 0 && (dG->pistacho) != 0) printf("limon - limon - pistacho\n");
	if(dG->limon != 0 && (dG->limon-1) != 0 && (dG->menta) != 0) printf("limon - limon - menta\n");
	
	if(dG->pistacho != 0 && (dG->pistacho-1) != 0 && (dG->chocolate) != 0) printf("pistacho - pistacho - chocolate\n");
	if(dG->pistacho != 0 && (dG->pistacho-1) != 0 && (dG->vainilla) != 0) printf("pistacho - pistacho - vainilla\n");
	if(dG->pistacho != 0 && (dG->pistacho-1) != 0 && (dG->fresa) != 0) printf("pistacho - pistacho - fresa\n");
	if(dG->pistacho != 0 && (dG->pistacho-1) != 0 && (dG->limon) != 0) printf("pistacho - pistacho - limon\n");
	if(dG->pistacho != 0 && (dG->pistacho-1) != 0 && (dG->menta) != 0) printf("pistacho - pistacho - menta\n");
	
	if(dG->menta != 0 && (dG->menta-1) != 0 && (dG->chocolate) != 0) printf("menta - menta - chocolate\n");
	if(dG->menta != 0 && (dG->menta-1) != 0 && (dG->vainilla) != 0) printf("menta - menta - vainilla\n");
	if(dG->menta != 0 && (dG->menta-1) != 0 && (dG->fresa) != 0) printf("menta - menta - fresa\n");
	if(dG->menta != 0 && (dG->menta-1) != 0 && (dG->limon) != 0) printf("menta - menta - limon\n");
	if(dG->menta != 0 && (dG->menta-1) != 0 && (dG->pistacho) != 0) printf("menta - menta - pistacho\n");	
	
	if(dG->chocolate != 0 && (dG->vainilla) != 0 && (dG->fresa) != 0) printf("chocolate - vainilla - fresa\n");
	if(dG->chocolate != 0 && (dG->vainilla) != 0 && (dG->limon) != 0) printf("chocolate - vainilla - limon\n");		
	if(dG->chocolate != 0 && (dG->vainilla) != 0 && (dG->pistacho) != 0) printf("chocolate - vainilla - pistacho\n");
	if(dG->chocolate != 0 && (dG->vainilla) != 0 && (dG->menta) != 0) printf("chocolate - vainilla - limon\n");
	
	if(dG->chocolate != 0 && (dG->fresa) != 0 && (dG->limon) != 0) printf("chocolate - fresa - limon\n");
	if(dG->chocolate != 0 && (dG->fresa) != 0 && (dG->pistacho) != 0) printf("chocolate - fresda - pistacho\n");
	if(dG->chocolate != 0 && (dG->fresa) != 0 && (dG->menta) != 0) printf("chocolate - fresa - menta\n");
	
	if(dG->chocolate != 0 && (dG->limon) != 0 && (dG->pistacho) != 0) printf("chocolate - limon - pistacho\n");
	if(dG->chocolate != 0 && (dG->limon) != 0 && (dG->menta) != 0) printf("chocolate - limon - menta\n");
	
	if(dG->chocolate != 0 && (dG->pistacho) != 0 && (dG->menta) != 0) printf("chocolate - pistacho - menta\n");
	
	if(dG->vainilla != 0 && (dG->fresa) != 0 && (dG->limon) != 0) printf("vainilla - fresa - limon\n");
	if(dG->vainilla != 0 && (dG->fresa) != 0 && (dG->pistacho) != 0) printf("vainilla - fresa - pistacho\n");
	if(dG->vainilla != 0 && (dG->fresa) != 0 && (dG->menta) != 0) printf("vainilla - fresa - menta\n");
	
	if(dG->vainilla != 0 && (dG->limon) != 0 && (dG->pistacho) != 0) printf("vainilla - limon - pistacho\n");
	if(dG->vainilla != 0 && (dG->limon) != 0 && (dG->menta) != 0) printf("vainilla - limon - menta\n");
	
	if(dG->vainilla != 0 && (dG->pistacho) != 0 && (dG->menta) != 0) printf("vainilla - pistacho - menta\n");
	
	if(dG->fresa != 0 && (dG->limon) != 0 && (dG->pistacho) != 0) printf("fresa - limon - pistacho\n");
	if(dG->fresa != 0 && (dG->limon) != 0 && (dG->menta) != 0) printf("fresa - limon - menta\n");
	
	if(dG->fresa != 0 && (dG->pistacho) != 0 && (dG->menta) != 0) printf("fresa - pistacho - menta\n");
	
	if(dG->limon != 0 && (dG->pistacho) != 0 && (dG->menta) != 0) printf("limon - pistacho - menta\n");
}// Imprime por pantalla que tipos de cucuruchos pueden confeccionarse con los helados disponibles
