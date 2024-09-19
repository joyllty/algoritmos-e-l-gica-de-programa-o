/* 1. Faça um programa em C que leia a idade de um grupo de pessoas até ler o valor 0 (zero), calcule e apresente quantas são maiores de 18 
anos. */

#include <stdio.h>
int main() {
  float idade, contador = 0, soma;
  float media;
 
  printf("Digite cada idade do seu grupo, quando finalizar digite 0\n");
 
  do {
    printf("Digite a idade: ");
    scanf("%f", &idade);
 
 
    if(idade >= 18) {
      contador++;
      soma = soma + idade;
      media = soma / contador;
    }
 
 
  } while (idade > 0); 
  
  printf("O número de pessoas maiores de 18 anos é: %.f", contador);
  printf("\nA média das idades das pessoas maiores de 18 anos é: %.2f", media);
  
  return 0;
}
--------------------------------------------------------------------------------
/* 2. Escreva um programa que apresente o seguinte menu:
Se as opções 1, 2, 3 ou 4 forem escolhidas, mostrar na tela o nome da opção (Inserir, Excluir, Consultar, Listar). Se a opção 5 for escolhida, 
encerrar a execução do programa. */

#include <stdio.h>
int main() {
  int num;
 
  do {
    printf("\n\n # MENU PRINCIPAL # \n [1] Inserir \n [2] Excluir \n [3] Consultar \n [4] Listar \n [5] Sair \n");
    scanf("%d", &num);
 
 
    switch (num){
      case 1:
      printf("Inserir");
      break;
   
      case 2:
      printf("Excluir");
      break;
   
      case 3:
      printf("Consultar");
      break;
   
      case 4:
      printf("Listar");
      break;
   
      case 5:
      printf("Você saiu.");
      break;
   
      default:
      printf("Número inválido");
    }  
 
 
  } while (num != 5); 

   return 0;
}
--------------------------------------------------------------------------------
/* 3. Escreva um programa que apresente na tela o seguinte menu:
Caso o usuário escolha a opção 1, ele deve digitar um número par para voltar ao menu. O mesmo deve ser feito na opção 2, mas para um número 
ímpar. Caso o usuário escolha a opção 3, o programa deve apresentar a quantidade de números pares digitados na opção 1, a quantidade de 
números ímpares digitados na opção 2 e encerrar o programa. */

#include <stdio.h>
int main() {
  int opcao, num, par = 0, impar = 0;
 
  do {
    printf("\n\n # MENU PRINCIPAL # \n [1] Digitar um número par \n [2] Digite um número ímpar \n [3] Sair \n");
    scanf("%d", &opcao);
 
 
    switch (opcao){
      case 1:
      do {
        printf("Digite um número PAR para voltar ao menu: ");
        scanf("%d", &num);
      }
      while(num % 2 != 0);
      par++;
      break;
   
      case 2:
        do{
          printf("Digite um número ÍMPAR para voltar ao menu: ");
          scanf("%d", &num);
         }
        while(num % 2 == 0);
          impar++;
          break;
   
      case 3:
        printf("Você saiu.");
        break;
   
      default:
      printf("Opção inválida! Digite 1, 2 ou 3");
    }
 
  } while (opcao != 3); 
 
  printf("\n\nNúmeros pares: %d \nNúmeros ímpares: %d", par, impar); 
  printf("\n");

  return 0;
}
