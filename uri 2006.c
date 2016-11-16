#include <stdio.h>
int main ()
{
    int n,a,i,count=0;
    scanf("%d",&n);
    for(i=0;i<5;i++){

        scanf("%d ",&a);
        if(a==n )
        count++;

    }
    printf("%d\n",count);
    return 0;

}
