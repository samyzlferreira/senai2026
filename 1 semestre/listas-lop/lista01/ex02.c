#include <stdio.h>
void main (){
	// variaveis 
	float v, d, t; 
	int h, m;
	printf("digite a velocidade em km/h:\n");
	scanf ("%f", &v);
	printf("digite a distancia a ser percorrida em km\n");
	scanf ("%f", &d);
	
	t = v / d;
	h = t / 60;
	m = t - h * 60;
	
	printf ("voce levara %d horas  e %d minutos para percorrer.", h, m);
    getch();
}