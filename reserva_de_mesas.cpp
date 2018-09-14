/* menu para reservar mesas */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//variaveis
char nome[30];
int cont= 0, lugares, mesas[10] = {1,2,3,4,5,6,7,8,9,10};

int main ()
{
	setlocale(LC_ALL, "portuguese");
	printf("\n ==== RESERVA DE MESAS ====");
	
	do {
		printf("\n Digite o nome da reserva: ");
		scanf("%s", &nome);
		
		printf("\n Informe a quantidade de lugares: ");
		scanf("%d", &lugares);
		
		if (lugares <= 0 || lugares > 4) {
			printf("\n VALOR INVALIDO!!");
		} else {
			printf("\n Numero de lugares: %d", lugares);
		}
		cont++;
	} while (cont < 10);
	system("pause");
	
	return 0;
}
