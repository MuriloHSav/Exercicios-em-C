/*6) Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.
 OBS: não use o comando "if" ou o operador de condição "?".*/

#include <stdio.h>

int main(){
	
	int c, preco, infla;
	
	//Entrada do valor
	
	printf("Digite o preco do produto: ");
	scanf("%d", &preco);
	
	//Condicionais
	
	for(c=0; c < 1 && preco < 100; c++){
		infla = preco +(preco * 0.1);
		printf("O preco inflacionou em 10 por cento e o preco final do produto e: R$%d", infla);
	}
	
	for(c=0; c < 1&& preco >= 100; c++){
		infla = preco + (preco * 0.2);
		printf("O preco inflacionou em 20 por cento e o preco final do produto e: R$%d", infla);
	}
}
