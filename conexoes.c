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
