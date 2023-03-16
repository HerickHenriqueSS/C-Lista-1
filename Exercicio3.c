#include<stdio.h>

int main(){
    int number = 0;

    printf("Informe um numero: \n");
    scanf(" %i", &number);
    
    printf("Número Digitado: %i \n", number);
    printf("Número Duplicado: %i \n", number*2);
    printf("Número Triplicado: %i \n", number*3);

    return 0;
}