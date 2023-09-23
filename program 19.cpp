#include<iostream>
using namespace std;

int main()
{ 
   float radius, Circumference,area;
   int n,s;
   float pi=3.14;
   cout << "Enter the radius of circle" << endl;
   cin >> radius;
   cout << "Enter 1 to calculate area of circle or Enter 2 to calculate Circumference of circle" << endl;
   cin >> n;
   if(n==1)
   {
    area=pi*radius*radius ;
    cout << "Area of circle is " ;
    cout<<area;
   }
   else if (n==2)
   {
    Circumference = 2*pi*radius ;
    cout << "Circumference of circle is " ;
    cout<<Circumference ;
   }
   else
      cout << "Error" ;
}