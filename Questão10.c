/*Faça um programa que receba um número inteiro e que verifique se esse número
é par ou ímpar. O programa deve informar se o número é par, caso afirmativo informar
também se é ou não maior que 15 ou se o número é ímpar, caso afirmativo informar se
é ou não menor que 50.*/

#include <stdio.h>

int main(){
	
	int nume;
	
	//Entrada de números
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &nume);
	
	//Processamento, classificação e impressão do número
	
	if(nume % 2 == 0){
		printf("O numero e par\n");
		if(nume > 15){
			printf("O numero e maior que 15");
		} else{
			printf("O numero e menor que 15");
		}
	}else{
		printf("O numero e impar\n");
		if(nume < 50){
			printf("O numero e menor que 50");
		}else{
			printf("O numero e maior que 50");
		}
	}
}
