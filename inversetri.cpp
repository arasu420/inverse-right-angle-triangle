#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
    for (int a = n; a > 0; a--)
	{
		for (int b = 1; b <= a; b++)
		{
			cout<<"1"<<" ";
		}
		cout<<endl;
	}
	return 0;
}
