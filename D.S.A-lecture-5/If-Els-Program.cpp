#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"Enter A:";
	cin >> a;
	cout<<"Enter B:";
	cin >> b;
	cout<<"Enter C:";
	cin >> c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<"A is Big";
		}
		else
		{
			cout<<"C is Big";
		}
	}
	else
	{
		if(b>c)
		{
			cout<<"B is Big";
		}
		else
		{
			cout<<"C is Big";
		}
	}
}

