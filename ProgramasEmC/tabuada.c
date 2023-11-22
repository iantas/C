#include <stdio.h>

int main (){

    int numero, i, produto;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &numero);

    for (i = 1; i <=10; i++) {
        produto = numero * i;
        printf("%d x %d = %d\n", numero, i, produto);
    }
    
    return 0;
}