//Alejandro Hernandez Gomez & Jorge Martínez Buenrostro
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int leer(int opcion){
	int num;
	if(opcion == 0){
		printf("Ingrese el numerador: ");
		scanf("%d",&num);
	}else if(opcion == 1){
		printf("\nIngrese el denominador: ");
		scanf("%d",&num);
	}else{
		printf("\nEsa opcion no existe.");
		return 0;
	}
	return num;
}
int operacion(int opcion, int i, int num1, int den1, int num2, int den2){
	int resultado;
	switch(opcion){
		//suma
		case 0:
			if(i==0){resultado = (num1*den2)+(num2*den1);}
			else{resultado = den1*den2;}
			break;
		//resta
		case 1:
			if(i==0){resultado = (num1*den2)-(num2*den1);}
			else{resultado = den1*den2;}
			break;
		//multiplicación
		case 2:
			if(i==0){resultado = num1*num2;}
			else{resultado = den1*den2;}
			break;
		//división 
		case 3:
			if(i==0){resultado = num1*den2;}
			else{resultado = den1*num2;}
			break;
		default: printf("Esa opcion no existe.\n");
			break;
	}
	return resultado;
}
int main(){
	int nu, nd, nt, nc, op;
	int numerador;
	int denominador;
	printf("Piense en un numero racional\n");
	nu = leer(0);
	nd = leer(1);
	printf("Su numero racional es: %d/%d\nIngrese la operacion a efectuar. \n0) Suma \n1) Resta \n2) Multiplicación \n3) División \nOpcion: ", nu, nd);
	scanf("%d", &op);
	printf("Piense en un segundo numero racional con el cual efectuaremos la operacion.\n");
	nt = leer(0);
	nc = leer(1);
	
	numerador = operacion(op, 0, nu, nd, nt, nc);
	denominador = operacion(op, 1, nu, nd, nt, nc);
	printf("El resultado de la operacion es: %d/%d", numerador, denominador);
}
