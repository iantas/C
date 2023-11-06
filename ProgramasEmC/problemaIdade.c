#include <stdio.h>

int main () {

    char nome1[50], nome2[50];
    int idade1, idade2;
    double mediaIdade;

    printf("Dados da primeira pessoa: ");
    printf("NOME: ");
    gets(nome1);
    printf("IDADE: ");
    scanf("%d", &idade1);

    printf("Dados da primeira pessoa: ");
    printf("NOME: ");
    fseek(stdin, 0, SEEK_END);
    gets(nome2);
    printf("IDADE: ");
    scanf("%d", &idade2);

    mediaIdade = (idade1 + idade2) / 2.0;

    printf("A idade media de %s e %s e de %.1lf anos", nome1, nome2, mediaIdade);

    return 0;
}