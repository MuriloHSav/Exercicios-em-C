/*Escreva um programa que leia um n�mero na base decimal e em seguida imprima esse
mesmo n�mero nas bases octal e hexadecimal.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	int decimal;
	char b[10];
	
	//Entrada do valor
	
	printf("Insira um valor decimal: ");
	scanf("%d", &decimal);
	
	//Convers�o e Apresenta��o do valor
	
	printf("O valor recebido foi: %d\n", decimal);
	printf("O valor convertido para octal e: %o\n", decimal);
	printf("O valor convertido para hexadecimal e: %X", decimal);
	
}
