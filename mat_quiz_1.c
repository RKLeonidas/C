#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <unistd.h>
//A biblioteca unistd.h tem a função sleep que ela da um tempo entre uma linha em outra
//sleep(time)
//O tempo é em segundos
int main (void)
{
  setlocale(LC_ALL,"Portuguese");
  char resposta1,resposta2,resposta3,resposta4,resposta5;
  printf("\tQuiz de Matemática básica\n");
  printf("1º Pergunta:7x9² é igual a 9²x7?\n");
  printf("A)Verdadeiro\n");
  printf("B)Falso\n");
  printf("(Insira apenas a letra correspondente a alternativa correta)\n");
  printf("Resposta: ");
  scanf("%c",&resposta1);
  if(resposta1== 'a'||'A' == resposta1){
  		system("color a");
  		printf("Resposta correta! =D\n");
  		system("PAUSE");
  		system("color 7");
  }
  else if(resposta1== 'F'||'f'== resposta1){
  	system("color c");
  	printf("Resposta errada =(\n");
  	system("PAUSE");
  	system("color 7");
  }
  else
  	{
	system("color c");
  	printf("Resposta errada =(\n");
  	system("PAUSE");
  	system("color 7");
  }
  printf("2º pergunta:");
  return 0;
  
  
}
