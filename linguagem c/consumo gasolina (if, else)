/* Escreva um algoritmo em pseudocódigo que leia a distancia em Km e a quantidade de litrosde gasolina consumidos por um carro em um percurso, calcule o consumo 
em Km/l e apresenteuma mensagem de acordo com a tabela abaixo: */

#include <stdio.h>

int main() {
    float km, litros, consumo;
    
    printf("Digite a distância percorrida pelo seu carro em Km: ");
    scanf("%f", &km);
    
    printf("Agora, digite a quantidade de litros de gasolina consumidos: ");
    scanf("%f", &litros);
    
    consumo = km / litros;
    
    if (consumo < 8) {
        printf("O seu consumo foi de: %.2f Km/L. \nConsumo alto! Vende seu carro!", consumo);
    }
        else if (consumo >= 8 && consumo <= 14) {
            printf("O seu consumo foi de: %.2f Km/L. \nConsumo médio! Seu carro é econômico!", consumo);
        }
            else {
                printf("O seu consumo foi de: %.2f Km/L. \nConsumo baixo! Seu carro é SUPER econômico!");
            }
    
    return 0;
    
}
