#include <stdio.h>
void main (){
	float salario, nSalario;
	printf ("informe o salario do funcionario:");
	scanf("%f", &salario);
	if (salario <= 1800){
	nSalario = salario + (salario * 0.15);
}else{
	nSalario = salario + (salario * 0.10);
}
printf ("novo salario: %.2f", nSalario);
	
}