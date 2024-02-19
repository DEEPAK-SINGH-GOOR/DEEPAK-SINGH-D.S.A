#include<iostream>
using namespace std;

int main() 
{
	int a,i,j;
	
    for(i=1;i<=5;i++) 
	{
        a=1;
        for(j=1;j<=i;j++) 
		{
            cout <<a<< " ";
            a=a*10+1;
        }
        cout << endl;
    }
    return 0;
}

