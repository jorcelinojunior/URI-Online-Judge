#include <stdio.h>
int main ()
{
    int ENTRAD,ANO,MES,DIA;
    scanf("%d",&ENTRAD);
    ANO=ENTRAD/365;
    MES=(ENTRAD%365)/30;
    DIA=ENTRAD-((ANO*365)+(MES*30));
    printf("%d ano(s)\n",ANO);
    printf("%d mes(es)\n",MES);
    printf("%d dia(s)\n",DIA);
    //system("pause");
    return (0);
    }
