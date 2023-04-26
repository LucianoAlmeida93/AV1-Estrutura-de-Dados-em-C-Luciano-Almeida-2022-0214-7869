#include <stdio.h>

int main() {
    float notas_869[10];
    float soma_869 = 0, media_869, maior_869, menor_869;
    int i_869;

    for (i_869 = 0; i_869 < 10; i_869++) {
        printf("Digite a nota do aluno %d: ", i_869 + 1);
        scanf("%f", &notas_869[i_869]);

        soma_869 += notas_869[i_869];

        if (i_869 == 0) {
            maior_869 = notas_869[i_869];
            menor_869 = notas_869[i_869];
        } else {
            if (notas_869[i_869] > maior_869) {
                maior_869 = notas_869[i_869];
            }
            if (notas_869[i_869] < menor_869) {
                menor_869 = notas_869[i_869];
            }
        }
    }

    media_869 = soma_869 / 10;

    printf("A soma das notas é: %.2f\n", soma_869);
    printf("A média das notas é: %.2f\n", media_869);
    printf("A maior nota foi: %.2f\n", maior_869);
    printf("A menor nota foi: %.2f\n", menor_869);

    return 0;
}
