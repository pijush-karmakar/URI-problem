#include <stdio.h>
#include <string.h>
int main ()
{
    char nam[20];
    double m,t,a,b;
    scanf("%s",nam);
    scanf("%lf %lf",&m,&a);
    b=(a*0.15);
    t=m+b;
    printf("TOTAL = R$ %0.2lf\n",t);
    return 0;
}
