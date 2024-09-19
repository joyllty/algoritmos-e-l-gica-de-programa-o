/* Escreva um programa que mostre todos os números pares existentes entre 1 e um número lido do teclado, bem como a quantidade 
de números apresentados */
#include <stdio.h>
int main() {
  int num, contador = 0, i;
  printf("Digite um número e o programa te dirá quantos números pares existem entre 1 e o seu número!: \n");
  scanf("%d", &num);

  
  for(i = 1; i <= num; i ++){
    if(i % 2 == 0){
      contador++;
      printf("\n%d", i);
    }
  }
  
  printf("\nA quantidades de números pares existentes é: %d", contador);
  
  return 0;
}
