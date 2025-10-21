/*
	Name: matrizfuncao.cpp
	Author: Miguel Dentello dos Santos
	Date: 29/09/25 08:05
	Description: Programa para 
*/

#include <stdio.h>
void ImprimirMatriz(int [][3], int);
void TrocarZeroseUns(int [][3], int);
main()
{
	int i, j;
	int mat[3][3];
	
	puts("Digite os elementos da matriz:");
	
	for(i = 0; i < 3; i++)
	for(j = 0; j < 3; j++)
		scanf("%d", &mat[i][j]);
		
	puts("\n\nMatriz carregada!!");
	
	puts("\nConteudo da matriz: ");
	ImprimirMatriz(mat,3);
	
	puts("\nZeros e Uns:");
	TrocarZeroseUns(mat,3);
		
}//fim do programa

void ImprimirMatriz(int M[][3], int ordem)
{
	for(int i = 0; i < ordem; i++)
	{
		for(int j = 0; j < ordem; j++)
			printf("%d\t", M[i][j]);
	puts("\n");
	}
}

void TrocarZeroseUns(int M[][3], int ordem)
{
	for(int i = 0; i < ordem; i++)
	{
		for(int j = 0; j< ordem; j++)
		{
		if(M[i][j] < 10)
			M[i][j] = 0;
		else
			M[i][j] = 1;
			printf("%d\t", M[i][j]);
		}
		puts("\n");
	}
	
}

