#include <stdio.h>
int main ()
{
    double x,y;
    int n;

    scanf("%d",&n);
    while(n--){
        scanf("%lf %lf",&x,&y);
  if(x==0 && y!=0)
    printf("%0.1lf\n",x/y);
  else if(x!=0 && y!=0)
    printf("%0.1lf\n",x/y);
  else if(x!=0 && y==0)
    printf("divisao impossivel\n");

    }

    return 0;
}
