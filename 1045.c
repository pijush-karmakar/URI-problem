#include <stdio.h>
int main ()
{
    double a,b,c,temp;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }
    if(b<c){
        temp=b;
        b=c;
        c=temp;
    }
    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }
    if(a>=b+c){
        printf("NÃO FORMA TRIÂNGULO\n");
    }
    else if(a*a==b*b+c*c){
        printf("TRIÂNGULO RETÂNGULO\n");
    }
    else if(a*a>b*b+c*c){
        printf("TRIÂNGULO OBTUSÂNGULO\n");
    }
    else if(a*a<b*b+c*c){
        printf(" TRIÂNGULO ACUTÂNGULO\n");
    }
    if(a==b && b==c){
        printf("TRIÂNGULO EQUILÁTERO\n");
    }
    else if(a==b || b==c){
        printf("TRIÂNGULO ISÓSCELES\n");
    }
      return 0;
}
