#include <stdio.h>

int main() {
    int n, i, j, estpremier;


    printf("Entrez un entier: ");
    scanf("%d", &n);


    for (i = 2; i <= n; i++) {
        estpremier = 1;


        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                estpremier = 0;
                break;
            }
        }

        if (estpremier) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
