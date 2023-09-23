#include <iostream>
using namespace std;
int main()
{
  float a,b,c,d;
  float Sum, Average, Product ;
  cout << "Enter First number: " << endl;
  cin >> a;
  cout << "Enter second number: " << endl;
  cin >> b;
  cout << "Enter third number: " << endl;
  cin >> c;
  cout << "Enter fourth number: " << endl;
  cin >> d;
  Sum = a +b+c+d;
  cout << "Sum of these numbers is " <<Sum<< endl;
  Average = Sum/4.0;
  cout << "Average of these numbers is " <<Average<< endl;
  Product = a*b*c*d;
  cout << "Product of these numbers is " <<Product<< endl;
  return 0;
}