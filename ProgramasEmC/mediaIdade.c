#include <stdio.h>

int main () {


    int idade, cont, soma;
    double media;

    printf("Digite as idade: ");
    scanf("%d", &idade);

    soma = 0;
    cont = 0;

    while (idade >= 0) {
        soma = soma + 1;
        cont = cont + 1;
        scanf("%d", &idade);
    }

    if (cont == 0) {
        print("IMPOSSIVEL CALCULAR\n");
    }
    else {
        media = (double)soma / cont;
        printf("MEDIA DAS IDADE: %.2lf\n", media);
    }

    return 0;
}