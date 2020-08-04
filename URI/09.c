#include<stdio.h>
int main()
{
  char name[100];
  double sold,bonus,tsalary,fsalary;
  scanf("%s",&name);
  scanf("%lf",&fsalary);
  scanf("%lf",&sold);
  bonus=(sold*15)/100;
  tsalary=fsalary+bonus;
  printf("TOTAL = R$ %.2lf\n",tsalary);
}

