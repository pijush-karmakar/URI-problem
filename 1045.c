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
        printf("N�O FORMA TRI�NGULO\n");
    }
    else if(a*a==b*b+c*c){
        printf("TRI�NGULO RET�NGULO\n");
    }
    else if(a*a>b*b+c*c){
        printf("TRI�NGULO OBTUS�NGULO\n");
    }
    else if(a*a<b*b+c*c){
        printf(" TRI�NGULO ACUT�NGULO\n");
    }
    if(a==b && b==c){
        printf("TRI�NGULO EQUIL�TERO\n");
    }
    else if(a==b || b==c){
        printf("TRI�NGULO IS�SCELES\n");
    }
      return 0;
}
