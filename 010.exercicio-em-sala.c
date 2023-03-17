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


	float gol_prim, gol_seg, gol_terc, gol_quart,media;
	printf("Insira a quantidade de gols dem cada jogo.");
	printf("\nPrimeiro Jogo: ");
	scanf("%f",&gol_prim);
	printf("Segundo Jogo: ");
	scanf("%f",&gol_seg);
	printf("Terceiro Jogo: ");
	scanf("%f",&gol_terc);
	printf("Quarto Jogo: ");
	scanf("%f",&gol_quart);

media = (gol_prim+gol_seg+gol_terc+gol_quart) /4;
printf("\n\n\t\tA Média de gols por partida: %.0f",media);

return 0;
}
