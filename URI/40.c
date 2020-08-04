#include<stdio.h>
int main()
{
float N1,N2,N3,N4,N5,ravg;
double av;
scanf("%f%f%f%f",&N1,&N2,&N3,&N4);
N1*=2;
N2*=3;
N3*=4;
N4*=1;
av=(N1+N2+N3+N4)/10;

if(av>=7.0)
    {
   printf("Media: %.1f\nAluno aprovado.\n",av);
     }
else if(av<5.0)
   {
   printf("Media: %.1f\nAluno reprovado.\n",av);
   }

else if(av>=5.0&&av<=6.9)
 {
  printf("Media: %.1f\nAluno em exame.\n",av);
 scanf(" %f",&N5);
  printf("Nota do exame: %.1f\n",N5);

 ravg=(N5+av)/2;
 if(ravg>=5.0)
 {
    printf("Aluno aprovado.\n");
    printf("Media final: %.1f\n",ravg);

 }
  else if(ravg<=4.9)
   {
   printf("Aluno reprovado.\n");
    printf("Media final: %.1f\n",ravg);
  }
 }
}
