#include <stdio.h>

void copiarString(char *destino, const char *caminho) {
    while (*caminho != '\0') {
        *destino = *caminho;
        destino++;
        caminho++;
    }
    *destino = '\0';
}

int main() {
    const char *caminho = "Hello, World!";
    char destinacao[50]; 

    stringCopy(destinacao, caminho);

    printf("String de origem: %s\n", caminho);
    printf("String de destino: %s\n", destinacao);

    return 0;
}