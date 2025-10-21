/*
	Name: EscreverEmArquivotxt.cpp
	Author: Miguel Dentello dos Santos
	Date: 22/09/25 09:55
	Description:	codigo para escrever em
					um arquivo do tipo TXT.
*/
#include <stdio.h>

main()
{
	
	int i;
	char vet[50];
	
	printf("Mensagem: "); gets(vet);
	
	FILE *fp; //declara um ponteiro para um tipo de arquivo
	char ch; //variavel para armazenar um caracter
	
	//abre o arquivo "meu_texto.txt" em modo escrita "w" - write
	fp = fopen("meutexto.txt","w");
	if(fp == NULL)//verifica se deu erro ao abrir o arquivo
	{
		printf("erro ao abrir para a escrita ");
		return 1;
	}
	
	
	//escreve um texto no arquivo
	fprintf(fp,vet);
	puts("arquivo texto gerado com sucesso!!!");
	fclose(fp);//fecha o arquivo apos a escreita
	
	
}//fim do programa
