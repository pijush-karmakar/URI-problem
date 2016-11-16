#include <stdio.h>
int main ()
{
    int x,y,i,j;
    scanf("%d %d",&x,&y);
    if(x<y){
        for(i=x+1;i<y;i++){
            j = i%5;
            if(j==2 || j==3)
                printf("%d\n",i);
        }
    }
    else if(y<x){
        for(i=y+1;i<x;i++){
            j = i%5;
            if(j==2 || j==3)
                printf("%d\n",i);
        }
    }

    return 0;
}
