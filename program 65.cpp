#include<iostream>
using namespace std;
int main()
{ 
    int n,i,num,r,sum=0;
    cout << "Enter number" << endl;
    cin >> num;
    cout << "Armstrong number= ";
    for(i=1; i<=num; i++)
	{ 
	  sum =0;
      n=i;
	  while(n!=0)
	  { 
	    r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
      }
      if(i==sum)
     {
       cout<<i<<endl;
 	}
   }
	return 0;
}