#include<iostream>
using namespace std;
int main()
{
	int i,j,s;
	for(i=5;i>=1;i--)
	{
		for(s=1 ;s<=5-i ;s++)
		{
			cout <<"  ";
		}
		for(j=i ;j>=1 ;j--)
		{
			cout << j%2<<" ";
		}
		cout <<endl;
	}
}

