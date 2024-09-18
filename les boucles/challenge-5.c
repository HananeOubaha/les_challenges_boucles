
#include <stdio.h>

int main() {
    int n,i,som=0;
    printf("entrer un nombre  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        som=som+i;
    }
printf("la somme de %d premier ellement = %d\n",n,som);
    return 0;
}
