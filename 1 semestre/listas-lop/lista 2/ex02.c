#include <stdio.h>
void main(){
	int  nascimento, idade;

	printf("informe seu ano de nascimento : ");
	scanf ("%d", &nascimento);
	idade = 2026 - nascimento;
	if(idade >= 18){
		printf("maior de idade\n");
	}else{
		printf("menor de idade\n");
	}
}
	
	