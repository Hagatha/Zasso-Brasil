/*
Empresa: Zasso Brasil
Atividade: E - Teste de Lógica de programação
Desenvolvedora: Hagatha Juliato
Data: 01/08/2020
*/

#include<stdio.h>
#include <stdlib.h>

int main() {

	int iniHora, iniMin, finHora, finMin, durHora, durMin = 0;
	
	// Recebimento dos horários do jogo pelo usuário
	printf("*** ENTRE COM OS VALORES A SEGUIR (FORMATO 24H) ***\n\n	Hora:Minuto Inicial   ");
	scanf_s(" %d : %d", &iniHora, &iniMin);
	printf("\n	Hora:Minuto Final   ");
	scanf_s(" %d : %d", &finHora, &finMin);

	// Cálculo das horas
	if (iniHora > finHora) { durHora = (24 - iniHora) + finHora; }			// Correção caso hora final seja maior que hora inicial (Considerando que HorasMax = 24 -> enunciado)
	else { durHora = finHora - iniHora; }

	// Cálculo dos minutos
	if (iniMin > finMin) { durMin = (60 - iniMin) + finMin; }				// Correção caso minuto final seja maior que minuto inicial (Considerando que MinutosMin = 1 -> enunciado)
	else { durMin = finMin - iniMin; }

	// Saída da duração total
	printf("\n\n	O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n\n", durHora, durMin);

	return 0;
}
