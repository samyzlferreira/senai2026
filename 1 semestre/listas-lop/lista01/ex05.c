#include <stdio.h>
void main(){
	int nInteiro, nMais, nMenos;
	printf ("digite nInteiro:\n");
	scanf("%d", &nInteiro);
	
	nMais = nInteiro + 1;
	nMenos = nInteiro - 1;
	
	printf("n + 1 = %d, n - 1 = %d", nMais, nMenos);
	getch();
	
}
