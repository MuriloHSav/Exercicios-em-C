/*Crie um programa que receba o valor da temperatura em Fahrenheit e imprime o
correspondente em Celsius e em Kelvin:*/

#include <stdio.h>

int main(){
	
	int fahrenheit, celsius, kelvin;
	
	//Entrada de dados
	
	printf("Digite uma temperatura em Fahrenheit: ");
	scanf("%d", &fahrenheit);
	
	//Processamento e Conversão das medidas
	
	celsius = (fahrenheit - 32) * 5/9;
	kelvin = (fahrenheit - 32) * 5/9 + 273,15;
	
	//Apresentação dos resultados após a conversão
	
	printf("Conversão de Fahrenheit para Celsius: %dC\n", celsius);
	printf("Conversão de Fahrenheit para Kelvin: %dK\n", kelvin);
	}
