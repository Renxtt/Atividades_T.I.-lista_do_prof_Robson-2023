#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

main(void){
	setlocale(LC_ALL, "portuguese");
	int dias, ano;
	char mes[40];
	
	//leia o m�s e o ano atual e exiba a quantidade de dias desse m�s. Considere que fevereiro tem 28 dias (ou 29 em anos bissextos) e que os outros meses t�m 30 ou 31 dias.
	printf("Qual � o Ano que voc� est�: ");
	scanf("%d", &ano);
	printf("Qual � o m�s que voc� est�?: ");
	scanf("%s", &mes);
	
	if(strcmp(mes, "Janeiro")==0||strcmp(mes, "janeiro")==0||strcmp(mes, "Mar�o")==0||strcmp(mes, "mar�o")==0||strcmp(mes, "Maio")==0||strcmp(mes, "maio")==0||strcmp(mes, "Julho")==0||strcmp(mes, "julho")==0||strcmp(mes, "Agosto")==0||strcmp(mes, "agosto")==0||strcmp(mes, "Outubro")==0||strcmp(mes, "outubro")==0||strcmp(mes, "Desebro")==0||strcmp(mes, "desembro")==0){
		dias=31;
		printf("o m�s %s tem %d dias", mes, dias);
	}else if(strcmp(mes, "Fevereiro")==0||strcmp(mes, "fevereiro")==0){
		dias=28;
		printf("o m�s %s tem %d dias", mes, dias);
	}else if(strcmp(mes, "Abril")==0||strcmp(mes, "abril")==0 || strcmp(mes, "Junho")==0||strcmp(mes, "junho")==0||strcmp(mes, "Setembro")==0||strcmp(mes, "setembro")==0||strcmp(mes, "Novembro")==0||strcmp(mes, "novembro")==0){
		dias=30;
		printf("o m�s %s tem %d dias", mes, dias);
	}
	
}
	
