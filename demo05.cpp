#include <iostream>
using namespace std;
void main()
{       
    int i,n,sum=0;
	float avg;15;

    cout<<"Input the 10 numbers :  ";

	for (i=1;i<=10;i++)
	{
            cout<<"Number"<<i;
            cin>>n;
		sum +=n;
	}

	avg=sum/10.0;
    
    cout<<"The sum of 10 no is : "<<sum<<"The Average is : "<<avg;

}
