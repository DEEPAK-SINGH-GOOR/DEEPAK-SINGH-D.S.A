#include<iostream>
using namespace std;
int main()
{
	int i,j,s;
	for(i=1;i<=5;i++)
	{	
		for(s=1 ;s<=i-1 ;s++ )
		{
			cout <<"  ";
		}
		for(j=5 ;j>=i;j-- )
		{
			cout << j <<" ";
		}
		cout <<endl;
	}
}
