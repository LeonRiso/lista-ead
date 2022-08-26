#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float horatra, horames, salariobruto, ir, inss, sindicato, salarioliquido;
	
	printf("Quanto recebe por hora trabalhada ?    \n");
	scanf("%f",&horatra);
	printf("quantas horas trabalhou este mês ?  \n");
	scanf("%f",&horames);
	
		salariobruto = horatra * horames;
	
		salariobruto = horatra * horames;
		ir = salariobruto * 11/100;
		inss = salariobruto * 8/100;
		sindicato = salariobruto * 5/100;
		salarioliquido = salariobruto - ir - inss - sindicato;
		
	printf("+Salario Bruto: %.2f \n -IR(11%%):R$ %.2f \n -IRSS (8%%):R$ %.2f \n -Sindicato(5%%):R$ %.2f \n -Salario Liquido:R$ %.2f \n"
	,salariobruto ,ir,inss,sindicato,salarioliquido);
		

}
