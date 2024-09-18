
#include <stdio.h>

int main() {
    int n;
    printf("entrer le nombres de ellements\n");
    scanf("%d",&n);
    int t[n],i,j,temp;
    for(i=0;i<n;i++){
    printf("t[%d]  =  \t",i);
    scanf("%d",&t[i]);}
    for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
    if(t[j]>t[j+1]){
        temp=t[j];
        t[j]=t[j+1];
        t[j+1]=temp;}
    for(i=0;i<n;i++)
    printf("%d\t",t[i]);

    return 0;
}
