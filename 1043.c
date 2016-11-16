#include <stdio.h>
int main ()
{
    float a,b,c,p,Ar;
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b){
    p=a+b+c;
    printf("Perimetro = %0.1f\n",p);
    }
    else {
        Ar=(a+b)/2*c;
        printf("Area = %0.1f\n",Ar);

        }
        return 0;
}
