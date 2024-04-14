#include <stdio.h>
#include <math.h>
#include <locale.h>

/* Crie um programa que solicita e lê uma temperatura em Celsius, faz a conversão 
para Fahrenheit e exibe tal resultado. Para isto, utilize a seguinte fórmula: 

𝐹 = (𝐶 × 1,8) + 32  */

int main() 
{ setlocale(LC_ALL, "portuguese");
 
	float tempcl,tempfa;
 
	printf("Digite a Temperatura (em Fahrenheit):");
		scanf("%f", &tempfa);
 
	tempcl = (tempfa - 32)/1.8;
 
	printf("A sua temperatura em Celcius é: %.0f\n", tempcl);
	return 0;
}
