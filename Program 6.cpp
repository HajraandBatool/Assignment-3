#include <iostream>
using namespace std;
int main()
{
  float Height;
  float Centimeters;
  cout << "Enter your height in inches: " << endl;
  cin>>Height;
  Centimeters= 2.54*Height;
  cout << "Your height in centimeters is  " <<Centimeters<< endl;
  return 0;
}