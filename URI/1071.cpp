#include<iostream>
using namespace std;
int main()
{
   int t,a,b,sum=0;
   cin>>a;
   cin>>b;
   if(a==b)
      cout<<sum;
   if(a<b)
   {
      for(a=a+1;a<b;a++)
      {
         if(a%2==1||a%2==-1)
            sum=sum+a;
      }
      cout<<sum;
   }
   if(a>b)
   {
      for(b=b+1;b<a;b++)
      {
         if(b%2==1||b%2==-1)
            sum=sum+b;
      }
      cout<<sum;
   }
}
