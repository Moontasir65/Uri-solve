#include<iostream>
using namespace std;
int main()
{
   int i=1,j=60;
   cout<<"I="<<i<<" "<<"J="<<j <<endl;

      for (int a=1;a<=13;a++)
      {
       i=i+3;
       j=j-5;
      cout<<"I="<<i<<" "<<"j="<<j<<endl;
      if(j==0)
      {
         break;
      }
      }

}
