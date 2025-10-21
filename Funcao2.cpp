/*
	Name: Funcao2.cpp
	Author: Miguel Dentello dos Santos
	Date: 18/08/25 10:10
	Description: 	programa para demonstrar as diversas formas
					de invocar (invoke) uma função
*/
#include <stdio.h>
//sessão de prototipação
int lerNum();
int somar(int, int);
int multiplicar(int, int);
float dividir(int, int);

//int a, b;//variavies globais
main()
{
	int a, b ,result;//variaveis locais do main
	a = b = result = 0;
	a = lerNum();
	b = lerNum();
	result = somar(lerNum(),lerNum());//passagem de parametro por copia
	printf("A soma eh: %d\n", lerNum() + lerNum());
	printf("A multiplicacao eh: %d\n",multiplicar( lerNum(), lerNum()));
	printf("a subtracao eh: %d\n",lerNum() - lerNum());
	printf("a divisao eh: %.2f\n", dividir(lerNum(), lerNum()));
}//fim do main

int lerNum()
{
	int num = 0;
	printf("\ndigit um numero: ");
	scanf("%d", &num);
	return num;
}

int somar(int x, int y)
{
	return x + y;
}

int multiplicar (int xis, int ispilo)
{
	return xis * ispilo;
}

float dividir(int a, int b)
{
	return (float)b / a;
}


