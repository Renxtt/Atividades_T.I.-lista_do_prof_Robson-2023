#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

main(void){
	setlocale(LC_ALL,"portuguese");
	int nota;
	printf("Qual é a nota do seu aluno");
	scanf("%d", &nota);
	
	if(nota>=7){
		printf("\nAprovado!");
		//TODO
	}else if(nota>=5&&nota<=7){
		printf("Recuperação!");
		//TODO
	}else if(nota<5){
	#include <math.h>
		printf("Reprovado!");
		//TODO
	}
	
	return 0;	
}
