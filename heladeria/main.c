//Alejandro Hernandez Gomez
//Leonardo Jarillo Michel
#include <stdio.h>
#include <stdlib.h>
#include "heladeria.h"
#include "heladeria.c"

int main(){
	int menuPrincipal, heladoP;
	helado icecream = creaHelado(5,0,3,2,1,5); //asigna a disponibilidad en los valores
	heladoDisponible(icecream);
	printf("menu principlal \n1) Aumentar existencia \n2) Preparar cucurucho \n3) Mostrar disponibilidad de cucuruchos \n0) Salir \nOpcion: ");
	scanf("%d",&menuPrincipal);
	
	switch(menuPrincipal){
		case 1: icecream = incrementaHelado(icecream); heladoDisponible(icecream);break;
		case 2: esPosibleCucurucho(icecream);break;
		case 3: heladoDisponible(icecream);cucuruchoDisponible(icecream);break;
		case 0:	break;
		default: printf("Esa opcion no es valida");
	}
	return 0;
}


