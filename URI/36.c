#include<stdio.h>
#include<math.h>
int main()
{
   float A,B,C,x;
   scanf("%f%f%f",&A,&B,&C);
   x=(B*B)-(4*A*C);
   if(x>0&&A!=0)
   {
      x=sqrt(x);
      double R1,R2;
      R1=(-B+(x))/(2*A);
      R2=(-B-(x))/(2*A);
      printf("R1 = %.5lf\n",R1);
      printf("R2 = %.5lf\n",R2);
   }
   else{
      printf("Impossivel calcular\n");
   }

}
