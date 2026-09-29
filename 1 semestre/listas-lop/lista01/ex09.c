#include <stdio.h>
void main (){
	float p, np;
	char nome[50];
	printf("digite o nome da mercadoria :\n");
	scanf("%s", &nome);
	printf("digite o preco da mercadoria :\n");
	scanf("%f", &p);
	np = p + (p * 0.05);
	printf("nome da mercadoria: %s \n", nome);
	printf("novo preco: %.2f\n", np);
}