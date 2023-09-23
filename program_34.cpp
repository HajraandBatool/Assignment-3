#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<" Enter a number\n";
  cin>>a;
  cout<<" Enter a number\n";
  cin>>b;
  int c=1, result=1;
     do
     {
       result=result*a;
       c++;
     }
       while(c<=b);
       cout<<"result:"<<result;
  
  return 0;
       
}