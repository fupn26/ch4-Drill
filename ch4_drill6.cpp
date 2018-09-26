#include "std_lib_facilities.h"

int main()
{
bool init = true;
double num;
double smallest = 0;
double largest = 0;
const string small = "This is the smallest so far.\n";
const string large = "This is the largest so far.\n";
//cout<<"Please enter a number!\n";
while (cin>>num)
	{
	cout<<"Your number is: "<<num<<'\n';
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
return 0;
}
