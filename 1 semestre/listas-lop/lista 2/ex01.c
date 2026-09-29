#include <stdio.h>

void main (){
	int num;
	
	printf ("informe um valor inteiro");
	scanf ("%d", &num);
	
	if (num > 0){
		printf ("numero positivo\n");
	} else {
		printf("numero negativo\n");
	}
	
}