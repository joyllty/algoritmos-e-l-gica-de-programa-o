//Escreva um algoritmo que receba um número inteiro e verifique se este número é par ou ímpar.

#include <stdio.h>

int main() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    if(num % 2 == 0) {
        printf("Esse número é par!");
    }
    else {
        printf("Esse número é ímpar!");
    }

    return 0;
}
