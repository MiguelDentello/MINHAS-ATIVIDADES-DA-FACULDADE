/*
	Name: funcoes.cpp
	Author: 
	Date: 18/08/25 08:24
	Description: Program para demonstra o uso de funçoes
*/
#include<stdio.h>
//sessao de prototipaçao 
int somar(int,int);
float dividir(int,int);
void imprimirMsg();
int subtrair(int, int);
int multiplicar(int, int);
int potencializar(int, int);
main()
{
	int a, b, soma, sub, mult, p, i, pot;
	float divi;
	
	printf("digite o valor de A: ");scanf("%d",&a);
	printf("digite o valor de B: ");scanf("%d",&b);
	
	
	soma = somar(a,b);//invoke
	printf ("A soma e: %d", soma);
	
	divi = dividir(a,b);//invoke
	printf ("\nO resultado da divisao e: %.2f", divi);
	
	sub = subtrair(a,b);
	printf("\no resultado da subtracao eh: %d", sub);
	
	mult = multiplicar(a,b);
	printf("\no resultado da multiplicacao eh: %d", mult);
	
	pot = potencializar (a,b);
	printf("\n o resultado da potencia eh: %d", pot);

	imprimirMsg();
	
	
}//fim do programa 

void imprimirMsg()
{
	puts(" \nsantos 0 x vasco 6 ");
}

int somar(int a, int b)
{
	return a + b;
}
float dividir(int a, int b)
{
	return (float) a / b;
}
int subtrair(int a, int b)
{
	return a - b;
}
int multiplicar(int a, int b)
{
	return a * b;
}
int potencializar(int a, int b)
{
	int p = 1;
	
	for(int i = 0; i < b; i++)
		p = p * a;
				
		return p;	
}
