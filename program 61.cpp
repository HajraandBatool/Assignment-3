#include<iostream>
using namespace std;

int main()
{
    int n1,n2,i,j;
    cout << "Enter first number" << endl;
    cin >> n1;
    cout << "Enter second number" << endl;
    cin >> n2;
    for (i=n1; i<=n2; i++)
    {
      for (j=2; j<=i; j++)
      {
        if(i%j==0)
        break;
      }
      if(i==j)
      cout<<j<<endl;
    }
}