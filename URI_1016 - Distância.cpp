#include <stdio.h>
 
int main (){
    int distancia, minutos;
    scanf("%d",&distancia);
    minutos = 60 / (30 / (float) distancia);
    printf ("%d minutos\n", minutos);
    return 0;
}
