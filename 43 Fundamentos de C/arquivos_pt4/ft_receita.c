#include <stdio.h>

void preparar_receita(void)
{
	int ovo_qt;
	int leite_ml;
	int massa;

	ovo_qt = 2;
	leite_ml = 1;

	printf("Bem-vindo ao programa BOLO :D \n");
	printf("Ingredientes Ok!\n");
	
	massa = ovo_qt + leite_ml;

	printf("Assando bolo...\n");
	printf("Bolo pronto, retire-o do forno!\n");
	printf("Quantidade de fatias: %d\n", massa);
}

