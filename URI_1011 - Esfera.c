#include <stdio.h>
 
int main() {
 
    int raio;
    scanf("%i",&raio);
    double resultado = (4/3.0) * 3.14159 * raio * raio * raio;
    printf("VOLUME = %.3f\n",resultado);
 
    return 0;
}
