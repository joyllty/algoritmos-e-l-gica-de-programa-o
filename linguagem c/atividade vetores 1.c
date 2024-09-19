/* Escreva um programa que alimente um vetor com 5 números e calcule a média destes valores.
  Na sequência, apresente na tela os valores que são maiores ou iguais à média */
#include <stdio.h>
#include <string.h>
int main(){
  
  // declaração de variáveis
  int num[5], i = 0, soma = 0;
  float media = 0;

  // alimentando a estrutura de dados  
  for(i = 0; i < 5; i++){
      printf("Digite o %dº número: ", i+1);
      scanf("%d", &num[i]);
    }

  // soma dos valores
  for(i = 0; i < 5; i++){
      soma = soma + num[i];
    }
  media = soma / 5;
  
  // imprimindo os valores
  printf("\nA média entre os números é: %.1f", media);
  
  // imprimindo valores maiores ou iguais a média
  printf("\nOs valores maiores ou iguais a média são:");
  for(i = 0; i < 5; i++){
      if(num[i] >= media){
      printf("\n%d", num[i]);
      }
    }    
  
  return 0;
}
