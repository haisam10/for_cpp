#include <iostream>
using namespace std;
int main()
{
  int n,i,sum;

    cout<<"Input the  number : ";
    cin>>n;
    sum = 0;
    cout<<"The positive divisor  : ";
    for (i=1;i<n;i++)
      {
      if(n%i==0)
         {
         sum=sum+i;
         cout<<i<<" ";
         }
       }
    cout<<endl<<"The sum of the divisor is : "<<sum;
    if(sum==n)
        cout<<endl<<"So, the number is perfect.";
    else
        cout<<endl<<"So, the number is not perfect.";
    cout<<endl;
}
