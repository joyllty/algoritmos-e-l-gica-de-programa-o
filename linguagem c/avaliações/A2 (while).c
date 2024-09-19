/* Programa para ler o sexo e o salário de pessoas, identificar a quantidade de pessoas, calcular a média salarial delas, dizer a qual grupo de 
renda(renda baixa, média e alta) pertencem e, ao fim, apresentar os resultados. */

#include <stdio.h>

int main() {
  float salario = 1, media_p = 0, media_h = 0, media_m = 0;
  int contpessoas = 0, homens = 0, mulheres = 0;
  char sexo = 0, grupo_renda;
  
  printf("Digite o sexo e o salario, em seguida digite 0 para finalizar o salario e X para finalizar o sexo. \n");

  //Teste pra estrutura de repetição
  while(salario > 0){
      printf("\nDigite o salario: ");
      scanf("%f", &salario);
  //Teste pra estrutura condicional
    if (salario > 100000) 
        printf("Salario invalido! Digite um valor entre 0 e 100.000.\n");
  
    printf("\nDigite o sexo (M ou F *EM MAIUSCULO*): \n");
    scanf(" %c", &sexo);

  //Teste pra estrutura condicional
    if (sexo != 'M' && sexo != 'F') 
        break;
    
    contpessoas++;

    if(sexo == 'M'){
        homens++;
        media_h = media_h + salario;
    } else{
        mulheres++;
        media_m = media_m + salario;
    }
  } 

    media_p = (media_h + media_m) / contpessoas;
    media_h = media_h / homens;
    media_m = media_m / mulheres;
  
    if (media_p < 1500)
      printf("\nEssas pessoas pertencem ao grupo de renda BAIXA.");
    else if (media_p >= 1500 && media_p <= 5000)
      printf("\nEssas pessoas pertencem ao grupo de renda MEDIA.");
    else
      printf("\nEssas pessoas pertencem ao grupo de renda ALTA.");
  
    printf("\nO total de pessoas é: %d", contpessoas);  
    printf("\nA quantidade de homens é: %d", homens);
    printf("\nA quantidade de mulheres é: %.d", mulheres);
    printf("\nA média salarial é: %.2f", media_p);
    printf("\nA média salarial dos homens é: %.2f", media_h);
    printf("\nA média salarial das mulheres é: %.2f", media_m);
  
  return 0;
}
