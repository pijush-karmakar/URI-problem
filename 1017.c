#include <stdio.h>
int main ()
{
    double h,a,s;
    double l;
    scanf("%lf %lf",&h,&a);
    s = h*a;
    l = s/12;
    printf("%0.3lf\n",l);

    return 0;
}
