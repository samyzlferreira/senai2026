#include <stdio.h>
int main (){
	char turno;
	printf ("digite o turno do aluno\nM para matutino\nV para vespertino\nN para noturno\n");
	scanf ("%c", &turno);
	if(turno == 'M'){
		printf ("bom dia!");
	}else if (turno == 'V'){
		printf ("boa tarde!");
	}else if (turno == 'N'){
		printf ("boa noite!");
	}else{
		printf ("turno invalido");
	}
	getch();
}