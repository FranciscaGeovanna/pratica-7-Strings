#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale (LC_ALL, "portuguese_Brazil");
    
    char palavra[250];
    char contrario[250];
    int i;

    printf ("Programa para mostrar palavra ao contrário \n\n");
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (i = 0; palavra[i] != '\0'; i++);

    for (int ii = 0; ii < i; ii++) {
        contrario[ii] = palavra[i - ii - 1];
    }
    
    contrario[i] = '\0';

    printf("Sua palavra invertida: %s\n", contrario);

    return 0;
}

