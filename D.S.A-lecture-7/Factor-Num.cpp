#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout <<"Factors Number of "<<n<<" are:";
    int i;
    for(i=1;i<=n;++i) 
	{
        if (n%i==0) 
		{
            cout <<i<<" ";
        }
    }
    cout << endl;

    return 0;
}


