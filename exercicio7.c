#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int a,b,c,d,e;
	int cont = 0;
	
	printf("Responde as questões com 1 para sim e 2 para não \n");
	printf("Telefonou para a vítima? \n");
	scanf("%d",&a);
	if(a == 1){
		cont=cont+1;
}
	printf("Esteve no local do crime? \n");
	scanf("%d",&b);
	if(b == 1){
		cont=cont+1;
}
	
	printf("Mora perto da vítima? \n");
	scanf("%d",&c);
	if(c == 1){
		cont=cont+1;
}
	
	printf("Devia para a vítima? \n");
	scanf("%d",&d);
	if(d == 1){
		cont=cont+1;
}
	
	printf("Já trabalhou com a vítima? \n");
	scanf("%d",&e);
	if(e == 1){
		cont=cont+1;
}


if(cont == 2){
	printf("suspeita");
	}else if(cont = 3||4){
		printf("cumplice");
	}else if(cont == 5){
		printf("assassino");
	}else{
		printf("inocente");
}

			
}
