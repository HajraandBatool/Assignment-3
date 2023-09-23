#include <iostream>
using namespace std;
int main ()
{
  float radius, Area, Circumference;
  float pi=3.14;
  cout << "Enter the radius of a circle: " << endl;
  cin >> radius;
  Area= pi*radius*radius;
  cout << "Area of a circle is " <<Area<< endl;
  Circumference =2*pi*radius;
  cout << "Circumference of a circle is " <<Circumference <<endl;
  return 0;
}