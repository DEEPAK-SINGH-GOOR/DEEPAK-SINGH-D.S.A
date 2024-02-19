#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0; // Initialize sum to 0
    cout <<"Enter Any Number:"; 
    cin >> n;
    cout << endl;
    cout <<"Sum of Numbers Are:";
    int i = 1;
    while(i <= n) // Change loop condition to include n
    {
        sum += i;
        i++;
    }
    cout << sum;
    return 0;    
}

