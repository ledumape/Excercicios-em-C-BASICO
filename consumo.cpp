/*Problema "consumo" 
Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de 
combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo 
médio do carro, com três casas decimais. */
#include <stdio.h>
int main(){
	float distancia, combustivel, media;
	
	printf("Distancia percorrida: ");
	scanf("%f", &distancia);
	
	printf("\ngasto de combustivel:");
	scanf("%f", &combustivel);
	
	media = distancia/combustivel;
	
	printf("\nconsumo medio foi: %.3f ", media);
}
