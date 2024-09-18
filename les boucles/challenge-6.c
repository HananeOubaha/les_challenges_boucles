
#include <stdio.h>

int main() {
    int n,i;
    printf("entrer un nombre ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    if(n%i==0)
printf("%d\t",i);

    return 0;
}
