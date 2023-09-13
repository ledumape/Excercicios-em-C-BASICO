#include <stdio.h>
#include <math.h>

int main(){
	
	float raio, area, resultado;
	
	
	printf("Qual o vlaor do raio do circulo: ");
	scanf("%f",&raio);
	
	area = 3.14159 * pow(raio, 2.0);
	
	printf("\narea:%.3f:  ", area);
}
