/*Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os 
nomes e a idade média entre essas pessoas, com uma casa decimal*/
#include <stdio.h>
#include <string.h>
int main(){
	char nome1[50] ,nome2[50];
	int idade1, idade2 , media;
	
	
	printf("bote o nome da primeira pessoa: ");
	gets(nome1);
	
	printf("\nidade da primeira pessoa");
	scanf("%d", &idade1);
	
	printf("\nbote o nome da segunda pessoa: ");
	fseek(stdin, 0, SEEK_END);
	gets(nome2);
	

	printf("\nidade da segunda pesssoa:");
	scanf("%d", &idade2);
	
	media = (idade1 + idade2)/2;
	printf("o nome da primeira pessoa e: %s \n o nome da segunda pessoa e: %s\n e a media das idades e: %d", nome1, nome2, idade1, idade2, media);
}
