#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d%d",&a,&b);
   if(a<b)printf("O JOGO DUROU %d HORA(S)\n",(a-b));
   else printf("O JOGO DUROU %d HORA(S)\n",((b+24)-a));

}
