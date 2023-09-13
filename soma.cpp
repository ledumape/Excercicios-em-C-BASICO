/*Problema "soma" 
Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes 
números. */
#include <stdio.h>
int main(){
	float nota, nota2, soma;
	
	printf("Coloque a nota 1: ");
	scanf("%f",&nota);
	
	printf("\nColoque a nota 2: ");
	scanf("%f", &nota2);
	
	soma = nota + nota2;
	
	printf("\na soma das notas: %.2f", soma);
}
