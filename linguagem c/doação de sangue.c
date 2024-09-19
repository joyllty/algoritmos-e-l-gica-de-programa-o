/* Um hospital local está fazendo uma campanha para receber doação de sangue.
• O propenso doador deve inicialmente se cadastrar informando o seu primeiro nome, sua idade,
seu peso, responder a um breve questionário e apresentar um documento oficial com foto.
• Faça um programa que permita ao hospital avaliar a aptidão de um voluntário quanto à doação
de sangue.
• Para estar apto a doar sangue, o voluntário deve ter idade entre 16 e 69 anos, pesar pelo
menos 50 kg, estar bem alimentado e não estar resfriado.
• O programa deve ler os dados e imprimir no final o nome do voluntário e se ele está apto ou
não. */
#include <stdio.h>
#include <string.h>
int main(){
  
  int idade;
  float peso;
  char nome[20], alimentado, resfriado;

  printf("CADASTRO DOAÇÃO DE SANGUE\n");
  
  printf("Insira seu nome: ");
  scanf("%s", nome);

  printf("Insira sua idade: ");
  scanf("%d", &idade);

  printf("Insira seu peso: ");
  scanf("%f", &peso);

  printf("Você está bem alimentado? 'S' para sim ou 'N' para não: ");
  scanf(" %c", &alimentado);

  printf("Você está resfriado? 'S' para sim e 'N' para não: ");
  scanf(" %c", &resfriado);

  if(idade > 15 && idade < 70 && peso >= 50 && (alimentado == 'S' || alimentado == 's') && (resfriado == 'N' || resfriado == 'n')){
    printf("Você está apto para doar sangue, %s", nome);
  }
    else
    printf("Você não está apto para doar sangue, %s", nome);
  
  return 0;
}
