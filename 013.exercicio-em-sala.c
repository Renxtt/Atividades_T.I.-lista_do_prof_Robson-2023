#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	unsigned int cp = 1252; 
	unsigned int cpin  = GetConsoleCP();
	unsigned int cpout = GetConsoleOutputCP();
	SetConsoleCP(cp);       
	SetConsoleOutputCP(cp);
	

	int populacao, area, densidade;
	char nome[40];
	printf("Insira o nome da cidade: ");
	fgets(nome,40,stdin);
	printf("Insira a população: ");
	scanf("%d",&populacao);
	printf("Insira a área de território(em km²): ");
	scanf("%d",&area);
	
	
	densidade=populacao/area;
	area=area*1000;

	printf("\nNome da cidade: %s",nome);
	printf("População: %d",populacao);
	printf("\nÁrea de território: %d",area);

	if(densidade<=50){
		printf("\nMenos de 50 habitantes por km²\nDensidade demográfica: Baixa");
	}else if(densidade>=51&&densidade<=100){
		printf("\nEntre 50 e 100 habitantes por km²\nDensidade demográfica: Média");
	}else if(densidade>=101){
		printf("\nMais de 100 habitantes por km²\nDensidade demográfica: Alta");
	}
	return 0;
}
