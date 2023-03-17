#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

main(void){
	setlocale(LC_ALL,"portuguese");
	float id, alt;
	
	printf("Qual é a sua idade: ");
	scanf("%f", &id);
	
	printf("Qual é a sua Altura: ");
	scanf("%f", &alt);
	
	if(id>18&&alt>1.60){
		printf("Você pode entrar!");
		//TODO
	}else{
		printf("Desculpe, você não atende aos requisitos de altura e idade para entrar.");
		//TODO
	}
	return 0;
}
