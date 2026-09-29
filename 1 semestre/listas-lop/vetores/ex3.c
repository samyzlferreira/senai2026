#include <stdio.h>
void main(){
	//char usa a tabela de caracteres ASCI [0 - 255]
	char numeros [7] = {65, 66, 67, 68, 69, 97, 98};
	char nome [10] = "Alberto";
	printf ("%c\n", numeros[0]);
	printf ("%c\n", numeros[1]);
	printf ("%c\n", numeros[2]);
	printf ("%d\n", numeros[3]);
	printf ("%d\n", numeros[4]);
	printf ("%c\n", numeros[5]);
	printf ("%c\n", numeros[6]);
	printf ("%s\n", numeros);//string
	printf ("%s\n", nome); //string (vetor de caracteres)
	getch ();	
}