/*
	Name: troca.cpp
	Author: Miguel Dentello dos Santos
	Date: 08/09/25 08:39
	Description: 
*/
#include<stdio.h>
//sessao de prototipação
void trocar(int *, int *);//os * significa que esta passando a referencia
main()
{
	int a,b,z;
	a = b = 0;
	
	printf("digite o valor de A: ");scanf("%d",&a);
	printf("digite o valor de B: ");scanf("%d",&b);
	
	trocar(&a,&b);

	printf("\nA: %d", a);
	printf("\nB: %d", b);
}//fim do programa

//funçao para trocar o valor de duas variaveis
//com passagem de parametro por referencia
void trocar(int *a, int *b)
{
	*a = *a * *b;
	*b = *a / *b;
	*a = *a / *b;
	//int z = 0;
	//z = *a;
	//*a = *b;
	//*b = z;
}
