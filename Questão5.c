/*Escreva um programa que imprime a tabela ASCII (c�digo decimal, c�digo hexa, caractere)para os c�digos de 0 a 127*/

#include <stdio.h>

int main(){

	int c;

	//La�o de repeti��o para impress�o da tabela ASCII

	for(c = 0; c < 128; c++){
		printf("%c\n", c);
	}
}
