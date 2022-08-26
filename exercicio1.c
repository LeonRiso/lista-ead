#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float peso, excesso, multa;
	
	printf("insira a quantidade em quilos, de peixes:  ");
	scanf("%f",&peso);
	
	if(peso>=50){
		excesso = peso-50;
		multa = excesso*4.00;
		printf("a quantidade em excesso é %2.f e devera pagar uma multa de %2.f",excesso,multa);
	}else{
		printf("você esta abaixo do excesso, não pagara multa");
	}

	
	
}
