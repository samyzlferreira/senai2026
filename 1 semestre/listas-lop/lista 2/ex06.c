#include <stdio.h>
void main (){
	int pontos;
	printf("informe a quantidade de pontos do time:");
	scanf ("%d", &pontos);
	if (pontos >= 20){
		printf("classificado");
	}else if (pontos >= 10 && pontos < 20){
		printf ("em disputa");
	}else {
		printf("eliminado");
	}
}