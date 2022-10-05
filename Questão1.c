/*Faca um programa que solicite 2 numeros e informe: a soma dos numeros, o produto do
primeiro numero pelo quadrado do segundo, o quadrado do primeiro numero, a raiz quadrada
da soma dos quadrados, o seno da diferenca do primeiro numero pelo segundo e o modulo
do primeiro numero.*/

#include <stdio.h>
#include <math.h>

int main(){

	int nume1, nume2, soma, produto, quadrado, raiz, modulo, somadosqua;
	float seno;


	//Entrada dos Valores

	printf("Digite o primeiro numero: ");
	scanf("%d", &nume1);
	printf("Digite o segundo numero: ");
	scanf("%d", &nume2);

	//Processamento e definição dos operadores

	soma = nume1 + nume2;
	produto = nume1 * (nume2 * nume2);
	quadrado = nume1 * nume1;
	somadosqua = quadrado + (nume2 * nume2);
	raiz = sqrt(somadosqua);
	seno = sin(nume1 - nume2);
	modulo = nume1 < 0 ? nume1 * -1: nume1;

	//Apresentação dos valores obtidos durante as operações

	printf("A soma desses números e: %d\n",soma);
	printf("O produto do primeiro numero pelo quadrado do segundo e: %d\n",produto);
	printf("O quadrado do primeiro numero e: %d\n",quadrado);
	printf("A raiz quadrada da soma dos quadrados e: %d\n",somadosqua);
	printf("O seno da diferenca do primeiro numero pelo segundo e: %f\n",seno);
	printf("O módulo do primeiro numero e: %d\n",modulo);

}
