#include <stdio.h>
#include <math.h>
int main ()
{
    int a,b,c;
    double y;
    while((scanf("%d",&a)) && a){
        scanf("%d %d",&b,&c);
        y = (a*b*100)/c;
        printf("%0.0lf\n",floor(sqrt(y)));
    }
}
