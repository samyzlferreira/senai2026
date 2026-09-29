#include <stdio.h>
void main (){
	float n1, n2, n3, m;
	printf ("digite sua primeira nota:");
	scanf ("%f", &n1);
	printf ("digite sua segunda nota:");
	scanf ("%f", &n2);
	printf ("digite sua terceira nota:");
	scanf ("%f", &n3);
	m = (n1 + n2 + n3) / 3;
	if (m >=7){
		printf ("aprovado! :)");
	}else if ( m >= 5 &&m <7){
		printf (" recuperaçao :( )");
	}else 
	printf (" reprovado :(( )");
	getch();
}