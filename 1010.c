#include <stdio.h>
int main ()
{
    int c,n,i;
    float p,t,s=0;
    for(i=1;i<=2;i++){
        scanf("%d %d %f",&c,&n,&p);
        t=n*p;
        s=s+t;
    }
    printf("VALOR A PAGAR: R$ %0.2f",s);
    return 0;
}
