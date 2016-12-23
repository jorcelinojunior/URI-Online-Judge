#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main ()
{
    float A,B,C,TRI,CIRC,TRAP,QUAD,RETAN;
    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);
    TRI=A*C/2;
    CIRC=PI*pow(C,2);
    TRAP=((A+B)*C)/2;
    QUAD=pow(B,2);
    RETAN=A*B;
    printf("TRIANGULO: %.3f\n",TRI);
    printf("CIRCULO: %.3f\n",CIRC);
    printf("TRAPEZIO: %.3f\n",TRAP);
    printf("QUADRADO: %.3f\n",QUAD);
    printf("RETANGULO: %.3f\n",RETAN);
    //system("pause");
    return (0);
    }
