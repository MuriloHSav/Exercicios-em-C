/*Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfab�tica.*/

#include <stdio.h>
#include <string.h>

int main(){
	
	char nome1[20], nome2[20]
	
	//Entrada
	
	printf("Digite o primeiro nome: ");
    gets(nome1);

    printf("Digite o segundo nome: ");
    gets(nome2);
    
    //Processamento e impress�o
    
    if((int) nome1[0] < (int) nome2[0]){
        printf("%s  %s",nome1,nome2);
    }else{
        printf("%s  %s",nome2,nome1);
    }
}
