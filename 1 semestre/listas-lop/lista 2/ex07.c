#include <stdio.h>
void main (){
	int n1, n2, n3, maior;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3) {
        maior = n1;
    } else if (n2 >= n1 && n2 >= n3) {
        maior = n2;
    } else
        maior = n3;
    
    printf("O maior numero entre eles e: %d\n", maior);

}
	