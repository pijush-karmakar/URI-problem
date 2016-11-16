#include <stdio.h>
int main ()
{
    int i,j,k, time;
    scanf("%d %d %d",&i,&j,&k);
    time = i+j+k;
    if(time<0)
        time = time + 24;
    printf("%d\n",time%24);
    return 0;
}
