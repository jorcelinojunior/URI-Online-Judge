#include <stdio.h>

int main ()
{
    float N1,N2,N3,N4,media,nt_ex,media_ex;
    //ENTRADA DE DADOS>>>>>>>>
    scanf ("%f",&N1);
    scanf ("%f",&N2);
    scanf ("%f",&N3);
    scanf ("%f",&N4);
    //PROCESSAMENTO>>>>>>>>>>>>
    media=((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
    printf("Media: %.1f\n",media);
    if (media>=7)
       {
                 printf("Aluno aprovado.\n");
                 }
                 else if (media<5)
                 {
                      printf("Aluno reprovado.\n");
                      }
                      else if (media >=5 && media<=6.9)
                      {
                           printf ("Aluno em exame.\n"); 
                           scanf ("%f",&nt_ex);
                           printf ("Nota do exame: %.1f\n",nt_ex);
                           //scanf ("%f",&nt_ex);
                           //PROCESSA MEDIA DO EXAME>>>>>>>>>>>>
                           media_ex=(media+nt_ex)/2;
                           if (media_ex >= 5)
                           {
                                        printf("Aluno aprovado.\n");
                                        printf("Media final: %.1f\n",media_ex);
                                        }                  
                                        else 
                                        {
                                             printf ("Aluno reprovado.\n");
                                             printf("Media final: %.1f\n",media_ex);
                                             }
                           }    
    //system ("pause");
    return (0);
    }
