#include <stdio.h>

int main() {
        
    int hora;

    printf("Digite um horario do dia! ");
    scanf("%d", &hora);

    if (hora < 12) {
        printf("Bom dia!\n");
    }
    else if (hora <= 18){
        printf("Boa tarde!\n");
    }
    else{
        printf("Boa noite!\n");
    }

    return 0; 
} 