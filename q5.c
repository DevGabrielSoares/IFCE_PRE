#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char nome[30];
  int idade[10];
  double altura[10];
  double peso[10];
  int soma_idade = 0;
  int contagem = 0;
  int contador = 0;

  for(int i = 0; i < 10; i++) {
    printf("\nOlá, digite o nome da pessoa %d: ", i + 1);
    scanf(" %[^\n]s", nome);
    setbuf(stdin, NULL);

    printf("Por favor, digite a idade da pessoa %d: ", i + 1);
    scanf(" %d", &idade[i]);
    soma_idade += idade[i];

    printf("Agora, digite a altura (em cm) da pessoa %d: ", i + 1);
    scanf(" %lf", &altura[i]);

    printf("Por fim, digite o peso (em Kg) da pessoa %d: ", i + 1);
    scanf(" %lf", &peso[i]);

    if (altura[i] < 0 || idade[i] < 0 || peso[i] < 0) {
      printf("Informe valores válidos para altura, idade e peso.\n");
      --i;
      continue;
    }

    if (altura[i] < 150 && peso[i] > 80) {
      contagem++;
    }

    if (altura[i] > 190 && idade[i] >= 10 && idade[i] <= 30) {
      contador++;
    }
  }

  double media_idade = (double)soma_idade / 10;
  double porcentagem = ((double)contador / 10) * 100;

  printf("\nA média de idade entre as 10 pessoas é de %.2lf anos.", media_idade);
  printf("\nO número de pessoas com altura inferior a 1,50m e peso superior a 80Kg é de %d.", contagem);
  printf("\nA porcentagem de pessoas com mais de 1,90m e que tem entre 10 e 30 anos é de %.2lf%%.", porcentagem);

  return 0;
}
