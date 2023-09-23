#include <iostream>
using namespace std ;
int main ()
{ 
   int n;
   cout << "Enter your test score:" << endl;
   cin >> n;
   if(n>=90)
      cout << "Your grade is A" << endl;
   else if(n>=80)
      cout << "Your grade is B" << endl;
   else if(n>=70)
     cout << "Your grade is C" << endl;
   else if(n>=60)
     cout << "Your grade is D" << endl;
   else
      cout << "Your grade is F" << endl;
   return 0;
}