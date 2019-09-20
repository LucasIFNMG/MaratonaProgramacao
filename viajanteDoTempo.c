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

