#include <stdio.h>
void main(){
	float a, aa, i;
	printf ("informe seu ano de nasc:");
	scanf("%f", &a);
	printf ("informe o ano atual:");
	scanf ("%f", &aa);
	i = aa -a;
	if (1 >= 16){
		printf("pode votar");
	}else 
	printf ("nao pode votar");
	getch();
}