#include <stdio.h>
int main ()
{
    float A,B,C;
    float triangle,circle,pi=3.14159,square,trapezium,rectangle;
    while(scanf("%f %f %f",&A,&B,&C)==3){
    triangle=A*C/2;
    circle=(pi*C*C);
    trapezium=((A+B)*C/2);
    square=B*B;
    rectangle=A*B;
    printf("TRIANGULO: %0.3f\n", triangle);
    printf("CIRCULO: %0.3f\n",circle);
    printf("TRAPEZIO: %0.3f\n",trapezium);
    printf("QUADRADO: %0.3f\n",square);
    printf("RETANGULO: %0.3f\n",rectangle);
        }
    return 0;
}
