/* 1. Escreva um programa que receba o valor de 3 vendas de 5 funcionários, armazene os valores em uma matriz, e utilizando estrutura de repetição, apresente na tela a somatória e a média das vendas de cada funcionário.
2. Continue o programa da atividade 1 para que armazene os nomes dos funcionários e apresente na tela uma lista numerada contendo o nome dos funcionários, os valores de suas vendas, e o valor médio dessas vendas.*/
#include <stdio.h>
int main(){
  int i, j;
  char nomes[5][30];
  float vendas[5][3], soma[5] = {0, 0, 0, 0, 0};
  float medias[5] = {0, 0, 0, 0, 0};

  printf("Bem vindo! Por favor digite o nome dos funcionarios: ");
  for(i = 0; i < 5; i++){   
      scanf(" %30[^\n]", nomes[i]);
  }  

  printf("\nDigite o valor das vendas de cada funcionario.");
    
  for(i = 0; i < 5; i++){
      for(j = 0; j < 3; j++){
          printf("\nFuncionario[%d] | Venda[%d]: ", i + 1, j + 1);
          scanf("%f", &vendas[i][j]);
      }
  }
    
  for(i = 0; i < 5; i++){
      for(j = 0; j < 3; j++){
          soma[i] = soma[i] + vendas[i][j];
      }
      medias[i] = soma[i] / 3;
  }
    
/* for(i = 0; i < 5; i++){
    for(i = 0; i < 5; i++){
        printf("\n\nA somatória das vendas do funcionário [%d] é: %.f e o valor médio é: %.2f", i + 1, soma[i], medias[i]);
    }
} */

  for(i = 0; i < 5; i++){
      printf("\n\n 1 - Nome do funcionario: %s\n 2 - Somatorio das vendas: %.f\n 3 - Valor medio das vendas: %.1f", nomes[i], soma[i], medias[i]);
  }    
    
  return 0;
}
