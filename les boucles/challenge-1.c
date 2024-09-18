// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,i;
    printf("entrer un nombre ");
    scanf("%d",&n);
    for(i=10;i>=1;i--){
  int p=n*i;
  printf("%d * %d = %d\n",n,i,p);}
    return 0;
}
