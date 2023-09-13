/*Problema "terreno" 
Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma 
casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida, 
o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com 
duas casas decimais.*/ 
#include <stdio.h>
int main(){
	
	double Largura,Comprimento,Valor, Area,Preco;
	
	printf("Digite a largura do terreno:");
	scanf("%lf",&Largura);
	printf("\nDigite o comprimento do terreno:");
	scanf("%lf", &Comprimento);
	printf("\nPreco por metro quadrado:");
	scanf("%lf", &Valor);
	
	Area = Largura * Comprimento;
	Preco = Area * Valor;
	printf("Resultados:");

	
	
	printf("A AREA do terreno e : %.2]f", Area);
	
	printf("\nO Preco do terreno e :%.2f",Preco);
	
	return 0;
	
	
	
}
