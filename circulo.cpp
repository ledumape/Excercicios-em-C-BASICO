/*Problema "circulo" 
Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do 
círculo com três casas decimais. A fórmula da área do círculo é a seguinte: 𝑎𝑟𝑒𝑎 = 𝜋. 𝑟^2*/
. Você pode 
usar o valor de 𝜋 fornecido pela biblioteca da sua linguagem de programação

#include <stdio.h>
#include <math.h>

int main(){
	
	float raio, area, resultado;
	
	
	printf("Qual o vlaor do raio do circulo: ");
	scanf("%f",&raio);
	
	area = 3.14159 * pow(raio, 2.0);
	
	printf("\narea:%.3f:  ", area);
}
