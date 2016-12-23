#include <stdio.h>
int main ()
{
    int it,quant;
    float item1,item2,item3,item4,item5,total;
    item1=4.0;
    item2=4.5;
    item3=5.0;
    item4=2.0;
    item5=1.5;
    scanf ("%d",&it);
    scanf ("%d",&quant);
    if (it==1)
       {
             total=item1*quant;
             }
             else if (it==2)
       {
             total=item2*quant;
             }
             else if (it==3)
       {
             total=item3*quant;
             }
             else if (it==4)
       {
             total=item4*quant;
             }
             else if (it==5)
       {
             total=item5*quant;
             }
    printf ("Total: R$ %.2f\n",total);
    //system("pause");
    return (0);    
    }
