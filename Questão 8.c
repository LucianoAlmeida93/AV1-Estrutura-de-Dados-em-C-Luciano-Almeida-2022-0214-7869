#include <stdio.h>

void ordena(int* a_869, int* b_869, int* c_869) {
    int aux_869;

    if (*a_869 > *b_869) {
        aux_869 = *a_869;
        *a_869 = *b_869;
        *b_869 = aux_869;
    }

    if (*a_869 > *c_869) {
        aux_869 = *a_869;
        *a_869 = *c_869;
        *c_869 = aux_869;
    }

    if (*b_869 > *c_869) {
        aux_869 = *b_869;
        *b_869 = *c_869;
        *c_869 = aux_869;
    }
}

int main() {
    int a_869, b_869, c_869;
    int* pa_869 = &a_869;
    int* pb_869 = &b_869;
    int* pc_869 = &c_869;

    printf("Digite três números aleatórios: ");
    scanf("%d %d %d", pa_869, pb_869, pc_869);

    ordena(pa_869, pb_869, pc_869);

    printf("\nNúmeros em ordem crescente: %d, %d, %d\n", *pa_869, *pb_869, *pc_869);
    printf("Endereços de memória dos números: %p %p %p\n", pa_869, pb_869, pc_869);

    return 0;
}
