#include <stdio.h>

int main (void){
   int x, y;
      while(scanf("%d %d", &x, &y) != EOF){
         if(x>=y){
            printf("%d\n", x-y);
         }
         if(x<y){
            printf("%d\n", y-x);
         }

      }
   return 0;
}
