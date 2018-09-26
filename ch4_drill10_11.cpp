#include "std_lib_facilities.h"

int main()
{
vector <double> values;
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
	if (unit == "m")
		{
		num = num;
		values.push_back(num);
		}
	else if (unit == "cm")
		{
		num = num/m_cm;
		values.push_back(num);
		}
	else if (unit == "ft")
		{
		num = num*ft_in*in_cm/m_cm;
		values.push_back(num);
		}
	else if (unit == "in")
		{
		num = num*in_cm/m_cm;
		values.push_back(num);
		}
	else
		{
		cout<<"Sorry, your unit is not supported!\n";
		}
	if (init)
		{
		smallest = num;
		largest = num;
		init = false;
		}
	else if (num < smallest)
		{
		cout<<small;
		smallest = num;
		}
	else if (largest < num)
		{
		cout<<large;
		largest = num;
		} 
	}
sort(values); //11-es feladat
for (int i = 0; i != values.size(); ++i)
	{
	cout<<values[i]<<'\n';
	}
return 0;
}
