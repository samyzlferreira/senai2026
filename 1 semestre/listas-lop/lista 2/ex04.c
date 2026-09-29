#include <stdio.h>
void main() {
int num1, num2;
	printf ("informe o primeiro numero:\n");
	scanf ("%d", &num1);
	printf("informe o segundo numero :\n");
	scanf ("%d", &num2);
	if (num1 > num2){
		printf("o maior numero e : %d", num1);
	}else if (num2 > num1){
		printf ("o maior numero e %d", num2);
		}else{
			printf ("numeros iguais");
		}
	}
