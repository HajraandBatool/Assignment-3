#include<iostream>
using namespace std;

int main()
{ 
   int temp;
   cout << "Enter the temperature" << endl;
   cin >> temp;
   if(temp>35)
    cout << "Hot Day" ;
   else if (temp>=25)
    cout << "Pleasunt Day" ;
    else
      cout << "Cool Day" ;
}