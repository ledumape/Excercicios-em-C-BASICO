#include <stdio.h>
void limpar_entrada() { 
 char c; 
 while ((c = getchar()) != '\n' && c != EOF) {} 
} 
int main(){
	char escala;
	int celcius, farem, tempC, tempF;
	printf("voce vai digitar a temperatura em qual escala? (F/C)");
	scanf("%c", &escala);
	limpar_entrada;
	if(escala == 'F'){
		printf("digite em fahrenheit a sua temperatura");
		
		scanf("%d", &farem);
	
		celcius = (farem -32)*5/9;
		printf("a temp em celcius e: %d", celcius);
	}else{
		printf("digite em celsius a sua tmeperatura");
		scanf("%d", &tempC);
		tempF =(tempC*9/5)+32;
		printf("sua temperatura em fahrenheit e: %d ",tempF );
	}
	
	
}
