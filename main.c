#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int valor1,valor2,mult1,soma1,mult2,soma2,soma3,ano_nasc,valor_final;
	float birthday_this_year;
	printf("\tVou adivinhar sua idade\n");
	printf("Pense em um n�mero de 0 a 9 e insira ele abaixo:\n");
	scanf("%d",&valor1);
	mult1=valor1*2;
	soma1=mult1+5;
	mult2=soma1*50;
	printf("Voc� j� fez anivers�rio esse ano?");
	scanf("%f",&birthday_this_year);
	if(birthday_this_year="N�o"||birthday_this_year="n�o"||birthday_this_year="nao");
	soma2=mult2+1766;
	if(birthday_this_year="Sim"||birthday_this year="sim");
	soma2=mult2+1767;
	printf("Qual o ano que voc� nasceu?");
	scanf("%d",&ano_nasc);
	soma3=soma2-ano_nasc);
	printf("O resultado ser� um n�mero de 3 dig�tos,o primeiro dig�to o n�mero que voc� pensou inicialmente,o segundo d�gito a sua idade");
	printf("%d",soma3);
	return 0;
}

