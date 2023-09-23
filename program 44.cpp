#include<iostream>
using namespace std;

int main()
{ 
   int a,i;
   long int sum;
   sum=0;
   cout << "Enter a number" << endl;
   cin>>a;
   for (i=1; i<=a; i++)
    sum=sum+(i*i);
   cout << "sum = " << sum;
}