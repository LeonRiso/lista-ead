#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int a ;
	float total;
	
	printf("Tabela de pre�os \n" );
	
	for(a;a<=50;a++){
		total = a * 1.99;
	 printf("%d - R$%.2f \n",a,total);
	}
}
