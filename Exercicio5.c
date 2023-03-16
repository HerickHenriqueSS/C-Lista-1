#include<stdio.h>

int main(){
    int metros;
    printf("Informe Quantos metros: \n");
    scanf("%i", &metros);

    printf("Metragem em centimetros: %i cm \n", metros*100);
    return 0;
}