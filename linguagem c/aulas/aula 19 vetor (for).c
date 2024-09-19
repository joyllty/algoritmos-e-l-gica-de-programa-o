#include <stdio.h>
int main() {
  int indice, idades[5] = {55,43}, menor, maior, soma;
  float media;
 
 // alimenta a estrutura de dados de idades
  for(indice = 0; indice < 5; indice++){
    printf("Informe a idade[%d] = ", indice);
    scanf("%d", &idades[indice]);
  }

 // exibe as idades conforme digitadas na mesma ordem
  printf("Ordem das idades:");
  for(indice = 0; indice < 5; indice++){
    printf("\nIdade [%d] = %d", indice, idades[indice]);
  }

 // exibe as idades conforme digitadas na ordem inversa
  printf("\n\nOrdem Inversa:");
  for(indice = 4; indice >= 0; indice--){
    printf("\nIdade [%d] = %d", indice, idades[indice]);
  } 

 // exibe as idades em grupos de pares e impares
  printf("\n\nGrupo de idades pares: ");
  for(indice = 0; indice < 5; indice++){
    if(idades[indice] % 2 == 0)
      printf("\nIdade [%d] = %d", indice, idades[indice]);
  }
 
  printf("\n\nGrupo de idades impares: ");
  for(indice = 0; indice < 5; indice++){
    if(idades[indice] % 2 != 0)
      printf("\nIdade [%d] = %d", indice, idades[indice]);
  }

 // calculando o menor e o maior valor 
  menor = idades[0];
  maior = idades[0];
  for(indice = 0; indice < 5; indice++){
    if(idades[indice] < menor){
      menor = idades[indice];
    }
    else if (idades[indice] > maior){
      maior = idades[indice];
    }
  }
  printf("\n\nA menor idade e: %d", menor);
  printf("\n\nA maior idade e: %d", maior);
 
 // calculando a soma
  soma = 0;
  soma = idades[0] + idades[1] + idades[2] + idades[3] + idades[4];
  printf("\n\nA soma das idades e: %d", soma);

 // calculando a media
  media = soma / 5;
  printf("\n\nA media das idades e: %.2f", media);
 
  return 0;
}
