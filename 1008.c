#include <stdio.h>
int main ()
{
    int num,hr;
    float amunt,salary;
    scanf("%d %d %f",&num,&hr,&amunt);
    salary = hr*amunt;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %0.2f\n",salary);
    return 0;
}
