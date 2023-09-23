#include <iostream>
using namespace std;
int main ()
{
  int miles;
  float kilometers;
  cout << "Enter the miles: " << endl;
  cin >> miles;
  kilometers =1.609*miles;
  cout << "conversion of miles into kilometers is "<<kilometers << endl;
  return 0;
}