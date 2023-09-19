#include <stdio.h>
int main(){
	int X, Y;
	printf("digite dois numeros: \n");
	scanf("\n%d", &X);
	scanf("\n%d", &Y);
	while (X != Y){
		if(X<Y){
			printf("\nCRESCENTE ");
		}
			if(X>Y){
		printf("\nDECRESCENTE");
	
		}
			printf("\ndigite dois numeros: ");
			scanf("\n%d", &X);
			scanf("\n%d", &Y);
	}
}
