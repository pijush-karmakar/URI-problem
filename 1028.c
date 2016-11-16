#include <stdio.h>
int main ()
{
    int a,b,t,i,temp,temp1;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&a,&b);
    if(a<b){

       temp = a;
       a = b;
       b = temp;
       }
    while(a%b!=0){
       temp1 = a;
       a = b;
       b = temp1%a;
    }
    printf("%d\n",b);

    }
    return 0;
}
