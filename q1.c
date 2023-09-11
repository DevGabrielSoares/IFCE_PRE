#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

int numero_usuario, resto_divisao_por_3;
float quadrado, cubo, raiz_quadrada, raiz_cubica;


printf("Digite o numero: ");
scanf("%d", &numero_usuario);

quadrado = numero_usuario * numero_usuario;
cubo = numero_usuario * numero_usuario * numero_usuario;
raiz_quadrada = sqrt(numero_usuario);
raiz_cubica = pow(numero_usuario, 1.0/3.0);
resto_divisao_por_3 = numero_usuario % 3;

printf("O quadrado e: %0.2f \n", quadrado);
printf("O cubo e: %0.2f \n", cubo);
printf("A raiz quadrada e: %0.2f \n", raiz_quadrada);
printf("A raiz cubica e: %0.2f \n", raiz_cubica);
printf("O resto da divisao por 3 e: %d \n", resto_divisao_por_3);

}
