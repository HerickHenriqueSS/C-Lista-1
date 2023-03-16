#include<stdio.h>

int main(){
    int number = 0;
    int number2 = 0;
    int soma;
    int subtração;
    int multiplicação;

    printf("Informe um numero: \n");
    scanf(" %i", &number);

    printf("Informe um numero: \n");
    scanf(" %i", &number2);

    soma = number+number2;
    subtração = number-number2;
    multiplicação = number*number2;

    printf("Numeros inseridos: %i e %i \n", number, number2);
    printf("Soma: %i \n", soma);
    printf("Subitração: %i \n", subtração);
    printf("Multiplicação: %i \n", multiplicação);

    return 0;
}