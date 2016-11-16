/// ekane 'p' er man ta print er kaje lagtece .....
/// and 'q' er man ta space er jonnno ...

#include <stdio.h>
int main()
{
    double a=0.0, M[12][12];
    char T[2];
    int C,x,y,z,p=6,q=5,count=0;
    scanf("%s", &T);
    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
            scanf("%lf", &M[x][y]);
    }
    for(z=7; z<=11;z++)
    {
        for(C=q; C<=p;C++) a+=M[z][C];

            p++;
            q--;
            count++;
    }
    if(T[0]=='S')
        printf("%.1lf\n",a);
    else if(T[0]=='M')
    {
        a=a/count;
        printf("%.1lf\n",a);
    }
    return 0;
}


