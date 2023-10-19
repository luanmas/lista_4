#include <stdio.h>

void bubbleSort(int *array, int size) {
    int swapped;
    for (int i = 0; i < size - 1; i++) {
        swapped = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if (*(array + j) > *(array + j + 1)) {
                // Troca os elementos usando ponteiros
                int temp = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = temp;
                swapped = 1;
            }
        }
        // Se nenhuma troca ocorreu durante uma passagem, o array está ordenado
        if (swapped == 0) {
            break;
        }
    }
}

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Array desordenado: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    bubbleSort(array, size);

    printf("Array ordenado: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}