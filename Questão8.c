/*Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número
máximo (no exemplo, 9). Este número deve ser sempre ímpar.
	1 2 3 4 5 6 7 8 9
  	  2 3 4 5 6 7 8
    	3 4 5 6 7
          4 5 6
            5
*/

#include <stdio.h>

int main(){
	int nume, c, i;
	
	// Entrada de valores
	
	printf("Digite o numero maximo que voce deseja: ");
	scanf(%d, &nume);
	
	if(nume % 2==0){
		printf("Número inválido, digite um numero impar\n")
	} else{
		for( c = 0; c <= (nume / 2) + 1; c++){
			for(i=c+1; i<=nume-c; i++){
				printf("%d ", i);
			}
			printf("\n")
			for(i=0; i<(c+1)*2+; i++){
				printf(" ");
			}
		}
	}
}
