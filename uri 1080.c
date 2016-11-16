#include <stdio.h>
int main ()
{
    int ar[100],i,max=0,k=0;
    for(i=1;i<=100;i++){
        scanf("%d",&ar[i]);
      if(ar[i]>max){
        max=ar[i];
        k=i;
      }
    }
    printf("%d\n%d\n",max,k);

}
