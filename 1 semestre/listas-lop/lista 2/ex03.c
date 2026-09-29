#include <stdio.h>
void main (){
	float nota1, nota2, media;
	
	printf("informe sua nota\n");
	scanf("%f", &nota1);
	printf("informe sua nota\n");
	scanf("%f", &nota2);
	media= nota1 + nota2 / 2; 
	if (media >= 7){
		printf("aprovado\n");
	}else {
		printf("reprovado\n");
	}
	
}

