#include <iostream>
using namespace std;
int main()
{
   int i,n;
   float s=0.0;
    cout<<"Input the number of terms : ";
    cin>>n;
    cout<< endl <<endl;
   for(i=1;i<=n;i++)
   {
       if(i<n)
       {
     cout << "1/"<<i;
     s+=1/(float)i;
       }
     if(i==n)
     {
     cout<<"1/"<<i;
     s+=1/(float)i;
     }
     }
        cout<<endl<<"Sum of Series upto "<<n<<"terms :"<<s<<endl;
}  
