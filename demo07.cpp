#include <iostream>
using namespace std;
int main()
{
   int j,i,n;
   cout<<"Input upto the table number starting from 1 : ";
   cin>>n;

   cout<<"Multiplication table from 1 to "<<n;
   for(i=1;i<=10;i++)
   {
     for(j=1;j<=n;j++)
     {
        cout<<j<<"X"<<i<<"="<<i*j<<" ";
      }
        cout<<endl;
    }
}
