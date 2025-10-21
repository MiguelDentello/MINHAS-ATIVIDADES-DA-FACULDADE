/*
	Name: vetorfuncoes.cpp
	Author: Miguel Dentello dos Santos
	Date: 15/09/25 07:53
	Description:Programa para fazer a carga 
				e operaçoes em vetores por 
				meio de funçoes
*/
//sessão de importação de bibliotecas
#include<stdio.h>

//sessao de prototipação
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
		//invoke da função para imprimir o vetor
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
