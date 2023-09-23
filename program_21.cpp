#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter three numbers\n";
cin>>a>>b>>c;
if(a<b)
       if(a<c)
            cout<<a<<"is the smallest number\n";
       else
            cout<<c<<"is the smallest number\n";
            
 else
     if(b<c)           
         cout<<b<<"is the smallest number\n";
     else
           cout<<c<<"is the smallest number\n";
           return 0;
   } 
    