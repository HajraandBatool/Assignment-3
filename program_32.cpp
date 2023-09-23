#include<iostream>
using namespace std;
int main()
{
float n,d;
n=1.0;
d=2.0;
do
{
 n=n+n/d;
 d=d+2;
}
  while(d<=100);
   cout<<"sum of series is:"<<n;
       
}