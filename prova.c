#include <stdio.h>

int main(){
	
	int alternativa[10];
	int A,P;
	int gabarito[10];
	int soma=0;
	int cont = 0;
	int j = 0;
	// 25
	// 0 0 0 0 0 1 1 0 0 1
	
	
	
	scanf(" %d %d",&A, &P);
	
	
	
	for(int i=9, j = 0; i >= 0, j < 10; i-- , j++)
	{
		alternativa[i] = A%2;
		gabarito[i] = P%2;
		A /= 2;
		P /= 2;
	
	}
	
	for(int i =0;i<10;i++)
		printf("%d %d\n ",alternativa[i], gabarito[i]);
		
	
	
	for(int i = 0 ; i < 10; i++)
	{
		if(alternativa[i] == gabarito[i])
			cont++;
	}
	
	for(int i = 10 , j = 0; i > 0; i-- , j++)
	{
		if(alternativa[i] == 1)
			soma += 2^j;
	}
	
	printf("CONT = %d\n",cont);
	
	
	return 0;
}

