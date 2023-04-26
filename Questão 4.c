#include <stdio.h>

int dobrar(int num_869) {
    return num_869 * 2;
}

int somar(int num1_869, int num2_869) {
    return num1_869 + num2_869;
}

int triplicar(int num_869) {
    return num_869 * 3;
}

int main() {
    int num1_869, num2_869, soma_869, resultado_869;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1_869);

    printf("Digite o segundo número: ");
    scanf("%d", &num2_869);

    soma_869 = somar(num1_869, num2_869);
    resultado_869 = triplicar(somar(dobrar(num1_869), dobrar(num2_869)));
    
    printf("Soma dos números digitados: %d\n", soma_869);
    printf("Resultado (Números somados e triplicados: %d\n", resultado_869);

    return 0;
}
