#include <stdio.h>

int main() {
    int *pMenor = NULL;
    int menor = 0;
    int num;

    while(num != 0) {
        puts("Insira um número");
        scanf("%d" , &num);
        menor = num;

        *pMenor = menor < *pMenor ? menor : *pMenor;
        printf("Menor valor : %d\n" , *pMenor);
    }
}   