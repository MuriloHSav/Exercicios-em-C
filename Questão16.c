/*Dados um número natural n, exiba seu fatorial n!. */

#include <stdio.h>

int main(){

	int n, fato;

	//Entrada do número natural

	printf("Digite um número natural: ");
	scanf("%d", &n);

	//Processamento do Fatorial

	for(fato=1; n>1; n=n-1){
		fato = fato*n;
	}

	//Impressão do fatorial

	printf("\n O fatorial desse número é: %d", fat);
}
