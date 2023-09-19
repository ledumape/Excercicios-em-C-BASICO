#include <stdio.h>
int main(){
	
	float precouni, quantidade, result, dinheiro, troco, faltam; 
	
	printf("preco unitario do produto: ");
	scanf("%f",&precouni);
	
	printf("\nQuantidade comprada: ");
	scanf("%f", &quantidade);
	
	result = precouni * quantidade;
	
	printf("quantidade de dinheiro: ");
	scanf("%f", &dinheiro);
	if(dinheiro> result){
		troco=dinheiro- result;
		printf("seu troco e: %f", troco);
		
	}else{
		faltam = result - dinheiro;
		printf("NAO HA DINHERO O SUFIENTE, FALTAM %f REAIS", faltam);
	}
	
	
}
