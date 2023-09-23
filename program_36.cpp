#include<iostream>
using namespace std;
int main()
{
int n;
cout<<" Enter a number\n";
cin>>n;
int i=n-1;
  do{
    n=n*i;
    i--;
  }
   while(i>0);
  
    cout<<" Factorial is ="<<n;
       
}