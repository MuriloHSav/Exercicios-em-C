/*Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael
e informar quem � o mais velho. Considere que essas pessoas possuem idades diferentes.*/

#include <stdio.h>

int main(){
	
	int pedro, joana, ismael;
	
	//Entrada de idades
	
	printf("Digite a idade de Pedro: ");
	scanf("%d", &pedro);
	printf("Digite a idade de Joana: ");
	scanf("%d", &joana);
	printf("Digite a idade de Ismael: ");
	scanf("%d", &ismael);
	
	//Comparando as idades
	
	if(pedro > joana && pedro > ismael){
		printf("Pedro � o mais velho");
	}else if(joana > pedro && joana > ismael){
		printf("Joana � a mais velha");
	}else if(ismael > joana && ismael > pedro){
		printf("O Ismael � o mais velho");
	}else{
		printf("Voc� digitou idades iguais, tente novamente");
	}
}

