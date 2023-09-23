#include<iostream>
using namespace std;

int main()
{ 
   int n,i,sum,fac;
   fac=1;
   sum=0;
   cout << "Enter value " << endl;
   cin >> n;
   {
      fac= fac*i;
      sum=fac+sum;
   }
   cout << "sum = " << sum;
}