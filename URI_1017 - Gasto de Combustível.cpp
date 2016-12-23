#include <stdio.h>
int main ( ){
    int tempogasto,velocidademedia;
    float gastototal;
    scanf("%d",&tempogasto);
    scanf("%d",&velocidademedia);
    gastototal=(float)tempogasto*velocidademedia/12;
    printf("%.3f\n",gastototal);
    return 0;
}
