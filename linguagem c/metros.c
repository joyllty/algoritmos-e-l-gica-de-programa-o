#include <stdio.h>
int main() {
    float metros, decim, centim, milim;
  
    printf("Digite o valor em metros: ");
    scanf("%f", &metros);
    
    decim = metros * 10;
    centim = metros *100;
    milim = metros * 1000;
  
    printf("\nO valor correspondente em decímetros é: %.1f", decim);
    printf("\nO valor correspondente em centímetros é: %.1f", centim);
    printf("\nO valor correspondente em milímetros é: %.1f", milim);
   
    return 0;
}
