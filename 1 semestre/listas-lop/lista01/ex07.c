#include <stdio.h>
void main (){
	int caminhao = 18;
	int alqueire = 250;
	int caminhoes, alqueires, viagens, quebrados;
	printf("digite quantos caminhoes o fazendeiro possui:\n");
	scanf("%d", &caminhoes);
	printf("digite quantos alqueires a fazenda possui:\n");
	scanf("%d", &alqueires);
	
	viagens = (alqueires * alqueire) / (caminhoes * caminhao);
	quebrados = (alqueires * alqueire) % (caminhoes * caminhao);
	if(quebrados != 0){
		viagens = viagens + 1;
	}
	printf("sera necessario %d viagens para transportar a colheita.", viagens);
	getch();
}
	