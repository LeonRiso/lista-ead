#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float litro,lata, valortotal,  area;
	
	printf("informe, o tamanho em metros quadrados, da area que a ser pintada:  ");
	scanf("%f",&area);
	
	if(area>=108){
	
	litro = area/6;
	lata = litro/18;
	valortotal = lata * 80;
	printf("Voce tera que comprar %2.f latas e o valor total é %.2f",lata,valortotal);
		}else{		
		litro = area/6;
		lata = litro/3.6;
		valortotal = lata * 25;
		printf("Voce tera que comprar %2.f latas e o valor total é %.2f",lata,valortotal);
		}

}
