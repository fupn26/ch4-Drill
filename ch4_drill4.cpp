#include "std_lib_facilities.h"

int main()
{
double first;
double second;
const string small = "the smaller value is: ";
const string large = "the larger value is: ";
const string equal = "the numbers are equal";
cout<<"Please enter two integers!\n";
while (cin>>first>>second)
	{
	if (first == second)
	cout<<equal<<'\n';
	else if (first < second)
	cout<<small<<first<<'\n'<<large<<second<<'\n';
	else if (first > second)
	cout<<small<<second<<'\n'<<large<<first<<'\n';
	return 0;
	}
}
