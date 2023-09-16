#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,sum,ctr;
	int i,n,m,mm,nn;
	cout<<"Input the value of x :";
	cin>>x;
	cout<<"Input number of terms : ";
	cin>>n;
	sum =x; m=-1;
	cout<<"The values of the series:"<<endl; 
    cout<<x<<endl;
    for (i = 1; i < n; i++) 
    {
        ctr = (2 * i + 1);
        mm = pow(x, ctr);
        nn = mm * m;
        cout<<nn<<endl;
        sum = sum + nn;
        m = m * (-1);
	}
    cout<<endl<<"the sum = "<<sum<<endl;
}
