#include<stdio.h>
#include<math.h>
int main()
{
    double d,f,g,gd;

    while((scanf("%lf%lf%lf",&d,&f,&g))!=EOF)
    {
        gd=0;
        gd= sqrt(12*12+d*d);
        if(12/f>=gd/g)
            printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}
