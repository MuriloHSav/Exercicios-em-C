/*Desenvolva um programa que leia dez n�meros do tipo inteiro ao usu�rio armazene esses
dez n�meros em um vetor. Para os valores dos elementos inseridos nas posi��es pares desse
vetor, calcule o somat�rio deles, para os demais calcule a subtra��o desses valores. Em
seguida, o programa dever� apresentar na tela os resultados.*/

#include <stdio.h>

int main(){
	
	int nume[10], soma=0, subtracao=0;
	
	for(int i=0; i<10;i++){
		printf("Digite um n�mero: ");
		scanf("%d",&nume[i]);
		
		if(i%2 == 0){
			soma += nume[i];
		}else{
			subtracao -= nume[i]
		}
	}
	printf("A soma dos valores em posi��es pares � %d e a subtra��o dos valores em posi��es �mpares � %d", soma, subtracao);
}
