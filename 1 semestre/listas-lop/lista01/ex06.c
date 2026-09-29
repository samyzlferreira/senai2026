#include <stdio.h>
void main(){
	float v, d, t;
	int h, m;
	printf ("informe a distancia a ser sobrevoada pelo aviao 747-300 em km:\n");
	scanf ("%f", &d);
	
	v = 900;
	t = d /900 * 60;
	h = t/ 60;
	m = t - h * 60;
	
	printf(" o aviao 747-300 levara %d minutos para sobrevoar.", h, m);
	getch();
}