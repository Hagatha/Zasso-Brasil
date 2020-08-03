/*
Empresa: Zasso Brasil
Atividade: A - Teste de Lógica de programação
Desenvolvedora: Hagatha Juliato
Data: 01/08/2020
*/

#include<stdio.h>
#include<stdlib.h>


int main() {
	int N;											// Declaração do valor inteiro de entrada do usuário
	float Num, horas, minutos, segundos;			// Declaração números reais utilizados nos cálculos

	printf("Entre com o total em segundos:  ");
	scanf_s("%d", &N);									// Recebimento do número inteiro pelo usuário
	Num = N;											// Conversão int - float para cálculos posteriores

	// Cálculo de horas, segundos e minutos correspondentes
	horas = Num / 3600;
	minutos = (horas - (int)horas) * 60;
	segundos = (minutos - (int)minutos) * 60;

	printf(" %d : %d : %d \n\n", (int)horas, (int)minutos, (int)segundos);			// Saída horas : minutos : segundos


	return 0;
}
