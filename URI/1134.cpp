#include<iostream>
using namespace std;
int main()
{
   int a,c=0,co=0,cou=0;
   while(1)
   {
      cin>>a;
      if(a==1)
         {

        c++;
         }
      if(a==2)
         {

        co++;
         }
      if(a==3)
         {

         cou++;
         }
      if(a==4)
         {
        break;
         }
         else{

            continue;
         }
   }
cout<<"MUITO OBRIGADO"<<endl;
   cout<<"Alcohol: "<<c<<endl;
    cout<<"Gasolina: "<<co<<endl;
     cout<<"Diesel: "<<cou<<endl;


}
