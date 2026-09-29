#include <stdio.h>
void main (){
	// variaveis 
	int salarioAtual, indicePercentual, novoSalario;
	char nomePessoa[20];
	printf ("Digite seu nome:\n");
	scanf("%s", &nomePessoa);
	printf ("digite salario atual:\n");
	scanf ("%d", &salarioAtual);
	printf ("digite indice percentual de reajuste do salario:\n");
	scanf ("%d", &indicePercentual);
	
	novoSalario = salarioAtual + indicePercentual * salarioAtual / 100;
	
	printf ("%s, seu novoSalario e %d.", nomePessoa, novoSalario);
	getch();
}