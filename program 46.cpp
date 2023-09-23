#include<iostream>
using namespace std;

int main()
{ 
   int x,n,i,sum;
   sum=0;
   cout << "Enter value of x" << endl;
   cin >> x;
   cout << "Enter value of n" << endl;
   cin >> n;
   for (i=1; i<=n; i++)
   sum=sum+ pow(x,i);
   cout << "sum = " << sum;
}