#include<iostream>
using namespace std;
int main()
{
   int n,m;
   while(1)
   {
      cin>>n;
      cin>>m;
      if(n==0||m==0)
      {
         break;
      }
      if(n>0&&m>0)
      {
         cout<<"primeiro"<<endl;
      }
      if(n>0&&m<0)
      {
         cout<<"quarto"<<endl;
      }

      if(n<0&&m<0)
      {
         cout<<"terceiro"<<endl;
      }
      if(n<0&&m>0)
      {
         cout<<"segundo"<<endl;
      }

   }
}
