#include <stdio.h>
int main(){

    int n,a,b,i,j;
    char um[50];
    char dois[50];

    scanf("%d",&n);
    for( i = 0; i < n; i++){
            scanf("%s %s",um, dois);
            a = 0;
            b = 0;
            for(j = 0; j < 50; j++){
                    if(um[j] == '\0') a = 1;
                    if(dois[j] == '\0') b = 1;
                    if(a == 1 && b == 1) break;
                    if(a == 0) printf("%c",um[j]);
                    if(b == 0) printf("%c",dois[j]);
            }
            printf("\n");
    }

    return 0;
}
