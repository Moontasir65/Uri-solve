#include<iostream>
using namespace std;
int main()
{
   int N;
   float a,b,c;
   cin>>N;
   for (int i=1;i<=N;i++)
   {
      cin>>a>>b>>c;
      float d=((a+b+c)/3);
      cout.precision(2  );
       cout<<d<<endl;

   }
}
