#include <stdio.h>
#include <math.h>
int main(){
	double base, altura, area, perimetro, diagonal;
	
	
	
	
	printf("BASE do retangulo: ");
	scanf("%lf", &base);
	
	printf("\n ALTURA do retangulo");
	scanf("%lf", &altura);
	
	area = (base * altura);
	
	perimetro = 2*(base + altura);
	
	
	diagonal = sqrt(base* base + altura * altura);
	
	
	printf("A area e: %.4lf", area);
	printf("o perimetro e: %.4lf", perimetro);
	printf("a diagonal e: %.4lf", diagonal);
	
	return 0; 
}
