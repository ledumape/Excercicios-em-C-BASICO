/*Problema "troco" 
Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. 
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, 
e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve 
mostrar o valor do troco a ser devolvido ao cliente. */

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
