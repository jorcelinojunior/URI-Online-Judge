#include <stdio.h>
int main ()
{
    int NUMBER,horas;
    float valor_hr,salario;
    scanf("%d",&NUMBER);
    scanf("%d",&horas);
    scanf("%f",&valor_hr);
    salario=horas*valor_hr;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2f\n",salario);
    return (0);

}
