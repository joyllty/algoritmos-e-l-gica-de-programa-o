/* Uma loja utiliza o código V para compras a vista e o código P para compras a prazo. Faça um programa que receba o código e o valor das transações até receber 
o código X e o valor 0. Calcule e mostre:
• O valor total das compras à vista;
• O valor total das compras a prazo;
• O valor total das compras efetuadas. */

#include <stdio.h>

  int main() {
      float valor = 1, valorV = 0, total = 0, valorP = 0;
      char codigo = 0;
      
      printf("Digite o código das compras: \n");
      scanf(" %c", &codigo);
      
      printf("Digite o valor das compras: \n");
      scanf("%f", &valor);
        
      while (codigo != 'x' && valor != 0) {
          if(codigo == 'v' || codigo == 'V')
              valorV = valorV + valor;
      
          else if(codigo == 'p' || codigo == 'P')
              valorP = valorP + valor;
      
          else
              printf("Código inválido!");
                
          printf("Digite o código das compras: \n");
              scanf(" %c", &codigo);
      
          printf("Digite o valor das compras: \n");
              scanf("%f", &valor);
        }
        
      total = valorV + valorP;
      printf("O valor total das compras a vista é: %.2f", valorV);
      printf("\nO valor total das compras a prazo é: %.2f", valorP);
      printf("\nO valor total das compras efetuadas é: %.2f", total);
    
     return 0;
}
