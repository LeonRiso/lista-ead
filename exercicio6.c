#include <stdio.h>
#include <locale.h>

int main(){
	int saque;
	int resto50, resto20, resto10, resto5, resto1;
    int nota100, nota50, nota10, nota5, nota1;
	
while(saque < 10|| saque > 600 ){
	printf("informe que deseja Sacar: ");
	scanf("%d",&saque);
}
	printf("%d notas de 100\n",saque/100);
	saque = saque % 100;
	printf("%d notas de 50\n",saque/50);
	saque = saque % 50;
	printf("%d notas de 10\n",saque/10);
	saque = saque % 10;
	printf("%d notas de 5\n",saque/5);
	saque = saque % 5;
	printf("%d notas de 1\n",saque/1);
}
