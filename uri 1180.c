#include <stdio.h>
int main ()
{
    int i,p,n;

    scanf("%d",&n);
    int ar[10];
    int min=ar[0];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
        if(ar[i]<min){
           min=ar[i];
           p=i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",p);
    return 0;
}
