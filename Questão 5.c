#include <stdio.h>

int maior_idade(int idade1_869, int idade2_869, int idade3_869) {
    int maior_869 = idade1_869;
    if (idade2_869 > maior_869) {
        maior_869 = idade2_869;
    }
    if (idade3_869 > maior_869) {
        maior_869 = idade3_869;
    }
    return maior_869;
}

int menor_idade(int idade1_869, int idade2_869, int idade3_869) {
    int menor_869 = idade1_869;
    if (idade2_869 < menor_869) {
        menor_869 = idade2_869;
    }
    if (idade3_869 < menor_869) {
        menor_869 = idade3_869;
    }
    return menor_869;
}

int main() {
    int idade1_869, idade2_869, idade3_869;
    printf("Digite a idade de três pessoas: ");
    scanf("%d %d %d", &idade1_869, &idade2_869, &idade3_869);

    int maior_869 = maior_idade(idade1_869, idade2_869, idade3_869);
    int menor_869 = menor_idade(idade1_869, idade2_869, idade3_869);

    printf("A maior idade é: %d\n", maior_869);
    printf("A menor idade é: %d\n", menor_869);

    return 0;
}
