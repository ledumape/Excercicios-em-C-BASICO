/*Problema "pagamento" 
Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a 
quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com 
uma mensagem explicativa*/
#include <stdio.h>
int main(){
	
	char nome[50];
	int Valor, horas, pagamento;
	
	printf("Nome: ");
	gets(nome);
	
	printf("\nValor por hora: ");
	scanf("%d",&Valor );
	
	
	printf("\nHoras trabalhadas: ");
	scanf("%d", &horas);
	
	pagamento = Valor * horas;
	
	printf("o pagamento do %s devera ser %d " ,nome, pagamento);
}
