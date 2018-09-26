#include "std_lib_facilities.h"

int main()
{
int first;
int second;
const string small = "the smaller value is: ";
const string large = "the larger value is: ";
cout<<"PLease enter two integers!\n";
while(cin>>first>>second)
	{
	if (first < second)
	cout<<small<<first<<'\n'<<large<<second<<'\n';
	else if (second > first)
	cout<<small<<second<<'\n'<<large<<first<<'\n';
	else cout<<"the first value is: "<<first<<'\n'<<"the second value is: "<<second<<'\n';
	}
return 0;
}

