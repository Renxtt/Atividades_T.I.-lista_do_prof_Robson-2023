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

//GOLS
	int gol_pri, gol_sec;
	printf("Coloqu a quantidade de gols do time A: ");
	scanf("%d",&gol_pri);
	printf("Coloque a quantidade de gols do time B: ");
	scanf("%d",&gol_sec);
	
//COMPARAÇÃO
	if(gol1>gol2){
		printf("\nO Grande Time A venceu.");
	}else if(gol1<gol2){
		printf("\nO grande Time B venceu.");
	}else if(gol1==gol2){
		printf("\nDeu Empate.");
	}
	return 0;
}
