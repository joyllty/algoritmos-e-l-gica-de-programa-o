// Faça um programa que leia o peso de um boxeador e informe a categoria a qual o boxeador pertence conforme a tabela a seguir:
#include <stdio.h>
int main() {
    float peso;
    
    printf("Informe o seu peso em kg: ");
    scanf("%f", &peso);
    
    if (peso < 50) {
        printf("Você é peso palha!");
    }
    else if(peso >= 50 && peso < 59.99){
        printf("Você é peso pluma!");
    }
    else if(peso >= 60 && peso < 75.99){
        printf("Você é peso leve!");
    }
    else if(peso >= 76 && peso < 87.99){
        printf("Você é peso pesado!");
    }                
    else {
        printf("Você é peso super pesado!");
    }
                  
    return 0;
}
