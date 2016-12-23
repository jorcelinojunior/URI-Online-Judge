#include <stdio.h>
int main ()
{
    int N,CEM,CINQ,VINT,DEZ,CINC,DOIS,UM;
    scanf("%d",&N);
    CEM=N/100;
    CINQ=(N%100)/50;
    VINT=(N%100)%50/20;
    DEZ=(((N%100)%50)%20)/10;
    CINC=((((N%100)%50)%20)%10)/5;
    DOIS=(((((N%100)%50)%20)%10)%5)/2;
    UM=N -((CEM*100)+(CINQ*50)+(VINT*20)+(DEZ*10)+(CINC*5)+(DOIS*2));
    printf("%d\n",N);
    printf("%d nota(s) de R$ 100,00\n",CEM);
    printf("%d nota(s) de R$ 50,00\n",CINQ);
    printf("%d nota(s) de R$ 20,00\n",VINT);
    printf("%d nota(s) de R$ 10,00\n",DEZ);
    printf("%d nota(s) de R$ 5,00\n",CINC);
    printf("%d nota(s) de R$ 2,00\n",DOIS);
    printf("%d nota(s) de R$ 1,00\n",UM);    
    //system("pause");
    return (0);
    }
