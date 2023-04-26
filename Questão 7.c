
#include <stdio.h>


int main() {
    int numeros_869[12], pares_869[12], impares_869[12];
    int i_869, j_869 = 0, k_869 = 0;
    
        printf("Digite 12 números aleatórios:");
    for (i_869 = 0; i_869 < 12; i_869++) {
        printf("\nDigite o %dº número: ", i_869+1);
        scanf("%d", &numeros_869[i_869]);
    }

    
    for (i_869 = 0; i_869 < 12; i_869++) {
        if (numeros_869[i_869] % 2 == 0) { 
            pares_869[j_869] = numeros_869[i_869];
            j_869++;
        } else { 
            impares_869[k_869] = numeros_869[i_869];
            k_869++;
        }
    }
    
    printf("\nNúmeros digitados pares: ");
    for (i_869 = 0; i_869 < j_869; i_869++) {
        printf("%d ", pares_869[i_869]);
    }
    printf("\nNúmeros digitados ímpares: ");
    for (i_869 = 0; i_869 < k_869; i_869++) {
        printf("%d ", impares_869[i_869]);
    }

    return 0;
}
