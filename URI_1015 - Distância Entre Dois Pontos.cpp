#include <stdio.h>
#include <math.h>
int main ()
{
    int X1,Y1,X2,Y2;
    float DIST;
    scanf("%d",&X1);
    scanf("%d",&Y1);
    scanf("%d",&X2);
    scanf("%d",&Y2);
    DIST=sqrt(pow((X2-X1),2)+pow((Y2-Y1),2));
    printf("%.4f\n",DIST);
    //system("pause");
    return (0);   
    }
