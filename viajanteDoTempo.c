/*Maratona de Programação Simpósio de Informática IFNMG 2019
Resumo da Questão: O usuário deve digitar de 1 a 3 números, correspondentes a quantas viagens no Tempo (Passado ou Futuro) ele pode fazer.
Esses números significam quantos anos ele está progredindo ou regredindo no tempo.
O sistema deve retornar se é Possível(S) ou Não(N) fazer essas viagens no tempo e, no final, voltar ao presente.
OBS: o usuário pode digitar 3 números MAS apenas viajar 2 vezes.

EX: 5, 12, 9, fazendo apenas 2 viagens, 5 anos para o Futuro e 9 para o passado.
No final, a pessoa terminaria 4 anos no passado.
*/
#include <stdio.h>

int main(int argc, char **argv){
	
	int A = 0, B = 0, C = 0;
	int maior;
	
	char letra = 'N';
	
	scanf(" %d %d %d",&A, &B, &C);
	
	int soma = A+B+C;
	
	if(soma == 0)
		letra = 'S';
	
	if(A >= B && A>=C)
		maior = A;
		
	if(B >= A && B>=C) 
		maior = B;
	
	if(C >= A && C>=B)
		maior = C;
	
	if(maior == A)
	{
		if(maior == B+C)
			letra = 'S';
			
		if(maior + B == C || maior + C == B || maior - B == C || maior - C == B )
			letra = 'S';
	}
	
	if(maior == B)
	{
		if(maior == A+C)
			letra = 'S';
		if(maior + A == C || maior + C == A || maior - A == C || maior - C == A )
			letra = 'S';
	}	
	if(maior == C)
	{
		if(maior == A+B)
			letra = 'S';
		if(maior + A == B || maior + B == A || maior - A == B || maior - B == A )
			letra = 'S';
	}
			
	if(A == B && B == C)
		letra = 'S';
		
	if( A == B || A == C)
		letra = 'S';
	if( B == A || B == C)
		letra = 'S';
	if( C == A || C == B)
		letra = 'S';
	
	printf("%c\n",letra);

	return 0;
}

