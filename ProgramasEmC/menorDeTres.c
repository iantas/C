#include <stdio.h>

int main () {

    int valor1, valor2, valor3, menor;

    printf("Digite o primeiro valor :");
    scanf("%d", &valor1);
    printf("Digite o primeiro valor :");
    scanf("%d", &valor2);
    printf("Digite o primeiro valor :");
    scanf("%d", &valor3);

    if ( valor1 < valor2 && valor1 < valor3){
        menor = valor1;
    }
    else if (valor2 < valor3) {
        menor = valor2;
    }
    else {
        menor = valor3;
    }

    printf("MENOR = %d", menor);


    return 0;
}