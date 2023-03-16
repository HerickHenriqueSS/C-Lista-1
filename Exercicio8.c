#include<stdio.h>

int main(){
    int number = 0;
    int numberPrev ;
    int numberPrev2 ;
    int numberNext ;
    int numberNext2 ;

    printf("Informe um numero: \n");
    scanf(" %i", &number);

    numberPrev = number -1;
 
    numberPrev2 = number -2;

    numberNext = number +1;
 
    numberNext2 = number +2;
 
    printf("Numeros em sequencia: %i %i < %i > %i %i", numberPrev2, numberPrev, number, numberNext, numberNext2);
}

