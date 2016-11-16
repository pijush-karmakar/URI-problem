#include <stdio.h>
int main ()
{

    int n,i,c,e=1,j=0;
    scanf("%d",&n);
    int ar[3];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
  c = ar[j];
  for(j=0;j<n;j++){

    if(ar[j]<c){
        c = ar[j];
        e = j+1;
    }
  }

 printf("%d\n",e);
}
