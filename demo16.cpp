#include <iostream>
using namespace std;

int main()
{
   int i,n,sum=0;

   cout<<"Input number of terms : ";
   cin>>n;
   cout<<endl<<"The even numbers are :";
   for(i=1;i<=n;i++)
   {
     cout<<2*i;
     sum+=2*i;
   }
   printf("\nThe Sum of even Natural Number upto %d terms : %d \n",n,sum);
   cout<<endl<<"The Sum of even Natural Number upto" <<n<<" terms :"<<sum<<endl;
} 
