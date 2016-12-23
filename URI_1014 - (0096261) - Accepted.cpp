#include <stdio.h>
int main ()
{
    int X;
    float Y,CONSUMO;
    scanf("%d",&X);
    scanf("%f",&Y);
    CONSUMO=X/Y;
    printf("%.3f km/l\n",CONSUMO);
    //system ("pause");
    return (0);   
    }
