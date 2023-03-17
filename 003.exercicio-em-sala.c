#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

main(void){
	setlocale(LC_ALL,"portuguese");
	char idp;
	float pre;
	float val, vel;
	//leia o valor de um produto
	printf("Qual é o Produto Comprado?: ");
	scanf("%s", &idp);
	printf("Qual é o preço do seu produto?: ");
	scanf("%f", &pre);
	//exiba o valor final com desconto de 10% se o valor for maior ou igual a R$ 100,00 ou o valor sem desconto se o valor for menor que R$ 100,00.
	if(pre>=100){
		val=pre-(pre*0.10);
		printf("com 10/100  de desconto seu produto custará: %f", val);
		
		//TODO
	}else{
		val=pre;
		printf("com 0/100 de desconto seu produto custará: %f", val);
		//TODO
	}
	
	
	
}
