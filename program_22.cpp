#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter three numbers\n";
cin>>a>>b>>c;
  if((a>b)&&(a>c))
       cout<<"a is the maximum\n";
    else if((b>a)&&(b>c))   
       cout<<"b is the maximum\n";
   else 
   cout<<"c is the maximum\n";
   return 0; 

   } 
    