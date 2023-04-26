#include <stdio.h>

void calcularMaiorMenor(float notas_869[], int tamanho_869, float *maior_869, float *menor_869) {
    int i_869;

    *maior_869 = notas_869[0];
    *menor_869 = notas_869[0];

    for (i_869 = 1; i_869 < tamanho_869; i_869++) {
        if (notas_869[i_869] > *maior_869) {
            *maior_869 = notas_869[i_869];
        }
        if (notas_869[i_869] < *menor_869) {
            *menor_869 = notas_869[i_869];
        }
    }
}

int main() {
    float notas_869[4];
    float maior_869, menor_869;
    int i_869;

    for (i_869 = 0; i_869 < 4; i_869++) {
        printf("Digite a nota do aluno %d: ", i_869 + 1);
        scanf("%f", &notas_869[i_869]);
    }

    calcularMaiorMenor(notas_869, 4, &maior_869, &menor_869);

    printf("A maior nota é: %.2f\n", maior_869);
    printf("A menor nota é: %.2f\n", menor_869);

    return 0;
}
