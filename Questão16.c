/*Dados um n�mero natural n, exiba seu fatorial n!. */

#include <stdio.h>

int main(){

	int n, fato;

	//Entrada do n�mero natural

	printf("Digite um n�mero natural: ");
	scanf("%d", &n);

	//Processamento do Fatorial

	for(fato=1; n>1; n=n-1){
		fato = fato*n;
	}

	//Impress�o do fatorial

	printf("\n O fatorial desse n�mero �: %d", fat);
}
