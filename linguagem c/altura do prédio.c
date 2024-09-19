/*Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa. Assumindo que seja possível medir sua 
sombra e a sombra do prédio no chão, e que você lembre da sua altura, escreva um algoritmo para ler os dados necessários e calcular a altura 
do prédio.*/

#include <stdio.h>
int main() {
       float h_predio, h_minha, s_predio, s_minha;
 
       printf("Digite sua altura: ");
       scanf("%f", &h_minha);
 
       printf("\nDigite quanto mede sua sombra: ");
       scanf("%f", &s_minha);
 
       printf("\nDigite quanto mede a sombra do prédio: ");
       scanf("%f", &s_predio);
 
       h_predio = (h_minha * s_predio) / s_minha;
 
       printf("\nA altura do prédio é: %.2f", h_predio);
 
       return 0;
}
