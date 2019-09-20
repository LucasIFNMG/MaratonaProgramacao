/*Maratona de Programação Simpósio de Informática IFNMG 2019
Resumo da Questão: Simular uma plataforma de Torrents P2P; o usuário deve digitar o número de arquivos e o sistema verificar quantos pares diferentes poderão ser formados
*/
//@author LucasIFNMG
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, X, saida, cont = 0;
	scanf(" %d",&N);
	do
	{
		scanf(" %d",&X);
		
		saida = (X * (X-1))/2;
		printf("%d\n",saida);
		
		cont++;
	}while(cont<N);
		
}
