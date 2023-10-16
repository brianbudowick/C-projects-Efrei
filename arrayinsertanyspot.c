#include <stdio.h>

void insert(int tab[], int size, int n) {
    int i, j;

    for (i = 0; i < size; i++) {
        if (tab[i] >= n) {
            break;
        }
    }

       for (j = size; j > i; j--) {
        tab[j] = tab[j - 1];
    }

    tab[i] = n;
}

int main() {
    int tab[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int n = 77;

    printf("First array:\n ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }

    insert(tab, size, n);
    size++;

    printf("New array %d: ", n);
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}
