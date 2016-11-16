 /* #include <stdio.h>
int main ()
{
    int i,x,count=0;
    float n,sum=0;
   while(x!=2){
    for(i=0;i<100;i++){
        scanf("%f",&n);
    if(n>=0 && n<=10){
        count++;
         sum = sum+n;
      if(count==2)
            break;

    }

    else
        printf("nota invalida\n");


    }

    printf("media = %0.2f\n", sum/2);
    while(x!=1 && x!=2){
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&x);
    }

   }
    return 0;

     } */

     ///  uri    ::  1118 no solution

#include <stdio.h>
int main()
{
int r, c;
float n, s;
do{
c=0;
s=0.0;
while(c<2)
{
scanf("%f", &n);
if(n>=0.0 && n<=10.0)
{
c++;
s = s + n;
}
else
{
printf("nota invalida\n");
}
}
printf("media = %.2f\n", s/2.0);
do{

printf("novo calculo (1-sim 2-nao)\n");

scanf("%d", &r);

}while(r!=1 && r!=2);

}while(r!=2);

return 0;
}
