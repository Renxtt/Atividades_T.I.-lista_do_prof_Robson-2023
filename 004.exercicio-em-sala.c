#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

main(void){
	setlocale(LC_ALL,"portuguese");
	float id, alt;
	
	printf("Qual � a sua idade: ");
	scanf("%f", &id);
	
	printf("Qual � a sua Altura: ");
	scanf("%f", &alt);
	
	if(id>18&&alt>1.60){
		printf("Voc� pode entrar!");
		//TODO
	}else{
		printf("Desculpe, voc� n�o atende aos requisitos de altura e idade para entrar.");
		//TODO
	}
	return 0;
}
