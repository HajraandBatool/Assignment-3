#include<iostream>
using namespace std;

int main()
{
    int i,n,count;
    count=0;
    cout << "Enter a number" << endl;
    cin >> n;
    for (i=1; i<=n; i++)
    {
        if (n%i==0)
        {
           count++;
        }
    }
    if (count==2)
    cout << "Prime Number" ;
    else
    cout << "Not Prime Number";
}