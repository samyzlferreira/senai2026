#include <stdio.h>
void main (){
	int idade;
	printf ("digite sua idade:\n");
	scanf ("%d", &idade);
	if (idade<12){
		printf ("crianca\n");
	}else if (idade>=12 && idade<18){
		printf ("adolecente\n");
	}else{
		printf ("adulto");
	}
	getch ();
}