#include <stdio.h>
int main ()
{
    int N,HR,MIN,SEG;
    scanf("%d",&N);
    HR=N/3600;
    MIN=(N%3600)/60;
    SEG=N-((HR*3600)+(MIN*60));
    printf("%d:%d:%d\n",HR,MIN,SEG);
    //system("pause");
    return (0);
    }
