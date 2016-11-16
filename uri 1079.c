#include <stdio.h>
int main ()
{
    int n,i;
    float x,y,z,avg,value;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%f %f %f",&x,&y,&z);
           avg = x*2 + y*3 + z*5;
          value = avg/(2+3+5);
          printf("%0.1f\n",value);

    }

    return 0;
}
