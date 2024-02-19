#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int per;
    per=n%10;                            // Extract last digit
    while(n>=10) 
	{                        
    	n/=10;                           // Find first digit
    }
    per+=n;                              // Add first digit to sum
    cout << "Sum of first and last digit: " << per << endl;
    
    return 0;
}

