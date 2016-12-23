#include <stdio.h>
int main ()
{
    int peca1,peca2,unid_1,unid_2;
    float preco1,preco2,TOTAL;
    scanf("%d",&peca1);
    scanf("%d",&unid_1);
    scanf("%f",&preco1);
    scanf("%d",&peca2);
    scanf("%d",&unid_2);
    scanf("%f",&preco2);
    TOTAL=(unid_1*preco1)+(unid_2*preco2);
    printf("VALOR A PAGAR: R$ %.2f\n",TOTAL);
    //system ("pause");
    return (0);    
    }
