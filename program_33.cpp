#include<iostream>
using namespace std;
int main()
{
int s,e;
cout<<"Enter starting number\n";
cin>>s;
cout<<"Enter ending number\n";
cin>>e;
do
{
  s%2==!0;
  cout<<s<<"\t"<<endl;
  s+=2;
}
  while(s<=e);
}