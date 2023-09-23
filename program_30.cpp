#include<iostream>
using namespace std;
int main()
{
int factorial,n;
cout<<"Enter a number\n";
cin>>n;
factorial=1;
for( ; n>=1; n--)
   factorial=factorial*n;
  cout<<"factorial is\t"<<factorial<<endl;
  return 0;
  
}