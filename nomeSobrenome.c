#include<stdio.h>
#include<string.h>
int main(){
	char nome[12];
	char sobrenome[12];
	char nomeCompleto[24];
	printf("Qual o teu nome? ");
	gets(nome);
	printf("Qual o teu sobrenome? ");
	gets(sobrenome);
	printf(nome);
	printf(" ");
	printf(sobrenome);
}
