#include <iostream>
using namespace std;
int main ()
{
  int n, reverse=0;
  cout << "Enter three digit number: " << endl;
  cin >> n;
  while (n!=0)
  {
     int reminder=n%10;
     reverse=reverse*10+reminder;
     n=n/10;
  }
  cout <<"The reverse of given number is "<<reverse<< endl;
  return 0;
}