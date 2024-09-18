#include <stdio.h>

int main() {
    int n, reste;


    printf("Entrez un entier: ");
    scanf("%d", &n);

    printf("Nombre inverse: ");


    while (n != 0) {
        reste = n % 10;
        printf("%d", reste);
        n = n / 10;
    }

    printf("\n");
    return 0;
}
