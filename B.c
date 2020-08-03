/*
Empresa: Zasso Brasil
Atividade: B - Teste de Lógica de programação
Desenvolvedora: Hagatha Juliato
Data: 02/08/2020
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main() {

	/* CONSIDERAÇÕES INICIAIS
	Número máximo de parênteses por tipo de jóia: 2
	Número fixo de strings de entrada: 5
	As entradas são geradas randomicamente, a cada vez que o código é executado.
	*/

	// Declaração das variáveis de entrada

	int aux1, aux2, contador1 = 0;
	int numLinhas = 5;
	int tipoJoiaMax = 2;
	int indexIniVetor, numPar = 0;
	int totalTipo = 0;
	char entrada01[] = "  ";
	char entrada02[] = "  ";
	char entrada03[] = "  ";
	char entrada04[] = "  ";
	char entrada05[] = "  ";
	char charPar[] = "()";
	int compara1, compara2, compara3, compara4, compara5;

	srand((unsigned int)(time(NULL)));		// Random

	// Geração randomica das strings individuais de entrada
	numPar = rand() % tipoJoiaMax;			// Número randômico para a quantidade de parênteses na jóia de entrada 0'X'
	for (indexIniVetor = 0; indexIniVetor < (numPar + 1); indexIniVetor++) { entrada01[indexIniVetor] = charPar[rand() % (sizeof charPar - 1)]; }	// Random para escolha de '(' ou ')', "numPar" repetidas vezes
	numPar = rand() % tipoJoiaMax;			// Recalculo da quantidade de parênteses na string seguinte
	for (indexIniVetor = 0; indexIniVetor < (numPar + 1); indexIniVetor++) { entrada02[indexIniVetor] = charPar[rand() % (sizeof charPar - 1)]; }
	numPar = rand() % tipoJoiaMax;
	for (indexIniVetor = 0; indexIniVetor < (numPar + 1); indexIniVetor++) { entrada03[indexIniVetor] = charPar[rand() % (sizeof charPar - 1)]; }
	numPar = rand() % tipoJoiaMax;
	for (indexIniVetor = 0; indexIniVetor < (numPar + 1); indexIniVetor++) { entrada04[indexIniVetor] = charPar[rand() % (sizeof charPar - 1)]; }
	numPar = rand() % tipoJoiaMax;
	for (indexIniVetor = 0; indexIniVetor < (numPar + 1); indexIniVetor++) { entrada05[indexIniVetor] = charPar[rand() % (sizeof charPar - 1)]; }

	// Impressão das jóias de entrada
	printf("\n\n JOIAS DE DIJKTRA: \n\n      %s \n      %s \n      %s \n      %s \n      %s\n\n", entrada01, entrada02, entrada03, entrada04, entrada05);


	// Atribuição das strings a vetores inteiros (cada tipo de jóia atribuido a um valor correspondente)
	if (strncmp(entrada01, "( ", 3) == 0) { compara1 = 1; }
	else if (strncmp(entrada01, " (", 3) == 0) { compara1 = 2; }
	else if (strncmp(entrada01, "((", 3) == 0) { compara1 = 3; }
	else if (strncmp(entrada01, ") ", 3) == 0) { compara1 = 4; }
	else if (strncmp(entrada01, " )", 3) == 0) { compara1 = 5; }
	else if (strncmp(entrada01, "))", 3) == 0) { compara1 = 6; }
	else if (strncmp(entrada01, ")(", 3) == 0) { compara1 = 7; }
	else { compara1 = 8; }

	if (strncmp(entrada02, "( ", 3) == 0) { compara2 = 1; }
	else if (strncmp(entrada02, " (", 3) == 0) { compara2 = 2; }
	else if (strncmp(entrada02, "((", 3) == 0) { compara2 = 3; }
	else if (strncmp(entrada02, ") ", 3) == 0) { compara2 = 4; }
	else if (strncmp(entrada02, " )", 3) == 0) { compara2 = 5; }
	else if (strncmp(entrada02, "))", 3) == 0) { compara2 = 6; }
	else if (strncmp(entrada02, ")(", 3) == 0) { compara2 = 7; }
	else { compara2 = 8; }

	if (strncmp(entrada03, "( ", 3) == 0) { compara3 = 1; }
	else if (strncmp(entrada03, " (", 3) == 0) { compara3 = 2; }
	else if (strncmp(entrada03, "((", 3) == 0) { compara3 = 3; }
	else if (strncmp(entrada03, ") ", 3) == 0) { compara3 = 4; }
	else if (strncmp(entrada03, " )", 3) == 0) { compara3 = 5; }
	else if (strncmp(entrada03, "))", 3) == 0) { compara3 = 6; }
	else if (strncmp(entrada03, ")(", 3) == 0) { compara3 = 7; }
	else { compara3 = 8; }

	if (strncmp(entrada04, "( ", 3) == 0) { compara4 = 1; }
	else if (strncmp(entrada04, " (", 3) == 0) { compara4 = 2; }
	else if (strncmp(entrada04, "((", 3) == 0) { compara4 = 3; }
	else if (strncmp(entrada04, ") ", 3) == 0) { compara4 = 4; }
	else if (strncmp(entrada04, " )", 3) == 0) { compara4 = 5; }
	else if (strncmp(entrada04, "))", 3) == 0) { compara4 = 6; }
	else if (strncmp(entrada04, ")(", 3) == 0) { compara4 = 7; }
	else { compara4 = 8; }

	if (strncmp(entrada05, "( ", 3) == 0) { compara5 = 1; }
	else if (strncmp(entrada05, " (", 3) == 0) { compara5 = 2; }
	else if (strncmp(entrada05, "((", 3) == 0) { compara5 = 3; }
	else if (strncmp(entrada05, ") ", 3) == 0) { compara5 = 4; }
	else if (strncmp(entrada05, " )", 3) == 0) { compara5 = 5; }
	else if (strncmp(entrada05, "))", 3) == 0) { compara5 = 6; }
	else if (strncmp(entrada05, ")(", 3) == 0) { compara5 = 7; }
	else { compara5 = 8; }

	int compara[] = { compara1, compara2, compara3, compara4, compara5 };		// Vetor unico com o tipo de parênteses em casa string de entrada

	// Contagem de números inteiros iguais dentro do vetor entradaTotal
	for (aux1 = 0; aux1 < numLinhas; aux1++) {
		for (aux2 = aux1 + 1; aux2 < numLinhas; aux2++) {
			if (compara[aux1] == compara[aux2]) {
				contador1++;
			}
		}
	}

	// Atribuição do número de tipos de joias distintas à saida do contador
	switch (contador1)
	{
	case 1:	totalTipo = 4; break;
	case 2: totalTipo = 3; break;
	case 3: totalTipo = 3; break;
	case 4: totalTipo = 2; break;
	case 6: totalTipo = 2; break;
	case 10: totalTipo = 1; break;
	default: totalTipo = 5;
	}

	// Impressão do valor de saída (Quantidade de tipos de jóias)
	printf("\n\n HA %d TIPO(S) DE JOIA(S)\n\n", totalTipo);

	
	return 0;
}

