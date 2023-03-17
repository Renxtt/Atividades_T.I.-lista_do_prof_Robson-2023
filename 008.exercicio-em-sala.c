#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>


main(void){
	
	//8. Escreva um programa que solicita ao usuário uma string e informa se ela contém a palavra "gato".
	
	
	setlocale(LC_ALL, "portuguese");
	char name[40];
	
	printf("Digite o Seu Nome: ");
	scanf("%s", &name);
	
	if(strcmp(name,"gato")==0){
		printf("essa palavra não é gato é uma palavra %c", 37);
	}
	
}
