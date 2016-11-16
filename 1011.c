#include <stdio.h>
int main ()
{
    int R;
    double value,pi=3.14159;
    scanf("%d",&R);
    value=(4/3.0*pi*R*R*R);
    printf("VOLUME = %0.3lf\n",value);
    return 0;
}
