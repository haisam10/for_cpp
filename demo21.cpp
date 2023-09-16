#include <iostream>
using namespace std;

int main()
{   long int n,i,t=9;
	int sum =0;
    cout<<"Input the number or terms :";
    cin>>n;
	for (i=1;i<=n;i++)
	{ sum +=t;	  
      cout<<t<<"  ";
	  t=t*10+9;
	}
	cout<<endl<<"The sum of the series ="<<sum;
} 
