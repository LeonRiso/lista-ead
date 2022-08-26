#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int a ;
	float total;
	
	printf("Tabela de preços \n" );
	
	for(a;a<=50;a++){
		total = a * 0.18;
	 printf("%d - R$%.2f \n",a,total);
	}
