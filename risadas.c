#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char palavra[50];
	char vogal[50] = {0};
	char saida = 'S';
	int j=0;
	
	scanf(" %[^\n]s", palavra);
	
	for(int i= 0; i < strlen(palavra); i++)
	{
		if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
		{
			vogal[j] = palavra[i];
			j++;
		}
	}
	
	int tam = strlen(vogal) ;
	char vogalAux[50];
	for(int i = 0 , j = tam-1; i< tam , j >= 0; i++ , j--)
		vogalAux[j] = vogal[i];
	
	for(int i = 0 , j = tam-1; i< tam , j >= 0; i++ , j--)
	{
		printf("%c %c\n",vogal[i], vogal[j]);
	}
	for(int i = 0 , j = tam-1; i< tam , j >= 0; i++ , j--)
	{
		if(vogalAux[i] != vogal[i])
		{
			saida = 'N';
			printf("gg i = %d (%c) j = %d(%c)\n",i, vogal[i], i, vogalAux[i]);
			break;
		}
	}
	
	printf("%c\n",saida);
	
	

}
	
	
	

