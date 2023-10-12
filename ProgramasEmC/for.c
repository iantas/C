#include <stdio.h>

int main () {

    int N, i, x, soma;

    soma = 0;
    printf("Quantos numeros serao digitados: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &x);
        soma = soma + x;
    }

    printf("SOMA = %d\n", soma);
    return 0;
}