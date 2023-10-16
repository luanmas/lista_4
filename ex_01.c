#include <stdio.h>
#include <stdlib.h>

int main () {
    int *pa, *pb, *pr;
    int a, b;

    puts("Digite um número :");
    scanf("%d", &a);

    puts("Digite outro número :");
    scanf("%d", &b);

    pa = &a;
    pb = &b;

    pr = *pa + *pb;

    printf("Resultado : %d\n" , pr);
    printf("Endereço : %p , Valor : %d\n" , pa , *pa);
    printf("Endereço : %p , Valor : %d\n" , pb , *pb);
}