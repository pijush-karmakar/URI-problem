#include <stdio.h>
#include <string.h>
int main ()
{
   int n,l,i,count,countl,k,m,j;
   char str[1000];
   scanf("%d",&n);
   while(n--){

   scanf("%d",&l);
   getchar();
   countl=0;

   for(i=0;i<l;i++){
      gets(str);
      k= strlen(str);
      for(m=0,count=0;m<k;m++){

        j=(int)(str[m]-64);
        count=count+j-1+m+i;
      }

    countl=countl+count;


   }

   printf("%d\n",countl);

   }

}
