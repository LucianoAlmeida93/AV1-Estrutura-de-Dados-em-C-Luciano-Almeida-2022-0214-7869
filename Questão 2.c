#include <stdio.h>

int main() {
    int numero_869, i_869;
    
    printf("Digite um número positivo: ");
    scanf("%d", &numero_869);
    
    if (numero_869 < 1) {
        printf("O número digitada é inválido. Por favor, digite um número inteiro positivo (que seja maior que 1).\n");
        return 0;
    }
    
    printf("Os números impares entre 1 e o número digitado (%d) são:\n", numero_869);
    
    i_869 = 1;
    while (i_869 <= numero_869) {
        if (i_869 % 2 != 0) {
            printf("%d ", i_869);
        }
        i_869++;
    }
    printf("\n");
    
    return 0;
}
