/* 1. Escreva um algoritmo em pseudocódigo que que leia a idade de um número indeterminado depessoas, sendo que a idade 0 (zero) indica o fim 
da leitura e não deve ser considerada. A seguir calcule e apresente:
• o número de pessoas;
• a idade média do grupo;
• a menor e a maior idade.
Em seguida, transcreva para a linguagem C. */

#include <stdio.h>
int main() {
  int idade = 1, soma = 0, contador = 0, menor, maior;
  float media;
  menor = 1000;
  maior = 0;
 
  printf("Digite a idade do seu grupo e digite 0 para finalizar. \n");
 
  while(idade != 0){
    printf("\n\nDigite a sua idade: ");
    scanf("%d", &idade);
 
  if (idade == 0){
  break;
  }
 
  if(idade > 0){
  contador ++;
  soma = soma + idade;
 
    if(maior < idade){
    maior = idade;
    }
 
    if(menor > idade){
    menor = idade;
    }
  } 
    else {
      printf("eRR0");
    }
 
 } 
   media = (float) soma / contador;
 
   printf("O número de pessoas é: %.d", contador);
   printf("\nA idade média do grupo é: %.1f", media);
   printf("\nA menor idade é: %.d", menor);
   printf("\nA maior idade é: %.d", maior);
  
  return 0;
}
---------------------------------------------------------------------------
/* 2. Escreva um programa que leia o salário e o número de filhos de 10 pessoas, calcule e apresente:
• O maior e menor salário;
• A média do salário dessas pessoas;
• A média do número de filhos;
• A percentagem de pessoas com salário até R$ 800,00. */

#include <stdio.h>
int main() {
  int i, filhos, totalp800, somaF;
  float salario, somaS, mediaS, mediaF, percent, maior, menor;
  filhos = 0;
  totalp800 = 0;
  somaF = 0;
  somaS = 0;
  maior = 0;
  menor = 1000;

  for(i = 1; i <= 10; i++){
    printf("\nDigite o salário: ");
    scanf("%f", &salario);

    somaS = somaS + salario;

    printf("\nInforme o número de filhos: ");
    scanf("%d", &filhos);

    somaF = somaF + filhos;

      if(maior < salario){
        maior = salario;
      }
 
      if(menor > salario){
        menor = salario;
      }
 
      if(salario <= 800){
        totalp800++;
      }
   } 
 
  mediaS = (float)somaS / i;
  mediaF = (float)somaF / i;
 
  percent = ((float)totalp800 / i)* 10;

  printf("\nO maior salario e: %.1f",maior);
  printf("\nO menor salario e: %.1f",menor);
  printf("\nA media do salario e: %.1f",mediaS);
  printf("\nA media do numero de filhos e: %.1f",mediaF);
  printf("\nA percentagem de pessoas com salário até R$ 800,00 é: %.1f%%",percent);

  return 0;
}
