//Carlos Eduardo Simón Zepeda
//Alejandro Hernández Gómez
#include <stdio.h>
#include <stdlib.h>


//crea una matriz bidimensional de forma dinamica, pide las filas y las columnas
int ** creaMatriz(int fila, int columna){
	int **p;
	int i;
	p=(int **) malloc(sizeof(int *)*fila);
	for(i=0; i<fila;i++ ){
		p[i]=(int *)malloc(sizeof(int)*columna);
	}
	return p;
}
//llena la matriz bidimensional con valores enteros
int ** leeMatriz(int ** matriz, int fila, int columna){
	int i, j;
	for(i=0; i<fila; i++){
		for(j=0; j<columna; j++){
			printf("Especifique el valor de la matriz en la posición (%d,%d)\n",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	return matriz;
	
}
//verifica las condiciones para que exista una estrella en cierta posición
int ** analizarFoto(int **a, int fila, int columna){
	int ** b, i ,j, l;
	printf("fila %d, columna %d\n",fila,columna );
	b =  creaMatriz(fila,columna);

	for(i=1; i<fila-1; i++){
		for(j=1; j<columna-1; j++){
			l=(a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1]);
			//printf("%d\n",l);
			if(l>30){
				b[i][j]=1;
			}else
			{
				b[i][j]=0;
			}
		}
	}
	return b;
}
//imprime una matriz en caso de que contenga una estrella
void imprimeB(int **b, int fila, int columna){	
	int i,j;
	for( i=0; i<fila; i++){
		for( j=0; j<columna; j++){
			if(b[i][j]==1){
				printf("*");
			}else{
				printf(" ");
			}

		}
		printf("\n");
	}
}
//regresa un valor especificado por el usuario que representa el largo de la matriz
int pideLargoMatriz(){
	int columna;
	do{
		printf("Especifique el largo de la matriz\n");
		scanf("%d",&columna);
	}while(columna >15);
	return columna;
}
//regresa un valor especificado por el usuario que representa el alto de una matriz
int  pideAltoMatriz(){
	int fila;
	do{
		printf("Especifique el alto de la matriz\n");
		scanf("%d",&fila);
	}while(fila >15);
	return fila;
}
void liberaMemoria(int ** A){
	free(A);
}


main(){
	int fila=pideAltoMatriz();
	int columna=pideLargoMatriz();
	int ** a, **b, **c;
	a=creaMatriz(fila,columna);	
	c=leeMatriz(a,fila,columna);	
	b = analizarFoto(c,fila,columna);
	imprimeB(b,fila,columna);
}