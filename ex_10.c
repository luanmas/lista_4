#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N;
    printf("Informe o tamanho do vetor N: ");
    scanf("%d", &N);

    int *X = (int *)malloc(N * sizeof(int)); 
    int *F = (int *)calloc(N, sizeof(int));

    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        X[i] = rand() % N;
    }

    for (int i = 0; i < N; i++) {
        F[X[i]]++;
    }

    printf("Vetor X: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", X[i]);
    }
    printf("\n");

    printf("Vetor F (Frequência):\n");
    for (int i = 0; i < N; i++) {
        printf("Elemento %d: %d ocorrências\n", i, F[i]);
    }

    free(X);
    free(F);

    return 0;
}