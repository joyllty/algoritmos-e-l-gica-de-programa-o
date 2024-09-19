/*Escreva um algoritmo que solicite do usuário o valor de um saque em caixa eletrônico, sendo que estarão disponíveis cédulas de 5, 10, 20,
50 e 100. O algoritmo deve apresentar a menor quantidade de cédulas possível de acordo com o saque. 
Exemplos:• Saque de 400,00: 4 cédulas de 100.
• Saque de 350,00: 3 cédulas de 100 e 1 cédula de 50.
• Saque de 385,00: 3 cédulas de 100, 1 cédula de 50, 1 cédula de 20, 1 cédula de 10 e 1 cédula de 5*/

#include <stdio.h>
int main() {
       int saque, notas100, notas50, notas20, notas10, notas5, resto;
 
       printf("Digite o valor do saque: ");
       scanf("%d", &saque);
 
       resto = saque % 100;
       notas100 = saque / 100;
 
       notas50 = resto / 50;
       resto = resto % 50;
 
       notas20 = resto / 20;
       resto = resto % 20;
 
       notas10 = resto / 10;
       resto = resto % 10;
 
       notas5 = resto / 5;
       resto = resto % 5;
 
       printf("O valor total do saque é: %d", saque);
       printf("\nA quantidade de notas de 100 é: %d", notas100);
       printf("\nA quantidade de notas de 50 é: %d", notas50);
       printf("\nA quantidade de notas de 20 é: %d", notas20);
       printf("\nA quantidade de notas de 10 é: %d", notas10);
       printf("\nA quantidade de notas de 5 é: %d", notas5);

       return 0;
}
