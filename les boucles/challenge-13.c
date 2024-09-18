
#include <stdio.h>

int main() {
    int n,i,som=0,f;
    printf("entrer un nombre\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        f=n*i;
    printf("%d  *  %d  =\t %d\n",n,i,f);
    som=som+f;}
    printf("la som = %d",som);

    return 0;
}
