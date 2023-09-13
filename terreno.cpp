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
