
// write a program that display the product of all odd numbers from 1 to 10 using for loop.


#include<iostream>
using namespace std;

int main()
{
   int product=1;
    for(int n=1 ; n<10 ; n+=2 ){
         product=product*n;
         }
         cout<<"Result\t"<<product;
         
       return 0;
}