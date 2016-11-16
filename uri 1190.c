#include <stdio.h>
int main()
{
    double a=0.0, M[12][12];
    char T[2];
    int c,x,y,z,p=11,r=7,count=0;
    scanf("%s", &T);
    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
            scanf("%lf", &M[x][y]);
    }
    for(z=1; z<=10;z++)
    {
        if(z<=5){
            for(c=p;c<=11;c++){
                a+=M[z][c];
            }
            p--;
        }
      else if(z>=6){
            for(c=r;c<=11;c++){
                a+=M[z][c];
            }
            r++;
        }

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

