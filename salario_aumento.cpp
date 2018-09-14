/* Faça um algoritmo que receba o salário de um funcionário, calcule e mostre o
novo salário, sabendo-se que este teve um aumento de 25%. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float salario, aumento, salariofinal;

int main ()
{
	setlocale(LC_ALL,"portuguese");
	
	printf("\n Digite o valor do salário: ");
	scanf("%f", &salario);
	
	aumento = salario * 0.25;
	
	salariofinal = salario + aumento;
	
	printf("\n Valor do aumento: %0.2f", aumento);
	printf("\n\n O salário final com aumento é: %0.2f\n\n", salariofinal);
	
	system("pause");
	return 0;
}
