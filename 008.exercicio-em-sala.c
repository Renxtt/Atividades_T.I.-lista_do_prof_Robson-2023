#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>


main(void){
	
	//8. Escreva um programa que solicita ao usu�rio uma string e informa se ela cont�m a palavra "gato".
	
	
	setlocale(LC_ALL, "portuguese");
	char name[40];
	
	printf("Digite o Seu Nome: ");
	scanf("%s", &name);
	
	if(strcmp(name,"gato")==0){
		printf("essa palavra n�o � gato � uma palavra %c", 37);
	}
	
}
