#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

main(void){
	setlocale(LC_ALL,"portuguese");
	unsigned int cp = 1252; 
	unsigned int cpin  = GetConsoleCP();
	unsigned int cpout = GetConsoleOutputCP();
	SetConsoleCP(cp);       
	SetConsoleOutputCP(cp);


	int gol;

	printf("Insira a quantidade de gols: ");
	scanf("%d",&gol);

	if(gol>=3){
		printf("\nO jogador fez um hat-trick!");
	}else if(gol<3){
	printf("\nO jogador não fez um hat-trick.");
	}

	return 0;

	}
