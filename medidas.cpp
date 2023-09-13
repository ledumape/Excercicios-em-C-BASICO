#include <stdio.h>
int main(){
	float A, B ,C , area, area2, area3;
	
	printf("digite a medida A: ");
	scanf("%f", &A);
	
	printf("digite a medida B: ");
	scanf("%f", &B);
	
	printf("digite a medida C: ");
	scanf("%f", &C);
	
	area = A*A;
	area2 = (A*B)/2;
	area3 = (A+B)*C/2;
	
	printf("A :%.4f ", area);
	printf("\nB:%.4f", area2);
	printf("\nC:%.4f ", area3);
}
