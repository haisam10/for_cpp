#include <iostream>
using namespace std;
void  main(){
  int n,i,sum;
  int mn,mx;
    cout<<"Input the starting range or number : ";
        cin>>mn;
    cout<<"Input the ending range of number : ";
        cin>>mx;
    cout<<"The Perfect numbers within the given range : ";
  for(n=mn;n<=mx;n++){
    i=1;
    sum = 0;
    while(i<n){
      if(n%i==0)
           sum=sum+i;
          i++;
    }
    if(sum==n)
      cout<<n;
  }
      cout<<endl;
}
