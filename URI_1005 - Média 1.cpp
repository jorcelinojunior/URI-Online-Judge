#include<stdio.h>
int main ()
{
    float A,B,MEDIA;
    scanf("%f",&A);
    scanf("%f",&B);
    if (A<=10 && B<=10)
    {
    MEDIA=((A*3.5)+(B*7.5))/11;
    printf("MEDIA = %.5f\n",MEDIA);
    }
    return (0);
    }
