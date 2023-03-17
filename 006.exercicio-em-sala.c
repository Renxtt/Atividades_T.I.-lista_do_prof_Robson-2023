#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

main(void){
	
	//leia o salário bruto de um funcionário e 
	float slb, sll;
	setlocale(LC_ALL,"portuguese");
	printf("Digite seu Salario Bruto: ");
	scanf("%f", &slb);
	
	
	//exiba o salário líquido descontando o INSS e o IRPF. Considere as seguintes faixas de desconto: INSS - até R$ 1.100,00: 7,5%; de R$ 1.100,01 a R$ 2.203
	
	if(slb<=1100){
		sll=slb-((slb*0.075));
		printf("\nSalario Bruto: %f\nSalario Liquido após desconto de 7,5 porcento: %f", slb, sll);
		//TODO
	}else{
		printf("Você não tem Direito a Qualquer Desconto");
		
	}
	return 0;
}
