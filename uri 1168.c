#include <stdio.h>
#include <string.h>

int main ()
{
    int n,ln,count,i;
    char str[1000];
    scanf("%d",&n);
    while(n--){
        scanf("%s",str);
        ln = strlen(str);
        count=0;
    for(i = 0; i<ln; i++){
        if(str[i]=='0')
            count+=6;
        else if(str[i]=='1')
            count+=2;
        else if(str[i]=='2')
            count+=5;

        else if(str[i]=='3')
            count+=5;
        else if(str[i]=='4')
            count+=4;

        else if(str[i]=='5')
            count+=5;
        else if(str[i]=='6')
            count+=6;
        else if(str[i]=='7')
            count+=3;
        else if(str[i]=='8')
            count+=7;
        else if(str[i]=='9')
            count+=6;


    }
    printf("%d leds\n",count);
    }


    return 0;
}
