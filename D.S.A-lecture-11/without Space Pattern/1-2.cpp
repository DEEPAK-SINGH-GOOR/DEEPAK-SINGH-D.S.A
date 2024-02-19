#include<iostream>
using namespace std;
int main()
{
	int i,j,s;
	for(i=1;i<=5;i++)
	{
		for(s=5;s>=5-i;s--)
		{
			cout <<"  ";
		}
		for(j=i;j<=5;j++)
		
		{
			cout << j<<" ";
		}
		cout << endl;
	}
}
