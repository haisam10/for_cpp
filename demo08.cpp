#include <iostream>
using namespace std;
int main()
{
   int i,n,sum=0;

   cout<<"Input number of terms : ";
   cin>>n;

   cout<<endl<<"The odd numbers are :";
   for(i=1;i<=n;i++)
   {
    //  printf("%d ",2*i-1);
     cout<<2*i-1;
     sum+=2*i-1;
   }
   cout<<endl<<"The Sum of odd Natural Number upto "<<n<<" terms : "<<sum;
}
