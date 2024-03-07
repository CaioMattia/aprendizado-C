#include <stdio.h>

int main(void)
{
	int idade;
	char letraInicial;
	float altura;
	
	printf("Digite idade: \n");
	scanf("%d", &idade);
	printf("A letra inicial do teu nome: \n");
        scanf(" %c", &letraInicial);
	printf("A tua altura: \n");
	scanf("%f", &altura);
	system("cls");
	printf("Tua idade: \n");
	printf("%d \n", idade);
	printf("Letra Inicial: \n");
	printf(" %c \n", letraInicial);
	printf("Altura: \n");
	printf("%f \n", altura);
	
	return 1;
}
