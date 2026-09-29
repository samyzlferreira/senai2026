#include <stdio.h>
void main (){
	float r, al, ar, v;
	float pi = 3.14;
	printf ("informe o r do cilindro (cm):\n");
	scanf ("%f", &r);
	printf ("informe a al do cilindro (cm):\n");
	scanf ("%f", &al);
	// processamento
	ar = 2 * pi * r * (r + al);
	v = pi * r * r * al;
	printf ("area do cilindro: %.2f cm2\n", ar);
	printf ("volume do cilindro: %.2f cm3\n", v);
	getch();	
}
