#include "std_lib_facilities.h"

int main()
{
bool init = true;
double num;
string unit;
double smallest = 0;
double largest = 0;
const double m_cm = 100;
const double in_cm = 2.54;
const double ft_in = 12;
const string small = "This is the smallest so far.\n";
const string large = "This is the largest so far.\n";
cout<<"Accepted units: cm, m, in, ft\n";
cout<<"Please enter numbers with one of the units above!\n";
while (cin>>num>>unit)
	{
	if (unit != "m" and unit != "cm" and unit != "ft" and unit != "in")
		cout<<"Sorry, your unit is not supported!\n";
	else
		cout<<"Your number is: "<<num<<unit<<'\n';
//	if (init)
//		{
//		smallest = num;
//		largest = num;
//		init = false;
//		}
//	else if (unit == 'm' num < smallest)
//		{
//		cout<<small;
//		smallest = num;
//		}
//	else if (largest < num)
//		{
//		cout<<large;
//		largest = num;
//		} 
	}
return 0;
}
