/*
	Name: vetorfuncoes.cpp
	Author: Miguel Dentello dos Santos
	Date: 15/09/25 07:53
	Description:Programa para fazer a carga 
				e opera�oes em vetores por 
				meio de fun�oes
*/
//sess�o de importa��o de bibliotecas
#include<stdio.h>

//sessao de prototipa��o
int lerNum();
void imprimirvetor(int *, int );
void impvc(int *, int );

main()
{
	int vet[5];
	
	//calcula a quantidade de elementos do vetor
	int tam = sizeof(vet)/sizeof(int);
	
	//fazer a carga do vetor
	for(int i = 0; i < tam; i++)
		vet[i] = lerNum();	
		
	
		puts("\nvetor correto: ");
		//invoke da fun��o para imprimir o vetor
		imprimirvetor(vet, tam);
		
		puts("\n\nvetor ao contrario: ");
		impvc(vet, tam);
		
}//fim do programa

void imprimirvetor(int *V, int tam)
{
	
	for(int i = 0; i < tam; i++)
		printf("%d|", V[i]);
}

int lerNum()
{
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	return num;
}

void impvc(int *V, int tam)
{
	for(int i = tam - 1; i >= 0; i--)
		printf("%d|", V[i]);
}
