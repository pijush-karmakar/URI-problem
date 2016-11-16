#include <stdio.h>
int main ()
{
    int arr[1000];
    int a,i,n,x=0,y,z=0;
    scanf("%d",&a);
    while(a-->0){
        scanf("%d",&n);
        x=0,z=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        x += arr[i];
    }
    y = x/n;
    for(i=0;i<n;i++){
    if(y<arr[i]){
        z++;
    }
  }
   printf("%0.3f%c\n",(z*100.0)/n,'%');
    }
    return 0;
}
