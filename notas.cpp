#include <stdio.h>
int main(){
	float nota , nota2 , media;
	
	printf("Nota do primeiro semestre: ");
	scanf("%f", &nota);
	
	printf("Nota do segundo semestre:");
	scanf("%f", &nota2);
	
	media = (nota + nota2)/2;
	
	if (media < 6){
		printf("REPROVADO sua nota e: %.1f", media);
	}else{
		printf("aprovado sua nota e: %.1f",media );
		
		
	}
	
}
