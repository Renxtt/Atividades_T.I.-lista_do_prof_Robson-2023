#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

main(void){
	//leia a idade de uma pessoa e o tempo de carteira de motorista e exiba a mensagem "Você pode dirigir!" se a pessoa tiver mais de 18 anos e mais de 2 anos de carteira ou "Desculpe, você não atende aos requisitos de idade e tempo de carteira para dirigir." se a pessoa não atender a esses requisitos.
	setlocale(LC_ALL,"portuguese");
	int idade, tdc;
	
	printf("Qual é a sua Idade: ");
	scanf("%d", &idade);
	
	printf("A quantos anos você dirige: ");
	scanf("%d", &tdc);
	
	if(idade>=18&&tdc>=2){
		printf("Você pode dirigir!");
		//TODO
	}else{
		printf("Desculpe, você não atende aos requisitos de idade e tempo de carteira para dirigir.");
		
	}
	
}
