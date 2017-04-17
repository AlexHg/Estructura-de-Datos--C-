//Alejandro Hernandez Gomez
#include <stdio.h>
#include <stdlib.h>

//crea un puntero direccionando a una matriz creada de manera dinamica 
float **matrixCreate(int row, int column){
	float **matrix;
	int i;
	matrix=(float **) malloc(sizeof(float *)*row);
	for(i=0; i<row;i++ ){
		matrix[i]=(float *)malloc(sizeof(float)*column);
	}
	return matrix;
}
//el usuario ingresa el numero de alumnos (row) y la funcion lo retorna
int stateRows(){
	int row;
	printf("Ingrese el numero de alumnos: ");
	scanf("%d",&row);
	return row;
}
//el usuario ingresa el numero de materias (column) y la funcion lo retorna
int stateColumns(){
	int column;
	printf("Ingrese el numero de materias: ");
	scanf("%d",&column);
	return column;
}
//el usuario ingresa la calificacion del alumno (row) en la materia (column)
int *stateValues(float *position, int row, int column){
	printf("Materia %d: ",column+1);
	scanf("%f",position);
	return 0;
}
//calcula el promedio por alumno (row)
int **resultRow(float **matrix, int row, int column){
	float sum=0;
	int i, j;
	for( i=0; i<row; i++){
		for( j=0; j<column; j++){
			sum += matrix[i][j];
		}
		printf("El promedio del alumno %d es %f\n",i+1, sum/column);
	}
	return 0;
}
//calcula el promedio por materia (column)
int **resultColumn(float **matrix, int row, int column){
	float sum=0;
	int i, j;
	for(i=0; i<column; i++){
		for( j=0; j<row; j++){
			sum += matrix[j][i];
		}
		printf("El promedio de la materia %d es %f\n",i+1, sum/row);
	}
	return 0;
}
int main(){
	float **matrix; //Matriz [][]
	int row, column; //Filas y columnas de la matriz
	int i,j; //Coordenadas en la matriz
	
	row = stateRows(); //filas
	column = stateColumns(); //columnas
	matrix = matrixCreate(row,column); //crea matriz
	
	printf("Ingrese las siguientes calificaciones:\n");
	for(i=0; i<row; i++){
		printf("\nAlumno %d\n",i+1);
		for(j=0; j<column; j++){
			stateValues(&matrix[i][j],i,j);
		}
	}//rellena matriz

	system("cls"); //limpia pantalla
	printf("RESULTADOS\n\n");
	
	//imprime resultados
	printf("Promedio x materia\n");
	resultColumn(matrix,row,column);
	printf("\n");
	printf("Promedio x alumno\n");
	resultRow(matrix,row,column);

	free(matrix);//libera memoria
	
	system("pause");//pausa el programa
	return 0;
}
