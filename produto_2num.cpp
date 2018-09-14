#include <stdio.h>
#include <stdlib.h>

float n1,n2,produto;

int main ()
{
	printf("\n\nDigite um número: ");
	scanf("%f", &n1);
	printf("\n\nDigite outro numero: ");
	scanf("%f", &n2);
	produto = n1 * n2;
	
	printf("\n O Produto entre %0.2f e %0.2f eh %0.2f", n1,n2,produto);
	system("pause");
	
	return 0;
	
}
