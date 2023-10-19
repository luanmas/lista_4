#include <stdio.h>

void stringConcat(char *dest, const char *src) {
    while (*dest != '\0') {
        dest++; // Mova o ponteiro para o final da string de destino
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Adicione o caractere nulo ao final da string concatenada
}

int main() {
    const char *str1 = "Hello, ";
    const char *str2 = "World!";
    char concatenated[50]; // Aloque espaço para a string concatenada

    stringConcat(concatenated, str1);
    stringConcat(concatenated, str2);

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    printf("Concatenated String: %s\n", concatenated);

    return 0;
}