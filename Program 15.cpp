#include <iostream>
using namespace std;
int main ()
{
  float salary, bonus;
  int grade;
  cout << "Enter your salary:" << endl;
  cin >> salary;
  cout << "Enter your grade" << endl;
  cin >> grade;
  if (grade>15)
     bonus =salary*50/100;
  else
      bonus=salary*25/100;
  salary=salary+bonus;
  cout << "Your total salary is Rs. " <<salary<<endl;
  return 0; 
}