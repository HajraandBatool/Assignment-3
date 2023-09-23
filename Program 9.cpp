#include <iostream>
using namespace std;
int main ()
{
  float radius, Area, Circumference;
  float pi=3.14;
  cout << "Enter the radius of a cube: " << endl;
  cin >> radius;
  Area= 4*pi*radius*radius;
  cout << "Area of a cube is " <<Area<< endl;
  Circumference =4/3*pi*radius*radius*radius;
  cout << "Circumference of a cube is " <<Circumference <<endl;
  return 0;
}