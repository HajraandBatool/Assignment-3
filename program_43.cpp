#include<iostream>
using namespace std;
int main()
{
  int n,sum=0;
  cout<<"Enter a number\n";
  cin>>n;
      for(int i=1; i<=n; i++)
      sum=sum+i*i;
      cout<<"sum of square is:"<<sum;
return 0;
}