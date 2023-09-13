#include <stdio.h>
int main(){
	float preco_unitario, quantidade_compra, dinheiro, troco;
	
	
	printf("Qual o preco unitario do produto? ");
	scanf("%f", &preco_unitario);
	
	printf("\nA quantidade do produto comprado: ");
	scanf("%f", &quantidade_compra);
	
	printf("\nDinheiro recebido: ");
	scanf("%f", &dinheiro);
	
	troco =   dinheiro -(preco_unitario *quantidade_compra);
	
	printf("troco: %f ", troco);
}
