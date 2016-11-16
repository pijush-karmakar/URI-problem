#include <stdio.h>
int main ()
{
    int T,n,x,j;
    scanf("%d",&T);
    for(j=1;j<=T;j++){
        scanf("%d%d",&n,&x);
        printf("case %d: %d\n",j,(n+x));
     }
    return 0;
}
