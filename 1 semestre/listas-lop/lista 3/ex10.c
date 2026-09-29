#include <stdio.h>
void main (){
	//laço 
	int num;
	printf (" digite um numero inteiro e positivo:\n");
	scanf ("%d", &num);
	for (int i = 0; i <= num; i+=2){
		printf ("%d\n", i);
	}
}