#include <stdio.h>
int main ()
{
    int A,B,C,D,DIFERENCA,proab,procd;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    proab=A*B;
    procd=C*D;
    DIFERENCA = proab-procd;
    printf("DIFERENCA = %d\n",DIFERENCA);
    return 0;
}
