#include<iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Enter Any Number:";
	cin >>n;
	cout << endl;
	cout <<"Factorial Number Are:";
	int i=1,mul=1;
	do
	{
		mul*=i;
		i++;	
	}while(i<=n);
	
	cout << mul;
	
}
