*/Uma fabrica de refrigerantes vende seu produto em três formatos: lata de 350 ml, garrafa de600 ml e garrafa de 2 litros. Tomando por base 
que um comerciante compre uma determinada quantidade de cada um dos formatos disponíveis, escreva um algoritmo para calcular quantos
litros de refrigerante ele comprou.*/
#include <stdio.h>
int main () {
       int lata3, garraf6, garraf2;
       float totalR;
 
       printf("Quantas latas de 350mL você comprou? ");
       scanf("%d", &lata3);
 
       printf("Quantas garrafas de 600mL você comprou? ");
       scanf("%d", &garraf6);
 
       printf("Quantas garrafas de 2 L você comprou? ");
       scanf("%d", &garraf2);
 
       totalR = (lata3 * 0.350) + (garraf6 * 0.600) + (garraf2 * 2);
 
       printf("O total de litros de refrigerante comprado foi: %.2f", totalR);
 
 
       return 0;
}
