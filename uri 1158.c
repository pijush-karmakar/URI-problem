#include <stdio.h>
int main ()
{
    int n,x,y,sum,c,i,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        scanf("%d %d",&x,&y);
           sum=0;
           c=0;
            for(i=x; i<x+(2*y); i++){
                if(i%2!=0){
                   sum=sum+i;
                   c++;
                }
            if(c==y)
                break;
            }
            printf("%d\n",sum);

    }
    return 0;

}
