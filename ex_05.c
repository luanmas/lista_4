#include <stdio.h>

int stringLength(const char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    const char *str = "Esta e uma string de exemplo";
    int length = stringLength(str);
    printf("O tamanho da string é: %d\n", length);
    return 0;
}