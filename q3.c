#include <stdio.h>

int main(){
    int vetor[3], opcao;
    
    printf("Digite os 3 numeros inteiros, um de cada vez:\n");
    scanf("%d", &vetor[0]);
    scanf("%d", &vetor[1]);
    scanf("%d", &vetor[2]);
    
    printf("Qual opcao voce deseja?\n1- Mostre os numeros em ordem crescente.\n2- Mostre os numeros em decrescente.\n3- Mostre o menor numero entre os demais.\n");
    scanf("%d", &opcao);
    
    if(opcao == 1){
        for (int i = 0; i < 3; i++){
            for (int j = i; j < 3; j++){
                if (vetor[i] > vetor[j]){
                    int temp = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = temp;
                }
            }
        }
        for (int i = 0; i < 3; i++){
            printf("%d ", vetor[i]);
        }
    }
    
    if(opcao == 2){
        for (int i = 0; i < 3; i++){
            for (int j = i; j < 3; j++){
                if (vetor[i] < vetor[j]){
                    int temp = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = temp;
                }
            }
        }
        for (int i = 0; i < 3; i++){
            printf("%d ", vetor[i]);
        }
    }
    
    if(opcao == 3){
        int menor = vetor[0];
        for(int i = 0; i < 3; i++){
            if(vetor[i] < menor){
                menor = vetor[i];
            }
        }
        printf("\nO menor numero é: %d", menor);
    }

    return 0;
}
