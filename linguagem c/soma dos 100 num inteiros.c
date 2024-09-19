/* Escreva um programa que mostre na tela a soma obtida dos 100 primeiros números inteiros (1+ 2 + 3 + 4 + 5 + ... + 100). 
Resultado: 5050 */
#include <stdio.h>
int main() {
  int soma = 0, i;
  printf("Programa que soma os 100 primeiros números inteiros: \n");

  for(i = 1; i <= 100; i++){
    soma = soma + i;
    printf("\n%d", i);
  }
  printf("\nO resultado é: %d", soma);
  
  return 0;
}
