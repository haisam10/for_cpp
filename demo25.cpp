#include <iostream>
using namespace std;

int main()
{
   int i,n,sum=0;
   cout<<"Input the number of terms : ";
   cin>>n;
   cout<<"The square natural upto "<<n<<" terms are :";
   for(i=1;i<=n;i++)
   {
     cout<<i*i;
     sum+=i*i;
   }
   cout<<endl<<"The Sum of Square Natural Number upto "<<n<<"terms = "<<sum;
}
