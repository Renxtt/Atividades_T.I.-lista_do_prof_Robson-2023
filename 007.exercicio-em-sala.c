#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


main(void){
	setlocale(LC_ALL,"portuguese");
	
	
	//calcule a velocidade m�dia de um corredor em uma corrida de 5 km. O programa deve ler o tempo gasto pelo corredor para percorrer a dist�ncia e exibir a velocidade m�dia em km/h.
	
	float temp, vm, vvm, tempp;
	printf("Qual � a unidade de medida de tempo Minutos, Horas ou dias?: ");
	scanf("%f", &tempp);
	
	
	printf("DIgite o Tempo que voc� demorou para efetuar a Corrida: ");
	scanf("%f", &temp);
	
	vm=(5/temp)	;
	
	printf(" a velocidade m�dia em km/h �: %.2fkm/h", vm);
	
	
	return 0;
}
