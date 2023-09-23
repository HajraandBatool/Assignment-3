#include<iostream>
using namespace std;

int main()
{
    int i,j;
    i=4;
    do
    {
       j=i;
       do
       {
          cout<<i;
          j--;
       }
       while (j>=1);
       cout<<endl;
       i--;
    }
    while (i>=1);
}