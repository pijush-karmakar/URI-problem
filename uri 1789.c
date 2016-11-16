#include <stdio.h>
int main ()
{
    int x,max,i,y;
    while(scanf("%d",&x)!=EOF){
            max=0;
        for(y=1;y<=x;y++){
            scanf("%d",&i);
            if(i>max)
                max=i;
        }
        if(max<10)
            printf("1\n");
        else if(max>=10 && max<20)
            printf("2\n");
        else
            printf("3\n");
    }

    return 0;
}
