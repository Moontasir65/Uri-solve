#include<iostream>
using namespace std;
int main()
{
   int max=0,p,n,a[]={},i;
   for(i=1;i<=5;i++)
   {
      cin>>n;
      if(n>max)
      {
         max=n;
         p=i;
      }

   }
   cout<<max<<endl<<p;
}
