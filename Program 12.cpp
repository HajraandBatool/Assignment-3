#include <iostream>
using namespace std;
int main ()
{
  float a,b,c,s,Area,A;
  cout << "Enter the sides of triangle: " << endl;
  cin>>a>>b>>c;
  s=(a+b+c)/2;
  A=s*(s-a)*(s-b)*(s-c);
  Area =A/2;
  cout << "Area of triangle is " <<Area <<endl;
  return 0 ;
}