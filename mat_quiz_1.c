#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <unistd.h>
#include <string.h>
//A biblioteca unistd.h tem a fun��o sleep que ela da um tempo entre uma linha em outra
//sleep(time)
//O tempo � em segundos
int main (void)
{
    setlocale(LC_ALL,"Portuguese");
    char resposta1,resposta2,resposta3,resposta4,resposta5,resposta6[4];
    printf("\t\tQuiz de Matem�tica b�sica\n");
    printf("1� Pergunta:7x9� � igual a 9�x7?\n");
    printf("A)Verdadeiro\n");
    printf("B)Falso\n");
    printf("(Insira apenas a letra correspondente a alternativa correta)\n");
    printf("Resposta: ");
    resposta1=getche();
    if(resposta1== 'a'||'A' == resposta1)
    {
        system("color a");
        printf("\nResposta correta! =D\n");
        system("PAUSE");
        system("color 7");
    }
    else
    {
        system("color c");
        printf("\nResposta errada =(\n");
        system("PAUSE");
        system("color 7");
    }
    printf("\n2� pergunta:Observe a express�o num�rica: 15+34-93:3x(4+7).O que deve ser feito primeiro?\n");
    printf("A)Adi��o(+)\n");
    printf("B)Subtra��o(-)\n");
    printf("C)Divis�o(:)\n");
    printf("D)Par�nteses\n");
    printf("E)Multiplica��o(x)\n");
    printf("(Insira apenas a letra correspondente a alternativa correta)\n");
    printf("Resposta: ");
    resposta2=getche();
    if(resposta2== 'd'||'D'== resposta2)
    {
        system("color a");
        printf("\nResposta correta! =D\n");
        system("PAUSE");
        system("color 7");
    }
    else
    {
        system("color c");
        printf("\nResposta errada =(\n");
        system("PAUSE");
        system("color 7");
    }
    printf("\n3� pergunta:Quanto � 1/3 de 603?\n");
    printf("A)104\n");
    printf("B)201\n");
    printf("C)402\n");
    printf("(Insira apenas a letra correspondente a alternativa correta)\n");
    printf("Resposta: ");
    resposta3=getche();
	if(resposta3=='b'||'B'==resposta3)
	{	
		system("color a");
        printf("\nResposta correta! =D\n");
        system("PAUSE");
        system("color 7");
	}
	else
	{
		system("color c");
        printf("\nResposta errada =(");
        system("PAUSE");
        system("color 7");
	}
	printf("\n4� pergunta:Qual dos n�meros a seguir N�O � um n�mero primo?\n");
	printf("A)2\n");
	printf("B)5\n");
	printf("C)9\n");
	printf("D)3\n");
	printf("E)7\n");
	printf("(Insira apenas a letra correspondente a alternativa correta)\n");
    printf("Resposta: ");
    resposta4=getche();
    if(resposta4=='c'||'C'==resposta4)
	{
    	system("color a");
        printf("\nResposta correta! =D\n");
        system("PAUSE");
        system("color 7");
	}
	else
	{
		system("color c");
        printf("\nResposta errada =(");
        system("PAUSE");
        system("color 7");
	}
	printf("\n5� pergunta:509 � divis�vel por 3. Essa afirma��o � verdadeira ou falsa?\n");
	printf("A)Verdadeiro\n");
	printf("B)Falso\n");
	printf("(Insira apenas a letra correspondente a alternativa correta)\n");
    printf("Resposta: ");
    resposta5=getche();
    if(resposta5=='b'||'B'==resposta5)
	{
		system("color a");
        printf("\nResposta correta! =D\n");
        system("PAUSE");
        system("color 7");
	}
	else
	{
		system("color c");
        printf("\nResposta errada =(");
        system("PAUSE");
        system("color 7");
	}
	printf("\n6� pergunta:Tenho 234 balas, dei 166 para meu vizinho e este distribuiu para seus amigos. Tamb�m dei 30 para meu irm�o e ele comeu 27. Com quantas balas eu fiquei?\n");
	printf("(Insira apenas a letra correspondente a alternativa correta)\n");
    printf("Resposta: ");
    scanf("%c",&resposta6);
    atof(resposta6);
    if(resposta6=="354")
    {	
		system("color a");
        printf("\nResposta correta! =D\n");
        system("PAUSE");
        system("color 7");
	}
	else
	{
		system("color c");
        printf("\nResposta errada =(");
        system("PAUSE");
        system("color 7");
	}
	return 0;
}
