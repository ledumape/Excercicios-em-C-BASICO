#include <stdio.h>
/*Fazer um programa para ler tr�s n�meros inteiros. Em seguida, mostrar qual o menor dentre os tr�s 
n�meros lidos. Em caso de empate, mostrar apenas uma vez. */
int main(){
	
	int numero, numero2, numero3;
	
	
	printf("bote um numero: ");
	scanf("%d", &numero);
	
		printf("bote um segundo numero: ");
	scanf("%d", &numero2);
	
	
		printf("bote um numero: ");
	scanf("%d", &numero3);
	
	if(numero< numero2 && numero < numero3){
		printf("o menor numero e: %d", numero);
		
	}else if(numero2 < numero3){
		
			printf("o menor numero e: %d", numero2);
		}
		
	else{
		printf("o menor numero e: %d", numero3);
	}
	
	
}

