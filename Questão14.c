/*A convers�o de graus Fahrenheit para Celsius � obtida por
Tc={(Tf-32)x(5/9)}, em que Tc � a temperatura em Celsius e Tf em
Fahrenheit. Fa�a um programa C que calcule e que imprima uma tabela
de graus Fahrenheit e graus Celsius, cujos graus variem de 40 a 75,
de 1 em 1.*/

#include <stdio.h>

int main(){
	
	int c, celsius;
	
	printf("Fahrenheit	::	Celsius");
	
	for(i=40; i<=75; i++){
		celsius = ((i-32)*5)/9
		printf("	%d�F :: %d�C\n", i, celsius);
	}
}
