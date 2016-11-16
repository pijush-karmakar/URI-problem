#include<stdio.h>
int main()
{
    char ch;
    int a=0;
    int st=96;
    int en=39;
    while(scanf("%c",&ch)!=EOF){
        if(ch==34 && a==0){
            printf("%c%c",st,st);
            a=1;
            continue;
        }
        else if(ch==34 && a==1){
            printf("%c%c",en,en);
            a=0;
        }
        else
            printf("%c",ch);
    }
    return 0;
}
