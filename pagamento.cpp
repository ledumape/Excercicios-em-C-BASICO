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
