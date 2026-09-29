#include <stdio.h>
void main (){
	int nVitorias, nEmpates, pontos;
	char nomeTime [50];
	printf ("digite nomeTime:\n");
	scanf ("%[^\n]", &nomeTime);
	printf("digite nVitorias:\n");
	scanf("%d", &nVitorias);
	printf ("digite nEmpates:\n");
	scanf ("%d", &nEmpates);
	pontos = nVitorias * 3 + nEmpates;
	printf ("pontos %d", pontos);
	getch();
}