#include <stdio.h>
int main () {
       float valor_produto, valor_icms, valor_total, taxa;
 
       printf("Entre com o valor do produto: ");
       scanf("%f", &valor_produto);
 
       taxa = 0.18;
       valor_icms = valor_produto * taxa;
       valor_total = valor_produto + valor_icms;
 
       printf("O valor do produto é: %.2f", valor_produto);
       printf("\nO valor do ICMS é: %.2f", valor_icms);
       printf("\nO valor total é: %.2f", valor_total); 
 
       return 0;
}
