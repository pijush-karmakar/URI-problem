
#include <stdio.h>
#include <math.h>
int main()
    {
    int T,i;
    double r;
    scanf("%d",&T);
    for(i =0; i<T; i++) {
            scanf("%lf",&r);
            printf("Case %d: %.2f\n",i+1,((2*r)*(2*r)-((2*acos(0.0))*r*r))+1e-9);
            }
    return 0;
    }
