#include <stdio.h>
int main(){
	
	int codigo, quant;
	float preco, total;
	printf("digite o codigo do seu produto: ");
	scanf("%d", &codigo);	
	switch(codigo){
		case 1:
			preco = 5;
			printf("\nquantos voce pegou? ");
			scanf("%d", &quant);
			total = quant * preco;
			printf("o total foi: %.2f", total);
			break;
	case 2:
			preco = 3.5;
			printf("quantos voce pegou?");
			scanf("%d", &quant);
			total = quant * preco;
			printf("o total foi: %.2f", total);
			break;
		case 3:
			preco = 4.8;
			printf("quantos voce pegou?");
			scanf("%d", &quant);
			total = quant * preco;
			printf("o total foi: %.2f", total);
			break;
		case 4:
			preco = 8.9;
			printf("quantos voce pegou?");
			scanf("%d", &quant);
			total = quant * preco;
			printf("o total foi: %.2f", total);
			break;
		case 5:
			preco = 7.32;
			printf("quantos voce pegou?");
			scanf("%d", &quant);
			total = quant * preco;
			printf("o total foi: %.2f", total);
			break;
}
}
