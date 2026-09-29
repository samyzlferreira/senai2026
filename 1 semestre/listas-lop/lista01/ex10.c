#include <stdio.h>
int main(){
	float porcentagem, participantes, votos;
	char nome [50];
	
	printf("digite o nome da cidade:");
	scanf ("%s", nome);
	
	printf ("digite o total de participantes:");
	scanf ("%f", &participantes);
	
	printf ("digite o total de votos:");
	scanf ("f", &votos);
	
	//processamento
	porcentagem = (votos * 100.0) / participantes;
	
	printf("cidade %s\n", nome);
	printf ("porcentagem de participacao: %.2f%%\n", porcentagem);
	getch();
}