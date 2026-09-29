#include <stdio.h>
void main (){
	int n;
	printf ("digite um numero inteiro:\n");
	scanf("%d", &n);
	if (n > 100){
		printf("maior que 100");
	}else{
		printf ("menor ou igual a 100");
	}
	getch ();
}