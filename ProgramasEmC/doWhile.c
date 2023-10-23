#include <stdio.h>

void limpar_entrada() { 
    char c; 
    while ((c = getchar()) != '\n' && c != EOF) {} 
}

int main () {

    double C, F;
    char resp;

    do {
        printf("Digite a temeperatura em graus celcius: ");
        scanf("%lf", &C);
        F = 9.0 * C / 5.0 + 32.0;
        printf("Equivalente a Fahrenheit: %.1lf\n", F);
        printf("Deseja repetir (s/n)? ");
        limpar_entrada(); // era par ter usado o comando FSEEK, mas este comando não esta funcionando direito em algumas IDE'S
        scanf("%c", &resp);
    } while (resp == 's');

    return 0;
}