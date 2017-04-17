// Sánchez Morales Liliana Aida
// Hernández Gómez Alejandro
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	char teamName[40]; //nombre del equipo
	int wins; //victorias
	int fails; //derrotas
} general;
typedef struct futbol{
	general foot; //llama la estructura "general" con el nombre de variable foot
	int ties; //empates
	int ourGoals; //goles a favor ("nuestros goles")
	int hisGoals; //goles en contra ("sus goles")
	char scorerName[30]; //goleador del equipo
	int scorerGoals; //numero de goles del goleador del equipo
	int teamScore;
} FOOTBALL; 
typedef struct baloncesto{
	general basket; //llama la estructura "general" con el nombre de variable basket
	int turnover; //perdidas del balón
	int rebounds; //rebotes cogidos
	char tripleScorerName[30]; //mejor anotador de triples
	int tripleScorerPoints; //numero de triples del mejor anotador
} BASKETBALL;
FOOTBALL *stateMemoryFoot(int lenght){
	FOOTBALL *memoryUsed;
	//Ingresa dentro del puntero *memoryUsed el tamaño de memoria a utilizar de un numero flotante multiplicado por la longitud del vector.
	memoryUsed = (FOOTBALL*)malloc(sizeof(FOOTBALL)*lenght);
	return memoryUsed;
}
BASKETBALL *stateMemoryBasket(int lenght){
	BASKETBALL *memoryUsed;
	//Ingresa dentro del puntero *memoryUsed el tamaño de memoria a utilizar de un numero flotante multiplicado por la longitud del vector.
	memoryUsed = (BASKETBALL*)malloc(sizeof(BASKETBALL)*lenght);
	return memoryUsed;
}
int lenght(int op){
	int lenght = 0;
	if(op==0)printf("Ingrese el numero de equipos de Football: ");	
	if(op==1)printf("Ingrese el numero de equipos de Basketball: ");
	scanf("%d",&lenght);
	return lenght;
};
void fillFoot(FOOTBALL *ptrFoot, int i){
	getchar();
	
	printf("EQUIPO %d\n\n", i+1);
	printf("Ingrese el nombre del equipo: ");gets(ptrFoot -> foot.teamName);
	printf("Ingrese el numero de victorias: ");scanf("%d",&ptrFoot -> foot.wins);
	printf("Ingrese el numero de derrotas: ");scanf("%d",&ptrFoot -> foot.fails);
	
	printf("Ingrese el numero de empates: ");scanf("%d",&ptrFoot->ties);
	printf("Ingrese los goles a favor: ");scanf("%d",&ptrFoot -> ourGoals);
	printf("Ingrese los goles en contra: ");scanf("%d",&ptrFoot -> hisGoals);
	
	getchar();
	
	printf("Ingrese el nombre del goleador: ");gets(ptrFoot -> scorerName);
	printf("Ingrese su numero de goles: ");scanf("%d",&ptrFoot -> scorerGoals);
	printf("\n");
}
void fillBasket(BASKETBALL *ptrBasket, int i){
	getchar();
	
	printf("EQUIPO %d\n\n", i+1);
	printf("Ingrese el nombre del equipo: ");gets(ptrBasket -> basket.teamName);
	printf("Ingrese el numero de victorias: ");scanf("%d",&ptrBasket -> basket.wins);
	printf("Ingrese el numero de derrotas: ");scanf("%d",&ptrBasket -> basket.fails);
	
	printf("Ingrese el numero de perdidas de balon: ");scanf("%d",&ptrBasket->turnover);
	printf("Ingrese los rebotes cogidos: ");scanf("%d",&ptrBasket -> rebounds);
	
	getchar();
	
	printf("Ingrese el nombre del mejor anotador de triples: ");gets(ptrBasket -> tripleScorerName);
	printf("Ingrese su numero de triples: ");scanf("%d",&ptrBasket -> tripleScorerPoints);
	printf("\n");
}
void footOne(FOOTBALL *ptrFoot, int lenghtFoot){
	int i, bestScore = 0; 
	char bestFoot[30];
	for(i=0;i<lenghtFoot;i++ ){
		if(bestScore < ptrFoot[i].scorerGoals){
			strcpy(bestFoot,ptrFoot[i].scorerName);
		}
	}
	printf("\nEl mejor goleador de todo el torneo de futbol: %s",bestFoot);
}
void basketOne(BASKETBALL *ptrBasket, int lenghtBasket){
	int i, one=0, two=0, three=0; 
	char oneName[30];
	char twoName[30];
	char threeName[30];
	for(i=0;i<lenghtBasket;i++ ){
		if(one < ptrBasket[i].tripleScorerPoints){
			three = two;
			two = one;
			one = ptrBasket[i].tripleScorerPoints;
			strcpy(threeName,twoName);
			strcpy(twoName,oneName);
			strcpy(oneName,ptrBasket[i].tripleScorerName);
		}else if(two < ptrBasket[i].tripleScorerPoints){
			three = two;
			two = ptrBasket[i].tripleScorerPoints;
			strcpy(threeName,twoName);
			strcpy(twoName,ptrBasket[i].tripleScorerName);
		}else if(three < ptrBasket[i].tripleScorerPoints){
			three = ptrBasket[i].tripleScorerPoints;
			strcpy(threeName,ptrBasket[i].tripleScorerName);
		}
	}
	printf("\nLos tres mejores anotadores de Triples del torneo de basketbol:\n1.%s\n2.%s\n3.%s\n",oneName,twoName,threeName);
}
void footWinner(FOOTBALL *ptrFoot, int lenghtFoot){
	int i, bestScore = 0;
	char bestFoot[30];
	for(i=0;i<lenghtFoot;i++ ){
		ptrFoot[i].teamScore=(ptrFoot[i].foot.wins*3)+ptrFoot[i].ties;
		if(bestScore < ptrFoot[i].teamScore){
			strcpy(bestFoot,ptrFoot[i].foot.teamName);
		}
	}
	printf("\nEl equipo ganador del torneo de futbol es: %s",bestFoot);
}
int main(){
	int lenghtBasket, lenghtFoot, i;
	FOOTBALL *ptrFoot;
	BASKETBALL *ptrBasket;
	
	lenghtFoot = lenght(0); //se retorna el numero de equipos (football)
	lenghtBasket = lenght(1); //se retorna el numero de equipos (basketball)
		
	//recorre el array de estructuras ejecutando la funcion de llenado
	if(lenghtFoot > 0){
		ptrFoot = stateMemoryFoot(lenghtFoot); //se declara un puntero y en el se declara un array de estructuras de tipo FOOTBALL de nombre footballTeams que recive como parametro la longitud que ingreso el usuario
		printf("\nEquipos de futbol\n");
		for(i=0;i<lenghtFoot;i++){
			fillFoot(&ptrFoot[i],i);
		}
		footOne(ptrFoot, lenghtFoot); //imprime el mayor goleador de football
		footWinner(ptrFoot, lenghtFoot); //calcula los puntos de cada equipo y elige un ganador
	}
	//recorre el array de estructuras ejecutando la funcion de llenado
	if(lenghtBasket > 0){
		ptrBasket = stateMemoryBasket(lenghtBasket); //se declara un puntero y en el se declara un array de estructuras de tipo BASKETBALL de nombre basketballTeams que recive como parametro la longitud que ingreso el usuario
		printf("\nEquipos de basquetbol\n");
		for(i=0;i<lenghtBasket;i++){
			fillBasket(&ptrBasket[i],i);
		}
		basketOne(ptrBasket, lenghtBasket);
	}
	return 0;
}
