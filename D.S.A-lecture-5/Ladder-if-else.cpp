#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Any Number:";
	cin >>n;
	if(n<0)
	{
		cout<<"You Enter Negative Value !! ";
	}
	else if(n==0) 
	{
		cout <<"You Enter Nautral Value !! ";
	}
	else
	{
		cout<<"You Enter Positive Value !! ";
	}	
}

