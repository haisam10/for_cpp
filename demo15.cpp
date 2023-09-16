#include <iostream>
using namespace std;
int main(){
  int i,f=1,num;

  cout<<"Input the number : ";
  cin>>num;

  for(i=1;i<=num;i++)
      f=f*i;

  printf("The Factorial of %d is: %d\n",num,f);
  cout<<"The Factorial of"<<num<<"of"<<f;
}
