/*
	Name: SomaMatriz.cpp
	Author: Miguel Dentello dos Santos
	Date: 29/09/25 10:07
	Description: somar matrizes
*/
#include <stdio.h>
void cargaMat(int [][3], int);
void SomarMatriz(int [][3], int, int [][3], int [][3]);
void imprimeMatriz(int [][3], int );
main()
{
	int i,j;
	int mat[3][3];
	int mat2[3][3];
	int mat3[3][3];
	
	puts("Carregue a matriz 1: ");
	cargaMat(mat,3);
	
	puts("carregue a matriz 2: ");
	cargaMat(mat2,3);
	
	SomarMatriz(mat, 3 , mat2 , mat3);
	
	puts("a soma das matirzes: ");
	imprimeMatriz(mat3,3);
}//fim do programa

void cargaMat(int M[][3], int ordem)
{
	for(int i = 0; i < ordem; i++)
	{
		for(int j = 0; j < ordem; j++)
		{
			scanf("%d", &M[i][j]);
		}
	}
}

void SomarMatriz(int M[][3], int ordem, int M2[][3], int M3[][3])
{
	for(int i = 0; i < ordem; i++)
	{
		for(int j = 0; j < ordem; j++)
		M3[i][j] = M[i][j] + M2[i][j];
	
	}
}

void imprimeMatriz(int M[][3], int ordem)
{
	for(int i = 0; i < ordem; i++)
	{
		for(int j = 0; j < ordem; j++)
		{
			printf("%d\t", M[i][j]);
		}
		printf("\n");
	}
}

