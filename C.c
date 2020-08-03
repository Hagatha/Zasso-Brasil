/*
Empresa: Zasso Brasil
Atividade: C - Teste de Lógica de programação
Desenvolvedora: Hagatha Juliato
Data: 03/08/2020
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

struct pessoa
{
	char nome[50][20];
	int peso[10];
	char sucesso[50];

} pessoa;


int main(int argc, char *argv) {

	int C, i, j = 0;

	// Seleção no número de casos teste
	printf("Entre com a quantidade de casos de teste:  ");
	scanf_s("%d", &C);
	getchar();
	printf("\n\n	*** INICIO DOS CASOS ***	\n");

	//Arrecadação de valores (nome e peso)
	for (i = 0; i < C; i++)
	{
		printf("\n\nPESSOA %d\n", (i + 1));
		printf("Nome:  ");
		fflush(stdin);
		fgets(pessoa.nome[i], 20, stdin);

		printf("Peso aplicado [N]:  ");
		scanf_s(" %d", &pessoa.peso[i]);
		getchar();

		// Garantir que peso esteja entre 1 e 25000
		for (j = 0; j < 10; j++)
		{
			if (j < 9 && (pessoa.peso[i] < 1 || pessoa.peso[i] > 25000))
			{
				printf("Peso deve estar entre 1 e 2500 [N]. Digite novamente:  ");
				scanf_s(" %d", &pessoa.peso[i]);
				getchar();
			}
			else if (j == 9 && (pessoa.peso[i] < 1 || pessoa.peso[i] > 25000))
			{
				printf("\nVoce e burro, cara. Volte depois.\n\n");
				return 0;
			}
			else {}

		}

		// Geração randomica de succeso em levantar o martelo (enunciado não fala sobre força mínima e, além disso, força não é tudo na vida)
		srand((unsigned int)(time(NULL)));

		char opcaoSucesso[] = "YN";
		pessoa.sucesso[i] = opcaoSucesso[rand() % (sizeof opcaoSucesso - 1)];

	}

	// Impressão de resultados
	printf("\n\n	*** RESULTADOS ***	\n");
	for (i = 0; i < C; i++)
	{
		printf("\nNome: %sPeso: %d \nLevantou: %c\n", pessoa.nome[i], pessoa.peso[i], pessoa.sucesso[i]);
	}

	return 0;

}

