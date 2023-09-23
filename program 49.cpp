#include<iostream>
using namespace std;

int main()
{
   int n1,n2,i,gr;
   gr=1;
   cout << "Enter first number" << endl;
   cin >> n1;
   cout << "Enter second number" << endl;
   cin >> n2;
   for (i=1; i<=n1 && i<=n2; i++)
   {
      if (n1%i==0 && n2%i==0)
      {
         gr=i;
      }
   }
   cout<<gr;
}