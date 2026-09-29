#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
 	//gerar números aleatórios
 	float numeros[10];
 	//pega o tempo atual
 	srand (time(NULL));
 	//gera 10 número a partir do tempo
	 for (int i = 0; i < 10; i++) {
	 	float x = rand ();
	 	numeros [i] = x;
	 }
 	//mostrar os numeros gerados 
 		for (int i = 0; i < 10; i++) {
	 	printf ("%.2f\n", numeros [i]);
 }
		getch();
}