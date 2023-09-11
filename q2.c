#include <stdio.h>

int calcFatorial (int numero) {
  int fatorial = 1;
  for (int i = 1; i <= numero; i++) {
      fatorial *= i;
  }
  return fatorial;
}

int main(void) {

  int fatorial, num;

  printf("*****************************\n");
  printf("*   C A L C U L A D O R A   *\n");
  printf("*            D E            *\n");
  printf("*      F A T O R I A L      *\n");
  printf("*****************************\n");

  do {
     printf("\nInforme um número positivo qualquer, ou 0 para terminar: ");
     scanf("%d", &num);

     if (num > 0) {
         fatorial = calcFatorial(num);
         printf("\nO fatorial do número %d é %d", num, fatorial);
     } else {
           printf("Programa finalizado.\n");
       }
  } while (num > 0);

  return 0;
}
