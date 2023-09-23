#include<iostream>
using namespace std;
int main()
{
int factorial=1;
    for(int n=4; n>=1; n--)
    {
     factorial=factorial*n;
    }
    cout<<"factorial\t"<<factorial;
return 0;
}