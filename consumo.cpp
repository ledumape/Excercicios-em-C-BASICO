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
