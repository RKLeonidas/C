#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale (LC_ALL,"Portuguese");
	int valor1,valor2,mult1,soma1,mult2,soma2,soma3,valor_final;
	float ano_nasc;
	char birthday_this_year;
	printf("\tVou adivinhar sua idade\n");
	printf("Pense em um número de 0 a 9 e insira ele abaixo:\n");
	scanf("%d",&valor1);
	mult1=valor1*2;
	soma1=mult1+5;
	mult2=soma1*50;
	printf("Você já fez aniversário esse ano?(Digite S para Sim e N para Não)");
	fflush(stdin);
	scanf("%c", &birthday_this_year);
	if(birthday_this_year=='N'||'n')
		soma2=mult2+1766;
	if(birthday_this_year=='S'||'s')
		soma2=mult2+1767;
	printf("Qual o ano que você nasceu?");
	scanf("%f",&ano_nasc);
	soma3=soma2-ano_nasc;
	printf("O resultado será um número de 3 digítos,o primeiro digíto o número que você pensou inicialmente,o segundo dígito a sua idade\n");
	printf("Esse resultado é igual a ");
	printf("%d",soma3);
	return 0;
//O código funciona, a matemática n
}

