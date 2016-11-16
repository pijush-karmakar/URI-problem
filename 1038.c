#include <stdio.h>
int main ()
{
    int x,y;
    double z,price;
    scanf("%d %d",&x,&y);
    if(x==1)
        z=4.00;
    else if(x==2)
        z=4.50;
    else if(x==3)
        z=5.00;
    else if(x==4)
        z=2.00;
    else if(x==5)
        z=1.50;
    price = z*y;
    printf("TOTAL: R$ %0.2lf",price);
    return 0;
}
