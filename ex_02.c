#include <stdio.h>
#include <stdlib.h>

int main () {
    int a = 10;
    int b = 20;

    int *pa = &a;
    int *pb = &b;

    printf("Antes da troca A : %d\n" , *pa);
    printf("Antes da troca B : %d\n\n" , *pb);

    *pa = *pa + *pb;
    *pb = *pa - *pb;
    *pa = *pa - *pb;

    printf("Depois da troca A : %d\n" , *pa);
    printf("Depois da troca B : %d\n" , *pb);
}