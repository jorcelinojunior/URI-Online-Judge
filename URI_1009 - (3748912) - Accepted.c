#include <stdio.h>
 
int main() {
 
    char nome[10];
    double salarioFixo;
    double montanteVendas;
    scanf("%s",nome);
    scanf("%lf",&salarioFixo);
    scanf("%lf",&montanteVendas);
    printf("TOTAL = R$ %.2f\n",(salarioFixo + (montanteVendas/100)*15));
 
    return 0;
}