#include <stdio.h>
#include <stdlib.h>

int main () {
    int a = 10;
    int b = 20;
    int *pa , *pb;

    *pa = &a;
    *pb = &b;

    puts("Insira um número :");
    scanf("%d" , &a);

    puts("Insira outro número :");
    scanf("%d" , &b);

    printf("Antes da troca : %d" , *pa);
    printf("Antes da troca : %d" , *pb);

}