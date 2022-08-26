#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float salario, salarionovo, aumento, por;
	
	printf("Informe seu salario");
	scanf("%f",&salario);
	
	if(salario <= 280){
		aumento = salario * 20/100;
		salarionovo = salario  +aumento;
		por = 20;
	}else if(salario <= 700){
		aumento = salario * 15/100;
		salarionovo = salario+aumento;
		por = 15;
	}else if(salario <= 1500){
		aumento = salario * 10/100;
		salarionovo = salario+aumento;
		por = 10;
	}else{
		aumento = salario * 5/100;
		salarionovo = salario+aumento;
		por = 5;
	}
	printf("Salario antes: %.2f \n Porcentual Aplicado: %.2f \n Valor do Aumento: %.2f \n Novo Salario: %.2f",salario,por,aumento,salarionovo);

}
