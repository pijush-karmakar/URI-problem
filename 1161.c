#include <stdio.h>
int main ()
{
    long long int m,n,k=1,s=1;
    int i,j;
    while( scanf("%lld %lld",&m,&n)!=EOF){

        for(i=m;i>0;i--)
            k = k*i;
        for(j=n;j>0;j--)
            s = s*j;
        printf("%lld\n",k+s);
        k=1;
        s=1;
    }
    return 0;
}
