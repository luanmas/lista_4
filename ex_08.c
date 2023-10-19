#include <stdio.h>

const char* findCharInString(const char *str, char target) {
    while (*str != '\0') {
        if (*str == target) {
            return str; // Retorna o ponteiro para a primeira ocorrência do caractere
        }
        str++;
    }
    return NULL; // Caractere não encontrado na string
}

int main() {
    const char *str = "Hello, World!";
    char target = 'o';

    const char *result = findCharInString(str, target);

    if (result != NULL) {
        printf("O caractere '%c' foi encontrado na posição %ld na string.\n", target, result - str);
    } else {
        printf("O caractere '%c' não foi encontrado na string.\n", target);
    }

    return 0;
}