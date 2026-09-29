#include <stdio.h> 
void main(){
	// variaveis
	int a, b, c, d;
	//entrada
	printf ("digite tres numeros inteiros:\n");
	scanf ("%d %d %d", &a, &b, &c);
	//processamento 
	d = (a + b) / c;
	// saida
	printf (" (a + b) / c = %d", d);
	getch();
}