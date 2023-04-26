#include <stdio.h>

int main() {
    float valorCompra_869, desconto_869, valorTotal_869;

    printf("Digite o valor da sua compra: ");
    scanf("%f", &valorCompra_869);

    if (valorCompra_869 <= 5000) {
        desconto_869 = valorCompra_869 * 0.12;
    } else if (valorCompra_869 <= 8000) {
        desconto_869 = valorCompra_869 * 0.07;
    } else if (valorCompra_869 <= 10000) {
        desconto_869 = valorCompra_869 * 0.04;
    } else {
        desconto_869 = valorCompra_869 * 0.03;
    }

    valorTotal_869 = valorCompra_869 - desconto_869;

    printf("Desconto aplicado: R$ %.2f\n", desconto_869);
    printf("Valor total a pagar: R$ %.2f\n", valorTotal_869);

    return 0;
}
