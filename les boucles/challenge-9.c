#include <stdio.h>

int main() {
    int base, exposant;
    int resultat = 1;
    int i = 0;


    printf("Entrez une base positive: ");
    scanf("%d", &base);


    printf("Entrez un exposant non negatif: ");
    scanf("%d", &exposant);


    while (i < exposant) {
        resultat = resultat * base;
        i++;
    }


    printf("%d^%d = %d\n", base, exposant, resultat);

    return 0;
}
