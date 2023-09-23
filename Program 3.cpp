#include <iostream>
using namespace std;
int main()
{
	int Base;
	int Height;
	float Area;
	cout<<"Enter the base of triangle: " <<endl;
	cin>>Base;
	cout<<"Enter the height of triangle: " <<endl;
	cin>>Height;
	Area=1.0/2.0*Base*Height;
	cout<<Area;
	return 0;
}
