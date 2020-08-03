/*
Empresa: Zasso Brasil
Atividade: D - Teste de Lógica de programação
Desenvolvedora: Hagatha Juliato
Data: 02/08/2020
*/

#include<stdio.h>
#include<stdlib.h>

int main() {

	int A, B, C, D = 0;			// Declaração valores vareta
	char possib;				// Declaração resultado

	// Entrada dos valores pelo usuário
	printf("Entre com os comprimentos [mm] de cada vareta:\n");
	scanf_s("%d %d %d %d", &A, &B, &C, &D);

	/*	EXPLICAÇÃO TEÓRICA
	Um triângulo deve obedecer, para lados "a", "b", "c" e "d", às seguintes regras: [abs(b-c)<a<(b+c)] e [abs(a-c)<b<(a+c)] e [abs(b-a)<c<(a+b)]
	Para os lados "A", "B", "C" e "D", temos as possibilidades: A B C / A B D / A C D / B C D
	*/
	
	if ((abs(B - C) < A && A < (B + C)) && (abs(A - C) < B && B < (A + C)) && (abs(B - A) < C && C < (B + A))) { possib = 'S'; }			// Caso A B C
	else if ((abs(B - D) < A && A < (B + D)) && (abs(A - D) < B && B < (A + D)) && (abs(B - A) < D && D < (B + A))) { possib = 'S'; }		// Caso A B D
	else if ((abs(D - C) < A && A < (C + D)) && (abs(D - A) < C && C < (A + D)) && (abs(A - C) < D && D < (C + A))) { possib = 'S'; }		// Caso A C D
	else if ((abs(D - C) < B && B < (C + D)) && (abs(D - B) < C && C < (B + D)) && (abs(B - C) < D && D < (C + B))) { possib = 'S'; }		// Caso B C D
	else { possib = 'N'; }

	printf("\n\n %c \n\n", possib);

	return 0;

}
