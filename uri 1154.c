#include <stdio.h>
int main ()
{
    int x,sum=0;
    double count=0,value;
    while(1){
        scanf("%d",&x);
        if(x<0)
            break;
        else{

            sum = sum + x;
            count++;
        }

    }
    value = sum/count;
    printf("%0.2lf",value);
    return 0;

}
