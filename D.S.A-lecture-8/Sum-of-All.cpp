#include<iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Enter Any Number:";
	cin >> n;
	int sum=0,per;
	while(n>0)
	{
		per=n%10;
		sum=sum+per;
		n=n/10;
	}
	cout <<"Sum OF Digit :" <<sum;	
}
