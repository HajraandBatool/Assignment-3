#include<iostream>
using namespace std;
int main()
{ 
    int n,a,r, arm=0;
    a=n;
    cout << "Enter number" << endl;
    cin >> n;
	  while(n>0)
	  { 
	    r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
      }
      if(a==arm)
       cout<<"Armstrong";
      else
        cout << "Not armstrong";
}