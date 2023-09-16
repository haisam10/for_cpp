#include <iostream>
using namespace std;

int main()
{
  int n,i; 
  long sum=0;
  long int t=1;
  cout<<"Input the number of terms : ";
  cin>>n;
  for(i=1;i<=n;i++)
  {
     cout<<t;
      if (i<n)
      {
          cout<<"+ ";   
      }
     sum=sum+t;
     t=(t*10)+1;
  }
        cout<<endl<<"The Sum is : "<<sum;
}
