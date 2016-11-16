#include <stdio.h>
int main ()
{
    int n,a=0,b=0,c=0;
    while(n!=4){
        scanf("%d",&n);
        if(n==1){
                a++;

        }

        else if(n==2){
                b++;

        }

        else if(n==3){
                c++;

        }

        else if(n==4)
          break;
    }
      printf("MUITO OBRIGADO\n");
      printf("Alcool: %d\n",a);
      printf("Gasolina: %d\n",b);
      printf("Diesel: %d\n",c);

}
