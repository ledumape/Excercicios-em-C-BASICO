#include <stdio.h>
/*Uma operadora de telefonia cobra R$ 50.00 por um plano b�sico que d� direito a 100 minutos de 
telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para 
ler a quantidade de minutos que uma pessoa consumiu, da� mostrar o valor a ser pago. 
*/
int main(){
	int minutos, coisa;
	
	printf("digite a quantidade de minutos: ");
	scanf("%d", &minutos);
	
	coisa = minutos - 100;
	if(minutos< 100){
		printf("o total a pagar seria : 50R$");
		
	}else{
		printf("o total a pagar seria: %d ", (coisa*2+ 50));
	}
}
